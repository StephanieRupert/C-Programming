#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "scanner.h"


int
countEvens(int a,int s)
    {
    if (s == 0)
        return 0;
    else if (a % 2 == 0)
        return 1 + countEvens(a+1,s-1);
    else
        return 0 + countEvens(a+1,s-1);
    }    

int
sum(int *numbers,int size)
    {
    return numbers;
    }

int
promptForInteger(char *str)
    {
    printf("%s",str);
    return readInt(stdin);
    }

int *
getNumbers(int *size)
    {
    int i;
    
    int count = promptForInteger("How many integers? ");
    int *values = allocate(sizeof(int) * count);
    char *prompt = "Enter the first integer: ";
    for (i = 0; i < count; ++i)
        {
        values[i] = promptForInteger(prompt);
        prompt = "Next: ";
        }
    *size = count;
    return values;
    }

double
getMean(int *numbers,int size)
    {
    return sum(numbers,size) / (double) size;
    }
    
int
main()
    {
    int size;
    int *numbers = getNumbers(&size);

    //numbers is an array of numbers

    printf("The mean is %lf\n",getMean(numbers,size));
    printf("The number of even integers is %d\n",countEvens(numbers,size));

    return 0;
    }
