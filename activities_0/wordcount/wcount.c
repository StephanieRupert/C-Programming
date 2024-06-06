#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"

 
int
main(int argc,char **argv)
    {
    int count = 0;
    FILE *fp;
    char *token;
    char *filename = argv[1];

    fp = fopen(filename,"r");

    token = readToken(fp);
    
    while (!feof(fp))
        {
        ++count;
        free(token);
        token = readToken(fp);
        }
    printf("There are %d words in the file\n",count);

    return 0;
    }

