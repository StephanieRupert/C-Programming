//Project2
//Stephanie Rupert
//07/13/2015
//logic.c contains all of the logic functions for conversions

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io.h"


//Counts the number of times a digit is pressed
int
countContigious(char *command)
    {
    int i = 0,j = 1,count;
    
    while (i < strlen(command))
        {
        if (command[j] == command[0])
            {
            i++;
            j++;
            ++count;
            }
        
        else
            {
            i++;
            j++;
            }
        }

    return count;
    } 


//Handles the remaining string and passes it to convertPressesToLetter
char *
handleNextPresses(char *command)
    {
    int con = countContigious(command);
    
    if (command[con] == ' ' || command[con] == '1')
        return &command[con + 1];

    else
        return &command[con];
    }    


//Takes in a number and how many times it was pressed to return it's
//corresponding letter
char *
convertPressesToLetter(char *command)
    {
    int con = countContigious(command);
    char letter;

    if (command[0] == 0)
        letter = ' ';
    
    else if (command[0] == 2)
        {
        if (con == 1 || (con % 3) == 1)
            letter = 'a';
        else if (con == 2 || (con % 3) == 2)
            letter = 'b';
        else if (con == 3 || (con % 3) == 0)
            letter = 'c';
        }    

    else if (command[0] == 3)
        {
        if (con == 1 || (con % 3) == 1)
            letter = 'd';
        else if (con == 2 || (con % 3) == 2)
            letter = 'e';
        else if (con == 3 || (con % 3) == 0)
            letter = 'f';
        }    

    else if (command[0] == 4)
        {
        if (con == 1 || (con % 3) == 1)
            letter = 'g';
        else if (con == 2 || (con % 3) == 2)
            letter = 'h';
        else if (con == 3 || (con % 3) == 0)
            letter = 'i';
        } 
        
    else if (command[0] == 5)
        {
        if (con == 1 || (con % 3) == 1)
            letter = 'j';
        else if (con == 2 || (con % 3) == 2)
            letter = 'k';
        else if (con == 3 || (con % 3) == 0)
            letter = 'l';
        }    
    
    else if (command[0] == 6)
        {
        if (con == 1 || (con % 3) == 1)
            letter = 'm';
        else if (con == 2 || (con % 3) == 2)
            letter = 'n';
        else if (con == 3 || (con % 3) == 0)
            letter = 'o';
        }    
    
    else if (command[0] == 7)
        {
        if (con == 1 || (con % 4) == 1)
            letter = 'p';
        else if (con == 2 || (con % 4) == 2)
            letter = 'q';
        else if (con == 3 || (con % 4) == 3)
            letter = 'r';
        else if (con == 4 || (con % 4) == 0)
            letter = 's';
        }    
    
    else if (command[0] == 8)
        {
        if (con == 1 || (con % 3) == 1)
            letter = 't';
        else if (con == 2 || (con % 3) == 2)
            letter = 'u';
        else if (con == 3 || (con % 3) == 0)
            letter = 'v';
        }    
    
    else if (command[0] == 9)
        {
        if (con == 1 || (con % 4) == 1)
            letter = 'w';
        else if (con == 2 || (con % 4) == 2)
            letter = 'x';
        else if (con == 3 || (con % 4) == 3)
            letter = 'y';
        else if (con == 4 || (con % 4) == 0)
            letter = 'z';
        }    
    
    else
        printf("That's not a valid input");

    return 0;
    }


//Returns each converted digit to a letter
void 
convertDigits(char *command)
    {
    int i = 0;
    char *converted;
    char *a; 
    converted = malloc(sizeof(char *) * 500);

    while (command != '\0')
        {
        a = convertPressesToLetter(command);
        converted[i] = a; 
        ++i;
        handleNextPresses(command); 
        }
    
    }    
