prog	: prog.o io.o process.o
	gcc -Wall -g prog.o io.o process.o -o prog

prog.o	: prog.c io.h process.h
	gcc -Wall -g -c prog.c

io.o	: io.c io.h
	gcc -Wall -g -c io.c

process.o	: process.c process.h
	gcc -Wall -g -c process.c

clean:
	rm -f *.o
