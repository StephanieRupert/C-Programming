//Project 2
//Stephanie Rupert
//07/13/2015
//io.c contains print statements

#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"
#include "logic.h"


char *command;


//Fills array with user's input
char *
fill(char *command)
    {
    command = malloc(sizeof(char *) * 100);
    
    if (command == 0)
        {
        fprintf(stderr,"Memory allocation failed\n");
        exit(1);
        }
    
    printf("Presses: ");
    command = readLine(stdin);
    
    return command;
    }

void
print()
    {
    char *letters = convertDigits(command);
    printf("Letters: %s",letters);
    }

