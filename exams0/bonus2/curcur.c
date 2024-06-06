#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"

/*
 * readArray 
 *      - reads in a list of integers into an array
 *      - the input should look like: 1 2 3 4 5 ;
 *      - you must have a space before the semicolon!
 */

int *
readArray(int *finalSize)
    {
    int size = 10;
    int count,*a;
    char *token;

    a = malloc(sizeof(int) * size); //failure check omitted

    count = 0;
    token = readToken(stdin);
    while (strcmp(token,";") != 0) /* the read was good */
        {
        if (count == size)
            {
            size *= 2;
            a = realloc(a,sizeof(int) * size); //failure check omitted
            }
        a[count++] = atoi(token);
        token = readToken(stdin);
        }

    a = realloc(a,sizeof(int) * count); //failure check omitted
    *finalSize = count;
    return a;
    }

/*
 * displayArray 
 *      - displays an array like this: [1][2][3][4][5]
 */

void
displayArray(int *a,int s)
    {
    int i;
    for (i = 0; i < s; ++i)
        printf("[%d]",a[i]);
    }

int
rebase(int a,int b)
    {
    if (a == 0)
        return 0;
    else
        return 10 * rebase(a/b,b) + a%b;
    }

int
fmi(int *a,int s)
    {
    int size = 20;
    a = malloc(sizeof(int) * size); //failure check omitted
    
    if (s == 1)
        return 0;
    else if (a[s - 1] < a[fmi(a,s - 1)])
        return s - 1;
    else
        return fmi(a,s - 1);
    }

void
sort(int *a,int size)
    {
    if (size == 1)
        return 0;

    int i = fmi(a,size);
    int temp = a[i];
    a[i] = a[0];
    a[0] = temp;
    sort(a+1,size-1);
    }

int
main(int argc,char **argv)
    {
    int size,num,base;
    int *array = malloc(sizeof(int) * size);
    printf("number? ");
    scanf("%d",&num);
    printf("base? ");
    scanf("%d",&base);
    printf("%d base %d is %d base %d\n",num,base,fmi(array,base),rebase(num,base));
    printf("array? ");
    int *a = readArray(&size);
    printf("the array is ");
    displayArray(a,size);
    printf("\n");
    //sort the array here
    //print sorted array here
    return 0;
    }
