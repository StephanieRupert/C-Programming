#include <stdio.h>


int
main(int argc,char **argv)
    {
    int y = 2;
    int x = 3;
    int z = 0;
    int a = !(z != 0 && y > x / z);

    return a;
    }
