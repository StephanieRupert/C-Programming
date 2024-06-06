//STUDENT: The strings I entered are reallyreallyreallylongword and evenlongerreallyreallyreallylongword
//STUDENT: The output of the strings are reallyreallylongword and evenlongerreallyreallyreallylongword

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
main(int argc,char **argv)
    {
    char a[16] = {};
    char b[16] = {};

    printf("first string? ");
    scanf("%s",a);
    printf("second string? ");
    scanf("%s",b);

    printf("the value of the first string is %s\n",a);
    printf("the value of the second string is %s\n",b);

    return 0;
    }
