#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"

int
main(int argc,char **argv)
    {
    int num;
    char *myString = malloc(sizeof(char *) * 256);

    printf("How many strings? ");
    scanf("%d",&num);
    
    int count = 1;
    int i = 0;
    
    /*printf("String? ");
    myString = readString(stdin);
    while (count < num)
        {
        printf("String? ");
        int a,b;
        a = atoi(myString);
        b = atoi(myString + 1);
        if (a < b) 
            ++i;
        myString = readString(stdin);
        ++count;
        }
   
    printf("There are %d strings that differ from the first string",i);*/
    
    printf("String? ");
    myString = readString(stdin);
    while (count < num)
        {
        printf("String? ");
        if (myString[i] < myString[i + 1])
            ++i;
        myString = readString(stdin);
        ++count;
        }
   
    printf("There are %d strings that differ from the first string",i-1);
    
    return 0;
    }
