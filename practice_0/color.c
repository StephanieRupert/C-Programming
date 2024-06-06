//template for testing code
//download with: wget troll.cs.ua.edu/ACP-C/tester.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    //char test[12];
    char *test = malloc(sizeof(char)*20);
    printf("Enter a color: ");
    scanf("%s",test); //dangerous code
    printf("The length of the string is %d\n",(int) strlen(test));
    printf("The color is %s\n",test);
    if (strcmp(test,"aquamarine") == 0)
        printf("That's my favorite color!\n");
    return 0;
    }
