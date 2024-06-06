#include <stdio.h>
#include <stdlib.h>


typedef struct node
    {
    int data;
    struct node *next;
    } Node;

Node *
createNode(int val)
    {
    Node *ptr = malloc(sizeof(Node));
    ptr->data = val;
    ptr->next = NULL;
    
    return ptr;
    }

int
getData(Node *n)
    {
    return n->data;
    }

Node *
getNext(Node *n)
    {
    return n->next;
    }

void
setData(Node *n,int val)
    {
    n->data = val;
    return;
    }

void
setNext(Node *n,Node *val)
    {
    n->next = val;
    return;
    }

Node *
createList(void)
    {
    return NULL;
    }

void
printList(Node *head)
    {
    Node *temp = head;
    
    while (temp != NULL)
        {
        printf("%d ",getData(temp));
        temp = getNext(temp);
        }
    
    printf("\n");
    }

Node *
addHead(Node *head,int val)
    {
    Node *newOne = createNode(val);
    setNext(newOne,head);
    
    return newOne;
    }

Node *
addRear(Node *head,int val)
    {
    Node *newOne = createNode(val);
    
    if (head == NULL)   //If the list is empty...
        return newOne;
    
    Node *p = head;
    Node *b = head;
    
    while (p != NULL)
        {
        b = p;
        p = getNext(p);
        }
    
    setNext(b,newOne);
    
    return head;
    }

Node *
addOrder(Node *head,int val)
    {
    Node *newOne = createNode(val);
    
    if (head == NULL)   //If the list is empty...
        return newOne;
    
    //Case 2 - insert at the first
    
    if (getData(newOne) < getData(head))
        {
        setNext(newOne,head);
        return newOne;
        }

    //Case 3 - insert after the first
    Node *p = head;
    Node *b = head;
    
    while (p != NULL && getData(p) < val)
        {
        b = p;
        p = getNext(p);
        }
    
    setNext(newOne,p);
    setNext(b,newOne);
    
    return head;
    }

int
main(int argc,char **argv)
    {
    Node *head = createList();
    head = addHead(head,10);
    head = addHead(head,20);
    head = addHead(head,30);
    
    printList(head);
    
    head = addRear(head,15);
    head = addRear(head,25);
    head = addRear(head,35);
    
    printList(head);
    
    head = NULL;

    head = addOrder(head,5);
    head = addOrder(head,1);
    head = addOrder(head,10);
    head = addOrder(head,-7);
    head = addOrder(head,12);
    head = addOrder(head,50);
    head = addOrder(head,15);
    head = addOrder(head,-9);
    head = addOrder(head,20);
    
    printList(head);

    return 0;
    }
