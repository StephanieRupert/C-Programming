#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int 
main(int argc,char **argv)
    {
    int i,itemCount;
    char *first = argv[1];
    char *last = argv[1];

    for (i = 1; i < itemCount; ++i)
        {
        if (argv[i] > first)
            {
            first = argv[i];
            }

        }    

    printf("In a dictionary:\n");
    printf("The word that would appear earliest is ""%s"" ",first);
    printf("the word that would appear last is ""%s"" ",last);
    
    return 0;
    }
