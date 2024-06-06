#include <stdio.h>
#include <string.h>

int
main(int argc, char **argv)
    {
    char z[] = "Crimson";
    char *p = z;
    printf("%s\n", z[0]);       //Supposed to print entire string; only first char
    printf("%s\n", p);          //Supposed to print entire string; correct 
    z[0] = 'c';                 //Change the 'C' to 'c'; correct
    //&p = 'c';                 //Change the 'C' to 'c'; incorrect, *p is correct
    printf("%s\n", z[1]);       //Print all but the first char; print first only
    printf("%s\n", (p+1));      //Print all but the first char; correct

    printf("%c\n", z[strlen(z)-1]); //Print the last char; correct
    printf("%c\n", p+strlen(z)-1);  //Print the last char; incorrect, *(p+...)
    scanf("%c", z[0]);              //Read in a new char at start of array; &z[0] 
    scanf("%c", p);                 //Read in a new char at start of array; correct or for the second, you could use p+1 
    return 0;
    }

