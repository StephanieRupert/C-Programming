#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"


char *
isContraction(FILE *fp)
    {
    char *s = readString(fp);
    int i = 0;
    
    if (s[i - 1] == '\'')
        return 0;
    else if (s[i - 2] == '\'')
        return s;
    else
        return s;
    
    } 

char *
readingStrings(FILE *fp)
    {
    char *s = readString(fp);
    int items = 0;

    while (!feof(fp))
        {
        ++items;
        s = readString(fp);
        }
    
    return s;
    }

int
main(int argc,char **argv)
    {
    FILE *fp = fopen(argv[1],"r");
    readingStrings(fp);
    printf("Contractions found: %s\n",isContraction(fp));

    return 0;
    }
