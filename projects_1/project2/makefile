phone:	phone.o io.o logic.o
	gcc phone.o io.o logic.o -o phone

phone.o:	phone.c logic.c io.c
	gcc -Wall -std=c99 -c phone.c

io.o:		io.c logic.h
	gcc -Wall -g -c io.c

logic.o:	logic.c io.h
	gcc -Wall -g -c logic.c

scanner.o:	scanner.c
	gcc -Wall -g -c scanner.c

test:
	cat testNum.dat | phone to
	cat testChar.dat | phone from

clean:
	rm phone.o io.o logic.o scanner.o
