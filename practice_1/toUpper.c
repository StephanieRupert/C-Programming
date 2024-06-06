#include <stdio.h>
#include <string.h>


void toUpper(char *str,int a)
    {
    if (str[a] >= 97 && str[a] <= 122)
        str[a] = str[a] - 32;
    return;
    }

void toLower(char *st,int b)
    {
    if (st[b] >= 65 && st[b] <= 90)
        st[b] = st[b] + 32;
    return;    
    }

int
main(int argc,char **argv)
    {
    char s[] = "AbCd";
    int x = 0;
    printf("%s and %d\n",s,x);
    toUpper(s,x); x++;
    toUpper(s,x); x++;
    toLower(s,x); x++;
    toLower(s,x); x++;
    printf("%s and %d\n",s,x);

    return 0;
    }
