#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"


int *
getNumbers(int size)
    {
    int *array = malloc(sizeof(int) * size);
    if (array == 0)
        {
        fprintf(stderr, "memory allocation failed\n");
        exit(1);
        }

    int i;
    
    for (i = 0; i < size; ++i)
        {
        printf("Give me an integer: ");
        array[i] = readInt(stdin);
        }
    
    return array;
    }

int
sum(int *items,int size)
    {
    int i;
    int sum;

    for (i = 0; i < size; ++i)
        {
        sum = sum + items[i];
        }
    
    return sum;
    }

double
mean(int *numbers,int size)
    {
    return sum(numbers,size) / size;
    }

int
countEvens(int *items,int size)
    {
    int i;
    int count;

    for (i = 0; i < size; ++i)
        {
        if (items[i] % 2 == 0)
            count = count + 1;
        }
    
    return count;
    }

int
main(int argc,char **argv)
    {
    int size, *numbers;
    
    printf("How many numbers are you going to enter? ");
    size = readInt(stdin);
    numbers = getNumbers(size);
    
    printf("The mean is %f\n",mean(numbers,size));
    printf("The number of even integers is %d\n",countEvens(numbers,size));
   
    return 0;
    }

