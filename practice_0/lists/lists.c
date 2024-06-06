#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//without using ilist headers

typedef struct node
    {
    int value;
    struct node *next;
    } Node;


Node *
newNode(int v, Node *n)
    {
    Node *p = malloc(sizeof(Node)); //failure test?
    p->value = v;
    p->next = n;
    return p;
    }

int
head(Node *n)
    {
    return n->value;
    }


Node *
tail(Node *n)
    {
    return n->next;
    }


void
display(Node *items)
    {
    Node *spot;
    spot = items;
    while (spot != 0)
        {
        printf("%d ",spot->value);
        //printf("%d",(*items).value);        same thing, -> is a shortcut
        spot = spot->next;                  //increment
        }
    printf("\n");
    }



int main(int argc,char **argv)
    {
    Node *n;
    
    n = newNode(5,0);   //0 is a null pointer, not garbage, just points
                        // to nothing
    n = newNode(4,n);
    n = newNode(2,n);
    n = newNode(9,n);
    n = newNode(8,n);
    
    display(n);
    
    return 0;
    }
