CC = gcc

hello_frobber: memfrobber.o hello_frobber.o
memfrobber.o: memfrobber.c memfrobber.h
hello_frobber.o: hello_frobber.c
hello_frobber.c:
	./generate_frobber.sh
