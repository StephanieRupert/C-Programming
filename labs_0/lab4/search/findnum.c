#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"

int 
main(int argc,char **argv)
    {
    FILE *fp = fopen("data.in","r");
    int count = 0;
    int input;
    int filevalue = readInt(fp);
    int position = 0;
    int firsttime = -1;

    printf("What number are you looking for? ");
    input = readInt(stdin);

    while (!feof(fp))
        {
        if (input == filevalue)
            {
            if (firsttime == -1)
                firsttime = position;
        ++count;
        }

    filevalue = readInt(fp);
    ++position;
    }
    
    if (firsttime == -1)
        printf("The number %d does not appear in the file.",input);
    else
        {
        printf("The number %d appeared first at position %d in the file.\n",
        input,firsttime);
        printf("The number also appears %d time(s).\n",count);
        }
    
    fclose(fp);

    return 0;
    }
