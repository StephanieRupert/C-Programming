//STUDENT: The program did not fail with indices as high as 9999999999999999 (16 digits)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    double arrayDoubles[5];
    int count,index;

    count = sizeof(arrayDoubles) / sizeof(int);

    printf("What is the inital value? ");
    scanf("%lf",&arrayDoubles[0] );
    printf("You entered the value %lf\n",arrayDoubles[0]);
    
    index = 1;
    while (index < count)
        {
        arrayDoubles[index] = arrayDoubles[index - 1] * 2;
        index = index + 1;
        }

    printf("The filled array is: \n");
    printf("array[0] = %lf\n",arrayDoubles[0]);
    printf("array[1] = %lf\n",arrayDoubles[1]);
    printf("array[2] = %lf\n",arrayDoubles[2]);
    printf("array[3] = %lf\n",arrayDoubles[3]);
    printf("array[4] = %lf\n",arrayDoubles[4]);
            
    printf("Give me an out-of-bounds index: ");
    scanf("%lf",&arrayDoubles[5] );
    printf("Writing the value of 42 to index %lf (the program may fail)",arrayDoubles[5]);


    return 0;
    }
