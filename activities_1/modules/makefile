# top level rule says what prog depends on (prog.o and module.o)
# and how to rebuild prog should either prog.o or module.o change

prog:       prog.o module.o
	gcc prog.o module.o -o prog

# rules for each of the modules

prog.o:     prog.c module.h
	gcc -Wall -g -c prog.c

module.o:   module.c module.h
	gcc -Wall -g -c module.c

clean:
	rm prog.o module.o
