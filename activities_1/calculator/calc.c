#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
main(int argc,char **argv)
    {
    int x,y,result;

    x = atoi(argv[1]);
    y = atoi(argv[3]);

    if (strcmp(argv[2],"+") == 0)
        result = x + y;

    if (strcmp(argv[2],"-") == 0)
        result = x - y;
        
    if (strcmp(argv[2],"/") == 0)
        result = x / y;

    if (strcmp(argv[2],"*") == 0)
        result = x * y;

    printf("%d",result);

    return 0;
    }
