#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "ilist.h"


Node *
mapList(int (*f)(int),Node *items)
    {
    if (items == 0)
        return 0;
    else
        {
        int v = f(head(items));
        return join(v,mapList(f,tail(items)));
        }
    }

int
decrement(int x)
    {
    return x - 1;
    }

int
main(int argc,char **argv)
    {
    int numbers[] = {4,3,7,2,4,3,1};
    Node *a = arrayToList(numbers,sizeof(numbers) / sizeof(int));
    Node *b = mapList(decrement,a);
    displayList(b);

    return 0;
    }
