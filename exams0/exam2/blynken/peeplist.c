/* peeplist - a module for manipulating linked-lists of people
 *    - written by John C. Lusth, 2014
 *
 *    - nodes have name and weight fields
 *    - join takes a name (char *) and weight (double) as its first arguments
 *    - headName returns a string
 *    - headWeight returns a double
 *    - tail works as expected
 *    - readPeeps reads in a list of people from a file
 *    - displayPeeps prints the names in a list of people
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"
#include "peeplist.h"

#define MAX_SIZE 1024

/* newNode
 *     - create a node that holds information about a person
 */

Node *
newNode(char *name,double weight,Node *next)
    {
    Node *n = malloc(sizeof(Node));
    if (n == 0)
        {
        fprintf(stderr,"newNode: out of memory!\n");
        exit(1);
        }
    n->name = name;
    n->weight = weight;
    n->next = next;
    return n;
    }

/* head
 *     - return the first value in the list
 */

char *
headName(Node *items)
    {
    return items->name;
    }

double
headWeight(Node *items)
    {
    return items->weight;
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
 *     - join a person to a list
 */

Node *
join(char *name,double weight,Node *rest)
    {
    return newNode(name,weight,rest);
    }

/*
 * readPeeps 
 *      - reads in a list of people into a list
 *      - the input should look like: (tom 32.1,mary 56,...)
 *            all on a single line
 */

Node *
readPeeps(FILE *fp)
    {
    Node *peeps;
    char *name;
    double weight;
    
    peeps = 0;
    name = readToken(fp);
    while (!feof(fp))
        {
        weight = readReal(fp);
        peeps = join(name,weight,peeps);
        name = readToken(fp);
        }

    return peeps;
    }

/*
 * displayPeeps 
 *      - displays the names in a list of people
 */

void
displayPeeps(Node *p)
    {
    Node *spot = p;
    while (spot != 0)
        {
        printf("%s",headName(spot));
        if (tail(spot) != 0) printf(" ");
        spot = tail(spot);
        }
    return;
    }
