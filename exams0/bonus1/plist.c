/* plist - a module for manipulating linked-lists of polynomial terms
 *    - written by John C. Lusth, 2014
 *
 *    - nodes have coefficients and exponents hard-wired as integers
 *    - join takes a coefficient and an exponent as its first arguments
 *    - headCoeff returns the coefficient of the first node
 *    - headExp returns an the exponent of the first node
 *    - setHeadCoeff modifies the coefficient of the first node
 *    - setHeadExp modifies an the exponent of the first node
 *    - tail works as expected
 *    - readPoly reads in coefficient/exponent pairs into a linked list
 *    - displayPoly displays a polynomial
 *    - evalPoly evaluates a polynomial at a given x value
 *    - derivPoly modifies a polynomial to be its derivative
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "plist.h"

#define MAX_SIZE 1024

/* newNode
 *     - create a node that holds a coefficient and an exponent
 */

Node *
newNode(int c,int e,Node *next)
    {
    Node *n = malloc(sizeof(Node));
    if (n == 0)
        {
        fprintf(stderr,"newNode: out of memory!\n");
        exit(1);
        }
    n->coeff = c;
    n->exp = e;
    n->next = next;
    return n;
    }

/* headCoeff
 *     - return the first coefficient in the list
 *
 * !!!!! This needs to be written
 * !!!!! note: head from ilist returns items->value, so do something similar
 */

int
headCoeff(Node *items)
    {
    return items->coeff; 
    }

/* headExp
 *     - return the first exponent in the list
 *
 * !!!!! This needs to be written
 * !!!!! note: head from ilist returns items->value, so do something similar
 */

int
headExp(Node *items)
    {
    return items->exp;
    }

/* setHeadCoeff
 *     - set the first coefficient in the list
 */

void
setHeadCoeff(Node *items,int c)
    {
    items->coeff = c;
    return;
    }

/* setHeadExp
 *     - set the first exponent in the list
 */

void
setHeadExp(Node *items,int e)
    {
    items->exp = e;
    return;
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
 *     - join a coefficient and an exponent to a list
 *
 * !!!!! This needs to be written
 * !!!!! Note: join from ilist returns newNode(i,rest), so do something similar
 */

Node *
join(int c,int p,Node *rest)
    {
    return newNode(c,p,rest); 
    }

/* readPoly
 *     - read a set of terms from a file into a linked list
 *
 * !!!!! This needs to be written, use the read pattern
 * !!!!! Note: read the first coefficient in the file. If you did not
 * !!!!! hit end-of-file, read the exponent and use join to update the list.
 * !!!!! Then read the next coefficient and repeat. See the readList function
 * !!!!! in the textbook (Lists chapter)
 */

/*Node *readPoly(FILE *fp)
    {
    int x;
    int y;
    Node *items;

    items = 0;
    fscanf(fp,"%d",&x);
    while (!feof(fp))
        {
        items = join(x,y,items);
        fscanf(fp,"%d",&x);
        }
    
    return items;    
    }*/

Node *readPoly(FILE *fp)
    {
    Node *p = 0;
    int c,e;

    fscanf(fp,"%d",&c);
    while (!feof(fp))
        {
        fscanf(fp,"%d",&e);
        p = join(c,e,p);
        fscanf(fp,"%d",&c);
        }
    return p;
    }

/* displayPoly
 *     - display a polynomial
 *
 * !!!!! This needs to be written, use the walk pattern
 * !!!!! See the displayList function in the text (Lists chapter). Inside the
 * !!!!! loop, if the tail is not null, print a plus.
 */

/*void displayPoly(Node *poly)
    {
    while (poly != 0)
        {
        printf("{%d}",headCoeff(poly));
        poly = tail(poly);
        printf("{%d}",headExp(poly));
        poly = tail(poly);
        }
    }*/

void displayPoly(Node *poly)
    {
    Node *spot;
    spot = poly;
    printf("[ ");
    while (spot != 0)
        {
        printf("%dx^%d ",headCoeff(spot),headExp(spot));
        if (tail(spot) != 0) printf("+ ");
        spot = tail(spot);
        }
    printf("] ");
    return;
    }

/* evalPoly 
 *     - evaluate a polynomial at a given point
 *
 * !!!!! IF YOU DO ALTERNATIVE A:
 * !!!!! This needs to be written, use the accumulation pattern
 */

/*int evalPoly(Node *poly,int x)
    {
    int total = 0;
    while (poly != 0)
        {
        x = headCoeff(poly);
        poly = tail(poly);
        }
    return total; 
    }*/

int evalPoly(Node *poly)
    {
    Node *spot;
    spot = poly;
    int total = 0;
    while (spot != 0)
        {
        total += headCoeff(spot) * pow(x,headExp(spot));
        spot = tail(spot);
        }
    return total;
    }

/* derivPoly 
 *     - create a polynomial that is the derivative of the given polynomial
 *
 * !!!!! IF YOU DO ALTERNATIVE B:
 * !!!!! This needs to be written, use the destructive map pattern
 * !!!!! Note: you do not need to pass in a mapping function, just
 * !!!!! update the coefficient and the exponent of the current term
 * !!!!! (using setHeadCoeff and setHeadExp) as you walk the list.
 */

/*void derivPoly(Node *poly)
    {
    Node *spot;
    spot = poly;
    while (
    }*/


