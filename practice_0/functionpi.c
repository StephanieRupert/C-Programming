#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double pi(void); //or pi();

int main(int argc,char **argv)
    {
    printf("pi is %.40f!\n",pi());

    return 0;
    }

double pi(void) //double pi();
    {
    return acos(-1);
    }
