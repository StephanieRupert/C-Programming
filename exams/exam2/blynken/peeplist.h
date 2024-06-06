/* peepList header module
 *    peeplist header written by John C. Lusth, 2015
 */

/* each node holds information about a person */

typedef struct node
    {
    char *name;
    double weight;
    struct node *next;   
    } Node;

Node  *newNode(char *name,double weight,Node *next);
char  *headName(Node *items);
double headWeight(Node *items);
Node  *tail(Node *items);
Node  *join(char *name,double weight,Node *rest);
Node  *readPeeps(FILE *fp);
void   displayPeeps(Node *p);
