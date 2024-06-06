//Project 1
//Stephanie Rupert 07/04/15
//Program that was supposed to search text file for specified tokens
//and return how many times the token appears

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"
#include "shakes.h"


int
main(int argc,char **argv)
    {
    int count;
    char **tokens;

    count = countTokens("shakespeare.txt");
    printf("There are %d tokens\n",count);

    tokens = malloc(sizeof(char *) * count);
    if (tokens == 0)
        {
        fprintf(stderr,"Memory allocation failed\n");
        exit(1);
        }

    fillTokens("shakespeare.txt",tokens);
    
    /*int i; 
    for (i = 0; i < count; ++i)
        {
        printf("%s\n",tokens[i]);
        }*/
   
    /*clean(tokens);

    for (i = 0; i < count; ++i)
        {
        printf("%s\n",tokens[i]);
        }*/
    
    /*char *token = strdup("Fall,!!");
    printf("The token was %s\n",token);
    clean(token);
    lower(token);
    printf("The clean token is %s\n",token);
    */
    return 0;
    }
