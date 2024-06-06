//Author: Stephanie Rupert
//Date: 02/27/2015
//CS 100
//io.c contains all print statements

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "scanner.h"
#include "io.h"


//Called anytime there is a yes or no response
int
yesNo(char *question)
    {
    printf("%s",question);
    char *input;
    input = readToken(stdin);

    if (strcmp(input,"yes") == 0)
        return 1;
    else
        return 0;
    
    free(input);
    }

//Print statements for the functions in logic.c
char *
threePrint(void)
    {
    char *input;
    printf("How many seconds was it on the floor? ");
    input = readToken(stdin);
    
    return input;
    free(input);
    }

char *
blowPrint(void)
    {
    char *input;
    printf("What does it look like after blowing on it or brushing it off? ");
    input = readToken(stdin);
    
    return input;
    free(input);
    }

char *
cleanPrint(void)
    {
    char *input;
    printf("When was the floor last cleaned? ");
    input = readToken(stdin);
    
    return input;
    free(input);
    }

char *
cannedPrint(void)
    {
    char *input;
    printf("Canned or fresh? ");
    input = readToken(stdin);
    
    return input;
    free(input);
    }

char *
meatPrint(void)
    {
    char *input;
    printf("What kind of meat? ");
    input = readToken(stdin);
    
    return input;
    free(input);
    }

char *
junkPrint(void)
    {
    char *input;
    printf("What kind of junk-food? ");
    input = readToken(stdin);
    
    return input;
    free(input);
    }

char *
whatPrint(void)
    {
    char *input;
    printf("What fell on the floor? ");
    input = readToken(stdin);

    return input;
    free(input);
    }

char
canEat(void)
    {
    printf("You can eat it");
    
    return 0;
    }

char
dontEat(void)
    {
    printf("Don't eat it");
    
    return 0;
    }
