VERSION=0.1
CROSS_COMPILE=
CC = $(CROSS_COMPILE)gcc
CXX= $(CROSS_COMPILE)g++
AR= $(CROSS_COMPILE)ar
STRIP= $(CROSS_COMPILE)strip

CFLAGS += -I. -c -Wall
LDFLAGS += -L. -lleet
LIBFLAGS += -shared -fPIC

TARGET  := leet_two_sum
OBJS    := leet_two_sum.o
LIBOBJS := libleet.o

all: build

build: libs/libleet $(OBJS) $(TARGET)

libs/libleet: $(LIBOBJS)
	@$(AR) -cr $@.a $^
	+$(CC) $(LIBFLAGS) $^ -o $@.so.$(VERSION)
	@$(STRIP) --strip-unneeded $@.so.$(VERSION)
	@ln -sf libleet.so.$(VERSION) $@.so

%:%.o
	$(CC) -o bin/$@ $(LDFLAGS) $^

%.o:%.c
	$(CC) -o $@ $(CFLAGS) $^

clean:
	@rm -fr *.o $(TARGET) *.so *.so.* bin/*
