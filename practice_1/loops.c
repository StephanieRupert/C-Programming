#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int
main(int argc,char **argv)
    {
    //Print all the numbers from zero to 10 - both ways
    //Use a while statement

    int i = 0;
    while (i <= 10)
        {
        printf("%d\n",i);
        i = i + 1;
        }
    
    printf("\n");

    //Use a for statment
    
    for (i = 0; i <= 10; i++)
        printf("%d\n",i);

    printf("\n");

    //Print all the characters in a string
    
    char str[] = "Crimson Tide";

    int a = 0;
    while (a < strlen(str))
        {
        printf("%c\n",str[a]);
        a = a + 1;
        }

    printf("\n");

    for (a = 0; a < strlen(str); a++)
        printf("%c\n",str[a]);

    //Print all the command-line arguments

    int x = 0;
    while(x < argc)
        {
        printf("%s\n",argv[x]);
        x = x + 1;
        }
   
    printf("\n");

    for (x = 0; x < argc; x++)
        printf("%s\n",argv[x]);
    
    return 0;
    }
