game100:		game100.o scanner.o
	gcc game100.o .o scanner.o -o game100 

game100.o:		game100.c .h scanner.h
	gcc -Wall -g -c game100.c

scanner.o:	scanner.c scanner.h
	gcc -Wall -g -c scanner.c

run:	game100
	game100

puzzle:	game100
	cat SOLVE | game100

clean:
	rm game100.o scanner.o game100.exe 
