#include <stdio.h>


int
main(int argc,char **argv)
    {
    float a,b,c;
    
    printf("first float: ");
    scanf("%f",&a);
    
    printf("second float: ");
    scanf("%f",&b);
    
    printf("third float: ");
    scanf("%f",&c);
    
    printf("The floats, from largest to smallest, are: \n");

    if (a > b && a > c)
        {
        printf("   %.1f\n",a);
        if (b > c)
            printf("   %.1f\n   %.1f",b,c);
        else
            printf("   %.1f\n   %.1f",c,b);
        } 
    
    else if (b > a && b > c)
        {
        printf("   %.1f\n",b);
        if (a > c)
            printf("   %.1f\n   %.1f",a,c);
        else
            printf("   %.1f\n   %.1f",c,a);
        } 
    
    else //(c > a && c > b)
        {
        printf("   %.1f\n",c);
        if (a > b)
            printf("   %.1f\n   %.1f",a,b);
        else
            printf("   %.1f\n   %.1f",b,a);
        } 
    
    return 0;
    }
