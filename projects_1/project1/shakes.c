//Project 1
//Stephanie Rupert 07/04/15
//Program that was supposed to search text file for specified tokens
//and return how many times the token appears

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "scanner.h"


//Counts tokens in file to allocate the array
int
countTokens(char *fileName)
    {
    char *token;
    int count;

    FILE *fp = fopen("shakespeare.txt","r");
    if (fp == 0)
        {
        fprintf(stderr,"File %s could not be opened for reading\n","shakespeare.txt");
        exit(1);
        }
    
    count = 0;
    token = readToken(fp);
    while (token != 0)
        {
        //printf("%s\n",token);
        free(token);
        token = readToken(fp);
        ++count;
        }
    
    fclose(fp);
    
    return count;
    }

//Fills array with tokens from file
void
fillTokens(char *fileName,char **tokens)
    {
    FILE *fp = fopen("shakespeare.txt","r");
    int i = 0;

    while (!feof(fp))
        {
        tokens[i] = readToken(fp);
        ++i;
        }
    
    fclose(fp);
    }

//Removes punctuation
/*void
clean(char *tokens)
    {
    int i;
    int j = 0;
    
    for (i = 0; i < strlen(tokens); ++i)
        {
        if (isalpha(tokens[i]))
            {
            tokens[j++] = tokens[i];
            }
        }
    
    tokens[j] = '\0';
    }*/

//Changes uppercase letters to lowercase
/*char
lower(char *ch)
    {
    int i;
    
    for (i = 0; i < strlen(ch); ++i)
        {
        if (ch <= 'Z')
            return ch + 'a' - 'A';
        else
            return ch;
        }    
    return 0;
    }*/    
