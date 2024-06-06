#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "ilist.h"


int
findMinIndex(Node *items)
    {
    int count = 0;
    int index = 0;
    Node *spot = items;
    int mini = head(spot);
    
    while (spot != 0)
        {
        if (head(spot) < mini)
            {
            mini = head(spot);
            index = count;
            }
        ++count;
        spot = tail(spot);
        }
    
    return index;
    }


void
displayListAt(Node *items,int index)
    {
    int i;
    Node *spot = items;
    for (i = 0; i < index; ++i)
        spot = tail(spot);
    printf("%d\n",head(spot)); 
    }


int 
main(int argc,char **argv)
    {
    Node *n;

    n = join(5,0);
    n = join(4,n);
    n = join(2,n);
    n = join(9,n);
    n = join(8,n);

    displayList(n);
    printf("\n");
    int index = findMinIndex(n);
    printf("Index of min is %d\n",index);
    printf("The min value is ");

    return 0;
    }
