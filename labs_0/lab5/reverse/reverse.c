#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "slist.h"
#include "scanner.h"


Node *
reverse()
    {
    FILE *fp = fopen("words.in","r");
    char *a;
    Node *words;

    words = 0;

    a = readToken(fp);

    while (!feof(fp))
        {
        words = join(a,words);
        a = readToken(fp);
        }

    fclose(fp);

    return words;
    }

void
printList(Node *items)
    {
    FILE *fp = fopen("words.out","w");

    while (items != 0)
        {
        fprintf(fp,"{%s}",head(items));
        items = tail(items);
        }

    fclose(fp);
    }

int
main(void)
    {
    Node *items;

    items = reverse("words");

    displayList(items);

    printList(items);

    return 0;
    }
