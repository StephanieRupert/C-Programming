#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"


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

int
main(int argc,char **argv)
    {
    int *items;
    int size;

    printf("How many numbers to read in? ");
    size = readInt(stdin);
    if (size == 0)
        exit(1);
        //printf("The mean and variance does not exist");
    
    double *a = malloc(sizeof(double) * size);
    if (a == 0)
        {
        fprintf(stderr, "memory allocation failed\n");
        exit(1);
        }

    int i;

    for (i = 0; i < size; ++i)
        {
        a[i] = readReal(stdin);
        }

    int j;
    double var;

    double mean = sum(items,size) / size;

    for (j = 0; j < size; ++j)
        {
        var = (((a[0] - mean) * (a[0] - mean)) + ((a[1] - mean) * (a[1] - mean) + ((a[2] - mean) * (a[2] - mean)))) / 3;
        }    

    printf("The mean is %f\n",mean);
    printf("The variance is %f\n",var);

    return 0;
    }

