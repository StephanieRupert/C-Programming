#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    char s[512];
    char t[512];

    printf("Please enter a C string with fewer than 512 characters: ");
    scanf("%s",s); //dangerous code
    printf("The string is %s\n",s);
    printf("It has %d letters\n",(int) strlen(s));
    
    printf("Please enter another: ");
    scanf("%s",t); //dangerous code
    printf("The string is %s\n",t);
    printf("It has %d letters\n",(int) strlen(t));
    
    printf("Comparing the strings yields %d\n",strcmp(s,t));
    printf("Comparing the first letter yields %d\n",strcmp(s+1,t+1) < 0);
    printf("Comparing the last letters yields %d\n",strcmp(s-1,t-1) < 0);
    return 0;
    }
