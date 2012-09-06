
all:
	-rm lib.o
	-rm lib
	make lib

lib:	lib.o
	c++ -ggdb -o lib lib.c
lib.o:	lib.c
	c++ -c -ggdb lib.c

clean:
	-rm lib.core
	-rm lib.o
