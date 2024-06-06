#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    int count,index;
    int array[10];  //allocate a ten-slot static array
    
    count = sizeof(array) / sizeof(int);
    
    array[0] = 1;
    
    index = 1;
    while (index < count)
        {
        array[index] = array[index - 1] * 2;
        index = index + 1;
        }
    
    printf("array[0]: %d\n",array[0]);
    printf("array[1]: %d\n",array[1]);
    printf("array[2]: %d\n",array[2]);
    printf("array[3]: %d\n",array[3]);
    printf("array[4]: %d\n",array[4]);
    printf("array[5]: %d\n",array[5]);
    printf("array[6]: %d\n",array[6]);
    printf("array[7]: %d\n",array[7]);
    printf("array[8]: %d\n",array[8]);
    printf("array[9]: %d\n",array[9]);
    
    return 0;
    }
