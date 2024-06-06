#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"


int
main(int argc,char **argv)
    {
    int x,y,result;
    char *operator;
    
    FILE *fp = fopen("simple-sum","r");
    if (fp == 0)
        {
        fprintf(stderr,"file data could not be opened for reading\n");
        exit(1);
        }

    x = readInt(fp);
    operator = readToken(fp);
    y = readInt(fp);

    if (strcmp(operator,"+") == 0)
        result = x + y;

    if (strcmp(operator,"-") == 0)
        result = x - y;

    if (strcmp(operator,"/") == 0)
        result = x/y;

    if (strcmp(operator,"*") == 0)
        result = x * y;

    printf("%d",result);

    fclose(fp);
    
    return 0;
    }
