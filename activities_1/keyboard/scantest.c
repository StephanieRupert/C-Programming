#include <stdio.h>
#include "scanner.h"

int
main(int argc,char **argv)
    {
    int x;
    double y;
    char a,b;
    char *c = 0;
    char *d = 0;

    printf("Enter an integer: ");
    x = readInt(stdin);
    printf("The next highest number is %d\n",x + 1);
    
    printf("Enter a real number: ");
    y = readReal(stdin);
    printf("The next highest number is %lf\n",y + 1);
    
    printf("Enter a character: ");
    a = readChar(stdin);
    printf("You entered %c\n",a);

    printf("Enter a whitespace character: ");
    b = readRawChar(stdin);
    printf("You entered %c\n",b);

    printf("Enter a token: ");
    *c = readToken(stdin);
    printf("You entered %s\n",c);

    printf("Enter a string: ");
    *d = readToken(stdin);
    printf("You entered %s\n",d);

    return 0;
    }
