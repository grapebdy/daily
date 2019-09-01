VERSION=0.1
CROSS_COMPILE=
CC = $(CROSS_COMPILE)gcc
CXX= $(CROSS_COMPILE)g++
AR= $(CROSS_COMPILE)ar
STRIP= $(CROSS_COMPILE)strip

CFLAGS += -I../include -c -Wall
LDFLAGS += -L. -lleet
LIBFLAGS += -shared -fPIC

LIBOBJS = libleet.o

all: libleet

libleet: $(LIBOBJS)
	@$(AR) -cr $@.a $^
	+$(CC) $(LIBFLAGS) $^ -o $@.so.$(VERSION)
	@$(STRIP) --strip-unneeded $@.so.$(VERSION)
	@ln -sf $@.so.$(VERSION) $@.so

%:%.o
	$(CC) $(LDFLAGS) $< -o bin/$@

%.o:%.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	@rm -fr *.o $(TARGET) *.so *.so.* bin/* *.a
