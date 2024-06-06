#include <stdio.h>
#include <string.h>


int
grew(char **argv)
    {
    int i = 1;
    for (i = 0; i < strlen(argv[i]); ++i)
        {
        if ((strlen(argv[i])) > (strlen(argv[i + 1])))
            return 1;
        else
            return 0;
        }    
    
    return 0;
    }

int
main(int argc,char **argv)
    {
    int i;
    int result;

    result = grew(argv);

    for (i = 1; i < argc; ++i)
        {
        if (result == 1)
            { 
            printf("Found: %s",argv[i]);
            printf("\n");
            }
        }

    return 0;
    }
