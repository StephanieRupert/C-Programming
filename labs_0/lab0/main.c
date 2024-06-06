//
// Name: Main
//
// Description: Example used in class to show how to use the debugger
//

#include <stdio.h>
#include <stdlib.h>

int arraySize = 100000;

void
setData(int *data,int size)
    {
    int i;
    data[0] = 0;
    for (i = 1; i < size; ++i)
        {
        data[i] = data[i - 1] + 2;
        }
    }

int
add(int *data,int size)
    {
    int i,sum;
    for (sum = i = 0; i < size; ++i)
        {
        sum += data[i];
        }
    return sum;
    }

int
main(int argc,char** argv)
    {
    int sum;
    int data[10]; //create an array with size 10

    setData(data,arraySize);

    sum = add(data,arraySize);

    printf("The sum of the data is %d\n",sum);

    return EXIT_SUCCESS;
    }
