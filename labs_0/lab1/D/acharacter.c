#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int
main(int argc,char **argv)
    {
    char *state = "Alabama";
    char *s = malloc(8);

    strncpy(s,state,8);

    printf("There are %zu characters, not counting the null character\n",strlen(state) );
    printf("%c %c %c %c %c %c %c",s[0],s[1],s[2],s[3],s[4],s[5],s[6]);
    return 0;
    }
