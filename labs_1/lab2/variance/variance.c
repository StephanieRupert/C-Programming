#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


double
calculateVariance(double *a)
    {
    double mean,var;
    
    mean = (a[0] + a[1] + a[2]) / 3;

    var = (((a[0] - mean) * (a[0] - mean)) + ((a[1] - mean) * (a[1] - mean)) + ((a[2] - mean) * (a[2] - mean))) / 3;

    return var;
    }

int
main(int argc,char **argv)
    {
    double a[3];
    
    printf("Please enter a value: ");
    scanf("%lf",&a[0]);

    printf("Please enter a value: ");
    scanf("%lf",&a[1]);

    printf("Please enter a value: ");
    scanf("%lf",&a[2]);
   
    printf("The variance of %.3f, %.3f, and %.3f is %.3lf",a[0],a[1],a[2],calculateVariance(a));

    return 0;
    }
