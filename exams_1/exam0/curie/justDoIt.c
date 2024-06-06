#include <stdio.h>
#include <string.h>


int
main(int argc,char **argv)
    {
    int a[5] = { 15, 25, 35, 45, 55 };
    int b[5] = { 10, 20, 30, 40, 50 };
    int *c = b;
    char s[14] = "roll tide";
    char *t = "computer science";

    
    //Using the array a variable ----------------
   
    //Task 1
    printf("%d\n",a[3]);
    
    //Task 2
    printf("%d\n",a[0] + a[4]);
    
    //Task 3
    int temp = a[1];
    a[1] = a[2];
    a[2] = temp;

    //Task 4
    printf("%d %d\n",a[1],a[2]);

    
    //Using the pointer c variable ----------------

    //Task 1
    printf("%d\n",*(c + 2));

    //Task 2
    printf("%d\n",*(c + 1) + *(c + 4));

    //Task 3
    *(c + 0) = *(c + 1);
    *(c + 3) = *(c + 1);
    printf("%d %d\n",*(c + 0),*(c + 3));
    
    
    //Using the array s variable ----------------
    
    //Task 1
    printf("%s\n",s);

    //Task 2
    printf("%c\n",s[1]);

    //Task 3
    s[0] = 'R';
    s[5] = 'T';

    //Task 4
    printf("%s\n",s);

    //Task 5
    s[9] = '!';

    //Task 6
    s[10] = '\0';

    //Task 7
    printf("%s\n",s);

    //Using the pointer t variable ----------------
     
    //Task 1
    printf("%s\n",t);

    //Task 2
    printf("%c\n",t[0]);

    //Task 3
    printf("%zu\n",strlen(t));


    return 0;
    }
