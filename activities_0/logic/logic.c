#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    double s;
    int p, n, e, o;
    char *cl, *cs;

    s = 0.01;
    printf("Is %f small? %d\n",s,isSmall(s));
    s = 0.0000001;
    printf("Is %f small? %d\n",s,isSmall(s));

    p = -1;
    printf("Is %d positive? %d\n",p,isPositive(p));
    p = 1;
    printf("Is %d positive? %d\n",p,isPositive(p));
    
    n = 1;
    printf("Is %d negative? %d\n",n,isNegative(n));
    n = -1;
    printf("Is %d negative? %d\n",n,isNegative(n));
    
    e = 2;
    printf("Is %d even? %d\n",e,isEven(e));
    e = 1; 
    printf("Is %d even? %d\n",e,isEven(e));
    
    o = 1;
    printf("Is %d odd? %d\n",o,isOdd(o));
    o = 2;
    printf("Is %d odd? %d\n",o,isOdd(o));
    
    *cl = "Greaterthantwentycharacters";
    printf("Is %s long? %d\n",*cl,isLong(*cl));
    *cl = "Lessthan";
    printf("Is %s long? %d\n",*cl,isLong(*cl));
    
    *cs = "Cat"; 
    printf("Is %s short? %d\n",*cs,isShort(*cs));
    *cs = "Notshort";
    printf("Is %s short? %d\n",*cs,isShort(*cs));
    
    return 0;
    }

int
isSmall(double s)
    {
    return s < 0.000001;
    }

int
isPositive(int p)
    {
    return p > 0;
    }

int
isNegative(int n)
    {
    return n < 0;
    }

int
isEven(int e)
    {
    if (e/2 == 0) 
        {
        return 1;
        }
    else
        {
        return 0;
        }
    }   

int
isOdd(int o)
    {
    if (o/2 == 1)
        {
        return 1;
        }
    else
        {
        return 0;
        }
     }   

char
isLong(char *cl)
    {
    if (sizeof *cl > 20)
        {
        return 1;
        }
    else
        {
        return 0;
        }
     }   

char
isShort(char *cs)
    {
    if (sizeof *cs < 5)
        {
        return 1;
        }
    else
        {
        return 0;
        }
    }    
