#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


char *s = "314159";

int
main(int argc,char **argv)
    {
    int i;
    i = 0;
    //int total = 0;

    /*while (i < strlen(s))
        {
        total = total * 10 + s[i] - '0';
        ++i;
        }
    
    printf("%d\n",total);*/

    while (i < strlen(s))             //comment out total
        {
        printf("%c",s[i]);
        //printf("%d\n",s[i]);
        printf("%d\n",s[i] - '0');
        ++i;
        }

    return 0;
    }
