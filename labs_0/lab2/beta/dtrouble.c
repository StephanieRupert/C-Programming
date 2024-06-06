/* Program for testing use of a bad index in an array */
/* Written by John C. Lusth, 2015 */
/* Modified by Stephanie Rupert to accept command-ling arguments */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    int index;
    double *array = malloc(sizeof(double) * 5);

    /* get the first value of the array */
    array[0] = atof(argv[1]);
    printf("You supplied the value %f\n",array[0]);

    /* fill the rest of the array */
    array[1] = 2 * array[0];
    array[2] = 2 * array[1];
    array[3] = 2 * array[2];
    array[4] = 2 * array[3];

    /* display the array */
    printf("The filled array is:\n");
    printf("    array[0] = %f\n",array[0]);
    printf("    array[1] = %f\n",array[1]);
    printf("    array[2] = %f\n",array[2]);
    printf("    array[3] = %f\n",array[3]);
    printf("    array[4] = %f\n",array[4]);

    /* get a bad index */
    index = atoi(argv[2]);

    /* use the bad index */
    printf("Writing the value 42 to index %d (the program may fail).\n",index);
    array[index] = 42;

    /* these prints will not happen if the program fails on the previous line */
    printf("The value at array[%d] is %f.\n",index,array[index]);
    printf("It didn't fail (but it could have).\n");

    return 0;
    }
