//Project 2
//Stephanie Rupert
//07/13/2015
//phone.c includes main

#include <stdio.h>
#include <string.h>
#include "io.h"
#include "logic.h"

char *command;

int
main(int argc,char **argv)
    {
    char to;
    //char from;
    char *input = argv[1];

    if (strcmp(input,"to") == 0)
        {
        scanf("%s",&to);            //dangerous code
        convertDigits(command);
        }

    /*else if (strcmp(command,"from") == 0)
        {
        scanf("%s",&from);
        convertLetters(command);
        }
    */
    else
        printf("That input is not valid");

    return 0;
    }
