#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    int radius;
    double area;
    double circumference;
    double ratio;

    printf("Circle radus? ");
    scanf("%d",&radius);
    printf("The radius is %d\n",radius);
    circumference = 2 * (acos(-1)) * radius;
    area = (acos(-1)) * radius * radius;
    printf("The area is %lf\n",area);
    printf("The circumference is %lf\n",circumference);
    ratio = circumference / area;
    printf("The ratio of the circumference to the area is %lf\n",ratio);
    return 0;
    }
