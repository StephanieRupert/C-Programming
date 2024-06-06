#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"


int main(int argc,char **argv)
    {
    char *token;
    char *quote;
    int x;

    printf("Give me a Boolean: ");
    token = readToken(stdin);
    
    printf("Give me a string: ");
    quote = readString(stdin);

    printf("Give me an integer: ");
    scanf("%d",&x);

    if ((strcmp(token,"True") == 0 ))
        {
        printf("%s\n",quote);
        printf("\"%s\"\n",quote);
        }

    else
        printf("%d\n",x * 2);

    return 0;
    }
