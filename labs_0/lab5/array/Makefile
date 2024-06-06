driver: driver.o array.o
	gcc -Wall -Wextra array.o driver.o -o driver

driver.o: driver.c
	gcc -Wall -Wextra -c driver.c

array.o: array.c
	gcc -Wall -Wextra -c array.c

test: driver
	./driver

clean:
	rm -f driver *.exe *.o
