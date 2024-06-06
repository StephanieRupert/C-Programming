#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int
main(int argc,char **argv)
    {
    int count,index,arrayCounter,printIndex;
    int *array;
    
    count = 10;
   
    array = malloc(sizeof(int) * count);
    if (array == 0)
        {
        fprintf(stderr, "memory allocation failed\n");
        exit(1);
        }

    index = 1;
    while (index < count)
        {
        array[index] = array[index - 1] * 2;
        index = index + 1;
        }
   
    printIndex = 0;
    arrayCounter = 0;
    while (printIndex < count)
        {
        printf("array[%d]: %d\n",arrayCounter,array[printIndex]);
        printIndex = printIndex + 1;
        arrayCounter = arrayCounter + 1;
        }

    return 0;
    }
