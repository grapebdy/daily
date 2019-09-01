all: build

help:
	@echo "make help: for more detail info"

build:src

src:libs
	make -C src all

libs:FORCE
	make -C libs all

clean:
	@rm -fr *.o $(TARGET) *.so *.so.* bin/* *.a
	make -C src clean
	make -C libs clean

PHONY +=FORCE

FORCE:
.PHONY: $(PHONY)
