VERSION=0.1
CROSS_COMPILE=
CC = $(CROSS_COMPILE)gcc
CXX= $(CROSS_COMPILE)g++

CFLAGS += -I../include -c -Wall
CXXFLAGS += -I../include -c -Wall
LDFLAGS += -L../libs -lleet

TARGET= leet_two_sum
OBJS= leet_two_sum.o

TARGET_DIR :=../bin/

all: build

build: $(TARGET_DIR)$(TARGET)

$(TARGET_DIR)$(TARGET) :$(OBJS)
	$(CC) $^ $(LDFLAGS) -o $@

%.o:%.cpp
	$(CC) -o $@ $(CXXFLAGS) $<

%.o:%.c
	$(CC)  -o $@ $(CFLAGS) $<

clean:
	@rm -fr *.o $(TARGET) *.so *.so.* bin/* *.a
