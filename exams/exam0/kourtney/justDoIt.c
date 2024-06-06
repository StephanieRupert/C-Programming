#include <stdio.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    int x[5] = { 50, 40, 30, 20, 10 };
    int y[5] = { 55, 45, 35, 25, 15 };
    int *z = y;
    char a[15] = "crimson tide";
    char *b = "computer science";

    printf("**** array names ***************************\n");

    printf("%d ",x[1]);
    printf("%d ",x[0] + x[4]);

    int temp = x[1];
    x[1] = x[2];
    x[2] = temp;

    printf("%d %d\n",x[1],x[2]);

    printf("**** pointer variables *********************\n");

    printf("%d ",z[2]);
    printf("%d ",z[1] + z[3]);

    int temp2 = z[1];
    z[0] = temp2;
    z[3] = temp2;

    printf("%d %d\n",z[0],z[3]);
    
    printf("**** static array strings ******************\n");
   
    printf("%s ",a);
    printf("%c ",a[1]);
    
    a[0] = 'C';
    a[8] = 'T';

    printf("%s ",a);

    a[12] = '!';
    a[13] = '\0';

    printf("%s\n",a);

    printf("**** pointers to literal strings ***********\n");

    printf("%s ",b);
    printf("%c ",b[0]);
    printf("%d ",(int) strlen(b));
    
    return 0;
    }
