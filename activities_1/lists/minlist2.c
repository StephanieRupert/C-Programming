#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "ilist.h"


int
findMin(Node *items)
    {
    Node *spot = items;
    int smallest = head(items);
    
    while (items != 0)
        {
        int v = head(spot);
        
        if (v < smallest)
            smallest = v;
        
        items = tail(items);
        }
    
    return smallest;
    }

int
main(int argc,char **argv)
    {
    char **strings = argv + 1;
    int count = argc - 1;
    int *numbers = malloc(sizeof(int) * count);
    int i;

    for (i = 0; i < count; ++i)
        numbers[i] = atoi(strings[i]);

    Node *items = 0;
    for (i = 0; i < count; ++i)
        items = join(numbers[i],items);
    
    items = findMin("min");

    displayList(items);

    return 0;
    }

