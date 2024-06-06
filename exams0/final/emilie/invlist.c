/* invlist - a module for manipulating linked-lists of inventory items
 *    - written by John C. Lusth, 2015
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"
#include "invlist.h"

/********************* node functions ******************************/

/* newNode
 *     - create a node that holds an inventory item
 */

Node *
newNode(char *part,int count,double value,Node *next)
    {
    Node *n = newEmptyNode();
    n->part = part;
    n->count = count;
    n->value = value;
    n->next = next;
    return n;
    }

Node *
newEmptyNode(void)
    {
    Node *n = malloc(sizeof(Node));
    if (n == 0)
        {
        fprintf(stderr,"newEmptyNode: out of memory!\n");
        exit(1);
        }
    n->part = 0;                        //set to the null pointer
    n->count = 0;                       //set to zero
    n->value = 0;                       //set to zero
    n->next = 0;                        //set to the null pointer
    return n;
    }

/********************* list functions ******************************/

/* newEmptyList
 *    - uses the null pointer to signify an empty list
 */

Node *
newEmptyList(void)
    {
    return 0;
    }

/* head functions
 *     - return the components of the first inventory item
 */

char *
headPart(Node *items)
    {
    return items->part;
    }

int
headCount(Node *items)
    {
    return items->count;
    }

double
headValue(Node *items)
    {
    return items->value;
    }

/* tail
 *    - return the list minus the first node 
 */

Node *
tail(Node *items)
    {
    return items->next;
    }

/* join
 *     - join an inventory item to a list
 */

Node *
join(char *p,int c,double v,Node *rest)
    {
    return newNode(p,c,v,rest);
    }

/*
 * readList 
 *      - reads in a list of inventory items from a file
 */

Node *
readList(FILE *fp)
    {
    char *p;
    int c;
    double v;
    Node *items = 0;

    /* read the first part of the inventory item */
    p = readToken(fp);
    while (!feof(fp))
        {
        /* read the remaining parts */
        c = readInt(fp);
        v = readReal(fp);
        items = join(p,c,v,items);
        /* read the first part of the next inventory item */
        p = readToken(fp);
        }
    return items;
    }

/*
 * displayList
 *    - displays a list containing inventory items
 *
 */

void
displayList(Node *items)
    {
    while (items != 0)
        {
        printf("%lf",headValue(items));
        items = tail(items);
        }
    return;
    }

/* freeList
 *
 */

void
freeList(Node *items)
    {
    while (items != 0)
        {
        Node *spot = items;
        items = tail(items);
        free(spot->part);
        free(spot);
        }
    }
