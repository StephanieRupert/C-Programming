#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "scanner.h"

int
avg()
    {
    int x,y,z;
    double result;

    printf("Give me an integer: ");
    scanf("%d",&x);
    printf("Give me another integer: ");
    scanf("%d",&y);
    printf("Give me another integer: ");
    scanf("%d",&z);
    
    result = ((x + y + z) / 3);
    
    printf("The average is %lf\n",result);
    
    return 0;
    }

int
getChar()
    {
    char a[512];
    int b;

    printf("Give me a string of characters fewer than 512 characters: ");
    scanf("%s",a); //dangerous code
    
    printf("Give me the position of the array of characters you want to display: ");
    scanf("%d",&b);

    printf("The character at position %d for string %s is %s\n",b,a,a+b);
    
    return 0;
    }

int
findMax()
    {
    double w,x,y,z;
    
    printf("Give me a double: ");
    scanf("%lf",&w);
    printf("Give me another double: ");
    scanf("%lf",&x);
    printf("Give me another double: ");
    scanf("%lf",&y);
    printf("Give me another double: ");
    scanf("%lf",&z);

    if (w > x && w > y && w > z)
        printf("The largest value is %lf\n",w);
    if (x > w && x > y && x > z)
        printf("The largest value is %lf\n",x);
    if (y > w && y > x && y > z)    
        printf("The largest value is %lf\n",y);
    if (z > w && z > x && z > y)
        printf("The largest value is %lf\n",z);
    
    return 0;
    }

int
dumpVars()
    {
    int a,b,c,d;
    double e,f;
    char *g;

    printf("Give me an integer: ");
    scanf("%d",&a);
    printf("Give me an integer: ");
    scanf("%d",&b);
    printf("Give me an integer: ");
    scanf("%d",&c);
    printf("Give me an integer: ");
    scanf("%d",&d);
    
    printf("Give me a double: ");
    scanf("%lf",&e);
    printf("Give me a double: ");
    scanf("%lf",&f);

    printf("Give me a string of characters: ");
    g = readToken(stdin);

    printf("The integers are %d, %d, %d, and %d\n",a,b,c,d);
    printf("The doubles are %lf and %lf\n",e,f);
    printf("The string is %s\n",g);
    
    free(g);
    return 0;
    }
    
int
maxMin()
    {
    int i,min,max,a[10];
    
    printf("Enter ten integers pressing the space key after each ");
    
    for (i=0;i<10;i++)
        {
    
        scanf("%d",&a[i]);
        }
    
    min = a[0];
    max = a[0];
    
    for (i=1;i<10;i++)
        {
        
        if(a[i]<min)
            min = a[i];
        if(a[i]>max)
            max = a[i];
        }
    
    printf("%d is the max value and %d is the min value\n",max,min);

    return 0;
    }

int
swap()
    {
    char *a,*b;

    printf("Give me a character: ");
    a = readToken(stdin);
    printf("Give me another character: ");
    b = readToken(stdin);

    printf("The first character is %s\n",a);
    printf("The second character is %s\n",b);

    printf("After swapping...\n");

    char temp = *a;
    *a = *b;
    *b = temp;

    printf("The first character is %s\n",a);
    printf("The second character is %s\n",b);

    free(a);
    free(b);
    return 0;
    }

int
main(int argc,char **argv)
    {
    avg();
    getChar();
    findMax();
    dumpVars();
    maxMin();
    swap();

    return 0;
    }
