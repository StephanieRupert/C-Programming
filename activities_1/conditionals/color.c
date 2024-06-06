#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "scanner.h"

int
main(int argc,char **argv)
    {
    char *color = malloc(sizeof(char)*30);
    printf("What is your favorite color? ");
    color = readToken(stdin);       //stdin means read from keyboard
    if (strcmp(color,"green") == 0 || strcmp(color,"Green") == 0)
        {   //if true block
        printf("That is my favorite color too!");
        }

    else
        {   //if false block
        printf("%s is a nice color, but my favorite is green.\n",color);
        }

    free(color); //readToken mallocs, so free when done    

    return 0;
    }
