divide:		divide.o splitters.o scanner.o
	gcc divide.o splitters.o scanner.o -o divide 

divide.o:		divide.c splitters.h
	gcc -Wall -g -c divide.c

splitters.o:	splitters.c scanner.h 
	gcc -Wall -g -c splitters.c 

scanner.o:	scanner.c scanner.h
	gcc -Wall -g -c scanner.c

clean:
	rm divide.o splitters.o scanner.o divide.exe 
