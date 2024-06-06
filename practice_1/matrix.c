//Passing matrices as parameters

#include <stdio.h>
#include <stdlib.h>


void
foo(int *a,int b)
    {
    int i;
    for (i = 0; i < b; i++)
        printf("%d ",a[i]);
    printf("\n");
    }

void
bar(int (*a)[2],int r,int c)
    {
    int i,j;

    for (i = 0; i < r; i++)
        {
        for (j = 0; j < c; j++)
            printf("%d ",a[i][j]);
        printf("\n");
        }
    }     

void
ugh(int **a,int b)
    {
    int x,y;
    for (x = 0; x < b; x++)
        {
        for (y = 0; y < b; y++)
            {
            a[x][y] = x + y;
            printf("%d ",a[x][y]);
            }
        printf("\n");    
        }
    } 

int
main(int argc,char **argv)
    {
    int x[5] = {1,2,3,4,5};
    int y[2][2] = {{11,12},{21,22}};

    foo(x,5);
    //foo(y);

    int(*z)[2] = y;
    bar(z,2,2); 
    int **w;
    int a;
    w = malloc(sizeof(int *) * 3);
    
    for (a = 0; a < 3; a++)
        w[a] = malloc(sizeof(int) * 3);
    
    ugh(w,3);
    
    return 0;
    }
