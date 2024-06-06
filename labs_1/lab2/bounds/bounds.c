//3399

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
main(int argc,char **argv)
    {
    int start,index,value;
    int array[6];

    printf("What is the initial integer value? ");
    scanf("%d",&start);
    printf("You entered the value: %d\n",start);

    array[0] = start;
    array[1] = array[0] * 2;
    array[2] = array[1] * 2;
    array[3] = array[2] * 2;
    array[4] = array[3] * 2;
    array[5] = array[4] * 2;

    printf("The filled array is:\n");
    printf("\t array[0] = %d\n",array[0]);
    printf("\t array[1] = %d\n",array[1]);
    printf("\t array[2] = %d\n",array[2]);
    printf("\t array[3] = %d\n",array[3]);
    printf("\t array[4] = %d\n",array[4]);
    printf("\t array[5] = %d\n",array[5]);

    printf("Give me an out-of-bounds index: ");
    scanf("%d",&index);
    printf("Give me an integer: ");
    scanf("%d",&value);
    printf("Writing the value %d to index %d (the program may fail)\n",value,index);
    
    array[index] = value;
    
    printf("The value at array[%d] is %d\n",index,array[index]);
    printf("It didn't fail (but it could have).");

    return 0;
    }
