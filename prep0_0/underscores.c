#include <stdio.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    char a[10] = "alabama";
    char *x = a;

    //Change the first letter in "alabama" so that there is a capital A
    a[0] = 'A';     //pointer notation: *(a+0)
    x[0] = 'A';     //pointer notation: *x)

    //Print the new string "Alabama"
    printf("%s\n",a);
    printf("%s\n",x); 

    //Print the first letter in the string "Alabama"
    printf("%c\n",a[0]);    //pointer notation *(a+3)
    printf("%c\n",x[0]);    //pointer notation: *(x+3)

    //Print the 'b' in "Alabama"
    printf("%c\n",a[3]);
    printf("%c\n",x[3]);

    //Print the trailing substring "bama" in "Alabama"
    printf("%s\n",a+3);     //Or &a[3]
    printf("%s\n",x+3);     //Or &x[3]

    return 0;
    }
