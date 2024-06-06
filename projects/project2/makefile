eat:		eat.o io.o scanner.o logic.o
	gcc eat.o io.o scanner.o logic.o -o eat 

test:	
	cat test.dat | eat

eat.o:		eat.c logic.h io.h scanner.h
	gcc -Wall -g -c eat.c

io.o:		io.c io.h scanner.h
	gcc -Wall -g -c io.c 

scanner.o:	scanner.c scanner.h
	gcc -Wall -g -c scanner.c

logic.o:	logic.c io.h logic.h
	gcc -Wall -g -c logic.c

clean:
	rm eat.o io.o scanner.o logic.o eat.exe 
