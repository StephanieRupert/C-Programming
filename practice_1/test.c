#include <stdio.h>

int z = 2031;

void
b(void)
    {
    int z = 100;
    }

void
a(void)
    {
    z = 12;
    }

int
main(int argc,char **argv)
    {
    a();
    b();
    printf("%d\n",z);
    return 0;
    }
    
