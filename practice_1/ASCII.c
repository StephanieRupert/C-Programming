#include <stdio.h>
#include <string.h>

int
main(int argc,char **argv)
    {
    char s1[4] = "IBM";
    char *s2;
    s2= s1;

    printf("%c (%d) and %c (%d) and %c (%d) is %s\n"
        s1[0], s1[0], s1[1], s1[1], s1[2], s1[2], s1);
    printf("%c (%d) and %c (%d) and %c (%d) is %s\n"
        *s2, *s2, *(s2+1), *(s2+1), *(s2+2), *(s2+2), s2);

    s1[0] = s1[0] + 32;
    s1[1] = s1[1] + 32;
    s1[2] = s1[2] + 32;

    printf("%c (%d) and %c (%d) and %c (%d) is %s\n"
        s1[0], s1[0], s1[1], s1[1], s1[2], s1[2], s1);
    printf("%c (%d) and %c (%d) and %c (%d) is %s\n"
        *s2, *s2, *(s2+1), *(s2+1), *(s2+2), *(s2+2), s2);

    s1[0] = s1[0] - 1;
    s1[1] = s1[1] - 1;
    s1[2] = s1[2] - 1;

    printf("%c (%d) and %c (%d) and %c (%d) is %s\n"
        s1[0], s1[0], s1[1], s1[1], s1[2], s1[2], s1);
    printf("%c (%d) and %c (%d) and %c (%d) is %s\n"
        *s2, *s2, *(s2+1), *(s2+1), *(s2+2), *(s2+2), s2);

    return 0;
    }
