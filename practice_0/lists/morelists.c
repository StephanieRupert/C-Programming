#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "ilist.h"


Node *
myReadList(char *filename)
    {
    FILE *fp = fopen("numbers.txt","r"); //check omitted
    int x;
    Node *numbers;

    numbers = 0;                         //numbers is an "empty" list
    fscanf(fp,"%d",&x);

    while (!feof(fp))
        {
        numbers = join(x,numbers);
        fscanf(fp,"%d",&x);
        }
    fclose(fp);

    return numbers;
    }

int
length(Node *items)
    {
    if (items == 0)
        return 0;
    else
        return 1 + length(tail(items));
    } 

int
sum(Node *items)
    {
    if (items == 0)
        return 0;
    else
        return head(items) + sum(tail(items));
    } 
int
product(Node *items)
    {
    if (items == 0)
        return 1;
    else
        return head(items) * product(tail(items));
    } 

int
evenCount(Node *items)
    {
    if (items == 0)
        return 0;
    else if (head(items) % 2 == 0)
        return 1 + evenCount(tail(items));
    else
        return 0 + evenCount(tail(items));
    }    

int
max(Node *items)
    {
    if (tail(items) == 0)
        return head(items);
    else
        {
        int mt = max(tail(items));
        return mt > head(items) ? mt : head(items);     //(true) ? : (otherwise)
        }
    }

int
mhelp(int max,Node *items)
    {
    if (items == 0)
        return max;
    else if (max > head(items))
        return mhelp(max,tail(items));
    else
        return mhelp(head(items),tail(items));
    }    

int
max2(Node *items)
    {
    return mhelp(head(items),tail(items));
    }

/*
    m(items) is mh(head(items),tail(items))
    mh(x,iems) is x if items is empty
    mh(x,items) is mh(x,tail(items)) if x > head(items)
    mh(x,items) is mh(head(items),tail(items)) otherwise
*/

/*  
    a(i) is b(0,0,head(i),tail(i))
    b(w,x,y,z) is x if z is empty
    b(w,x,y,z) is b(w+1,x,y,tail(z)) if y > head(z)
    b(w,x,y,z) is b(w+1,w,head(z),tail(z)) otherwise
*/    

int
main(int argc,char **argv)
    {
    Node *items;

    items = myReadList("nums");

    displayList(items);
    printf("\n");
    printf("The length of the items is %d\n",length(items));
    printf("The sum of the items is %d\n",sum(items));
    printf("The product of the items is %d\n",product(items));
    printf("The average of the items is %lf\n",sum(items) / (double) length(items));
    printf("The number of evens in items is %d\n",evenCount(items));
    printf("The max of the items is %d\n",max(items));    
    printf("The max2 of the items is %d\n",max2(items));    

    return 0;
    }
