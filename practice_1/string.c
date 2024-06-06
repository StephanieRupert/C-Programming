#include <stdio.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    char s1[8] = "Crimson";
    char s2[8] = "Alabama";
    char s3[9] = "CSisFun!";

    int len = strlen(s1);
    printf("The length is %d\n",len);
    
    printf("Three strings using array names: %s %s %s\n",s1,s2,s3);
    
    char *a = s1;
    char *b = s2;
    char *c = s3;
   
    printf("The strings using pointers: %s %s %s\n",a,b,c);

    printf("The first and last characters of s2 using subscripts: %c %c\n",s2[0],s2[6]);

    printf("The first and last characters of s2 using pointers: %c %c\n",*(b + 0),*(b + 6));

    printf("Print the character at location of x (we'll use 5) of s2 using pointers: %c\n", *(b + 5));
    
    printf("Repeat printing a specific character using pointers: %c\n",*(c + 4)); 

    
    /*
    char s[] = "hello";
    char *t  = "hello";

    //Is this a legal modification?
    printf("Changing the first character of s[0],");
    fflush(stdout);
    s[0] = 'H';
    //Is this a legal modification?
    printf("Changing the first character of t[0],");
    fflush(stdout);
    t[0] = 'b';

    //No, bus error.
    */

    s1[7] = '+';
    printf("String 1: %s\n",s1);
    
    return 0;
    }
