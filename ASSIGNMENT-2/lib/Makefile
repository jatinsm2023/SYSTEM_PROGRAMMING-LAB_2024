SHELL = /bin/sh
CC = gcc 
CFLAGS = -O2 -g -I.
RM = rm -f

library: objectgenerator
	ar rcs librecrel.a order1/soln1.o order2/soln2.o order3/soln3.o

objectgenerator:
	cd order1;make
	cd order2;make
	cd order3;make


distclean: clean
	-$(RM) librecrel.a

clean:
	cd order1;make clean
	cd order2;make clean
	cd order3;make clean
