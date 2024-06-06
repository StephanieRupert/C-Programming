#include <stdio.h>


void taskA(int num);
void taskB(int num);
void taskC(int num);


int
main(int argc,char **argv)
    {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);

    taskA(num);
    taskB(num);
    taskC(num);

    return 0;
    }

void
taskA(int num)
    {
    int i,j;
    int rows = num;
    int cols = num - 1;
    for (i = 0; i < rows; ++i)
        {
        for (j = 0; j < cols; ++j)
            {
            printf("X");
            }
        printf("\n");
        }
    } 

void
taskB(int num)
    {
    int i,j;
    
    for (i = 0; i < num; ++i)
        {
        for (j = 0; j < num; ++j)
            {
            if (i % 2 == 0 && j % 2 == 1)
                printf("/");
            else if (i % 2 == 0)
                printf("\\");
            }
        printf("\n");
        }
    } 

void
taskC(int num)
    {
    int i,j;
    int rows = 2 * num - 1;
    int cols = 2 * num - 1;

    for (i = 0; i < rows; ++i)
        {
        for (j = 0; j < cols; ++j)
            {
            if (i % 2 == 0 && j % 2 == 1)
                printf("X");
            else if (i % 2 == 0)
                printf("X");
            }
        printf("\n");
        }
    } 
