#include <stdio.h>
#include <string.h>
#include "scanner.h"
#include "slist.h"


int
main(int argc,char **argv)
    {
    printf("Enter a list of tokens: ");
    Node *list = readList();

    printf("The list: \n");
    
    int count = 0;    
    printf("There are %d more string(s) with the same length as the first string.",count);
    
    return 0;
    }
