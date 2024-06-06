#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    int x = 0;
    int y;
    int z;
    int w;

    ++x;
    x++;
    
    y = ++x;                     //evaluated before everything else in statement
    z = x++;                     //evaluated after everything else in statement

    w = ++x + x++;
    
    printf("x is %d\n",x);
    printf("y is %d\n",y);
    printf("z is %d\n",z);
    printf("w is %d\n",w);              //undefined warning

    return 0;
    }
