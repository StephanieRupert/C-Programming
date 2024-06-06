#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"


int
findMax(int,int,int,int);

int
main(int argc,char **argv)
    {
    int w,x,y,z;
    printf("Enter two numbers: ");
   
    FILE *fp = fopen("data","r");

    w = atoi(argv[1]);
    x = readInt(stdin);
    y = readInt(stdin);
    z = readInt(fp);

    /*x = readInt(stdin);
    y = readInt(stdin);
    z = readInt(stdin);*/

    /*x = atoi(argv[1]);
    y = atoi(argv[2]);
    z = atoi(argv[3]);*/

    printf("Biggest number is %d\n",findMax(w,x,y,z));
    return 0;
    }

int
findMax(int a,int b,int c,int d)
    {
    if (a > b && a > c && a > d)
        return a;
    
    else if (b > a && b > c && b > d) 
        return b;
    
    else if (c > a && c > b && c > d)
        return c;
    
    else
        return d;
    }       

    
