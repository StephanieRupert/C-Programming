#include <stdio.h>
#include <string.h>

void tweak(char *,int,int);

int
main(int argc,char **argv)
    {
    char s[8] = "CS 102";
    int x = 1, y = 5;
    printf("%s and %d and %d\n",s,x,y);
    tweak(s,x,y);
    printf("%s and %d and %d\n",s,x,y);
    return 0;
    }

void
tweak(char *s,int a,int b)
    {
    int x = strlen(s);
    printf("\t%s and %c and %c\n",s,s[0],*(s+x-1));
    printf("\t%c and %c\n",s[a],*(s+b));
    s[a] = 'S';
    *(s+b) = '0';
    printf("\t%c and %c\n",s[a],*(s+b));
    return;
    }
