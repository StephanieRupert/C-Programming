#include <stdio.h>
#include <ctype.h>

//#define toupper(ch) ((ch) - 32)


int
main(int argc,char **argv)
    {
    char n;
    char str[] = "crimson tide";
    printf("n? ");
    scanf("%c",&n);
    printf("Result is %d\n",n); //returns the ASCII value of input
    
    printf("str is %s\n",str);
    str[0] = toupper(str[0]);
    str[8] = toupper(str[8]);
    //str[0] = str[0] - 32; use this if you didn't include toupper above or ctype.h
    printf("str is now %s\n",str); //changes first letter from lowercase to uppercase
    return 0;
    }
