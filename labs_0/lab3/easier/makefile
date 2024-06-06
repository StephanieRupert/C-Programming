proggy:		proggy.o lib1.o lib2.o lib3.o lib4.o linked.o
	gcc proggy.o lib1.o lib2.o lib3.o lib4.o linked.o -o proggy

linked.o:	linked.c proggy.c lib1.h lib3.h
	gcc -Wall -g -c linked.c

lib1.o:		lib1.h
	gcc -Wall -g -c lib1.c

lib2.o:		lib2.h
	gcc -Wall -g -c lib2.c

lib3.o:		lib3.h
	gcc -Wall -g -c lib3.c

lib4.o:		lib4.h
	gcc -Wall -g -c lib4.c 

clean:
	rm proggy.o linked.o lib1.o lib2.o lib3.o lib4.o
