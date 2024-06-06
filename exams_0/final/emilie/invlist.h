/* ilist - a module for manipulating linked-lists of integers
 *    - written by John C. Lusth, 2014
 *
 */

typedef struct node {
    char *part;
    int count;
    double value;
    struct node *next;
    } Node;

/* Node prototypes */

Node *newNode(char *part,int count,double value,Node *next);
Node *newEmptyNode(void);

/* List prototypes */

Node  *newEmptyList(void);
char  *headPart(Node *items);
int    headCount(Node *items);
double headValue(Node *items);
Node  *tail(Node *items);
Node  *join(char *p,int c,double v,Node *rest);
Node  *readList(FILE *fp);
void   displayList(Node *items); //to be written
void   freeList(Node *items);
