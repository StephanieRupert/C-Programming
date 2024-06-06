#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    double a[] = { 0, 0, 0};
    
    printf("array[0] is %lf\n",a[0]);
    printf("array[1] is %lf\n",a[1]);
    printf("array[2] is %lf\n",a[2]);
    
    printf("Enter the first real number: ");
    scanf("%lf",&a[0]);
    printf("Enter the second real number: ");
    scanf("%lf",&a[1]);
    printf("Enter the third real number: ");
    scanf("%lf",&a[2]);
    
    printf("array[0] is %lf\n",a[0]);
    printf("array[1] is %lf\n",a[1]);
    printf("array[2] is %lf\n",a[2]);
    
    printf("After swapping...\n");
    
    double temp = a[0];
    a[0] = a[2];
    a[2] = a[3];
    a[3] = temp;

    printf("array[0] is %lf\n",a[0]);
    printf("array[1] is %lf\n",a[1]);
    printf("array[2] is %lf\n",a[2]);
    return 0;
    }
