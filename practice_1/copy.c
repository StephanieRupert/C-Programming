#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int
main(int argc,char **argv)
    {
    char s1[5] = "Roll";
    char *s;
    printf("%s and %zu\n",s1,strlen(s1));

    s = malloc(strlen(s1) + 1);

    strcpy(s,s1);
    printf("%s\n",s);
    return 0;
    }
