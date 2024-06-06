#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
main(int argc,char **argv)
    {
    int size,i;
    double big,small;
    double *a = (double *)malloc(size * sizeof(double)); 

    printf("How many real numbers? ");
    scanf("%d",&size);
    printf("Enter %d elements in to the array: ",size);
    for (i = 0; i < size; ++i)
        scanf("%lf",&a[i]);

    big = a[0];
    for (i = 1; i < size; ++i)
        {
        if (big < a[i])
            big = a[i];
        }

    small = a[0];
    for (i = 1; i < size; ++i)
        {
        if (small > a[i])
            small = a[i];
        }

    printf("The largest number: %.1f\n",big);
    printf("The smallest number: %.1f\n",small);
    return 0;
    }
