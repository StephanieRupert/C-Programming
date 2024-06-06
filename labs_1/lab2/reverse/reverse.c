#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


char *
reverseString(char *string)
    {
    char *reverse;
    reverse = malloc(sizeof(char *) * 5);

    strcpy (reverse,string);

    char temp = reverse[0];
    reverse[0] = reverse[4];
    reverse[4] = temp;

    char temp2 = reverse[1];
    reverse[1] = reverse[3];
    reverse[3] = temp2;

    reverse[5] = '\0';

    return reverse;
    }

int
main(int argc,char **argv)
    {
    char *string;
    string = malloc(sizeof(char *) * 5);
    printf("Enter a 5 character string: ");
    scanf("%s",string);
    
    printf("The original string was %s and the reverse is %s",string,reverseString(string));

    return 0;
    }
