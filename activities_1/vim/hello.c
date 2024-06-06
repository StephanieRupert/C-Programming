#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    int x;
    char name[512];

    printf("What is your name? ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name) - 1] = '\0';
    printf("hello %s\n",name);
    printf("give me a number! ");
    scanf(" %d",&x);
    printf("%d is my favorite number!!\n",x * x);

    return 0;
    }
