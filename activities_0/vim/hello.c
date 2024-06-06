#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    int x;
    char s[512];
    printf("What is your name? ");
    fgets(s,sizeof(s),stdin);
    s[strlen(s) - 1] = '\0';
    printf("Hello %s!\n", s);
    printf("Give me a number! ");
    scanf(" %d",&x);
    printf("%d is my favorite number!!\n",x*x);
    return 0;
    }
