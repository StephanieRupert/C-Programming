#include <stdio.h>


double cubeSurfaceArea(double length,double width,double height);

int
main(int argc,char **argv)
    {
    double h,w,l;

    printf("Computing the surface area of a rectangular prism.\n");
    printf("Enter the height of the prism: ");
    scanf("%lf",&h);
    
    printf("Enter the width of the prism: ");
    scanf("%lf",&w);

    printf("Enter the length of the prism: ");
    scanf("%lf",&l);

    double area = cubeSurfaceArea(l,w,h);
    printf("The area is %.2lf\n",area);

    return 0;
    }

double
cubeSurfaceArea(double length,double width,double height)
    {
    
    return 2 * ((width * length) + (height * length) + (height * width));
    }
