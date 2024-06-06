/* plist header module (was ilist header)
 *    ilist header written by John C. Lusth, 2015
 *    modified by John C. Lusth for polynomials
 */

/* each node holds a term of the polynomial */

typedef struct node
    {
    int coeff;              //was 'int value' only in ilist.h
    int exp;
    struct node *next;   
    } Node;

Node *newNode(int coeff,int exp,Node *next); //was newNode(int value,Node *next)
int  headCoeff(Node *items);                 //was head(Node *items)
int  headExp(Node *items);                   //was head(Node *items)
void setHeadCoeff(Node *items,int c);        //no modification needed
void setHeadExp(Node *items,int e);          //no modification needed
Node *tail(Node *items);                     //no modification needed
Node *join(int coeff,int exp,Node *rest);    //was join(int value,Node *rest)
Node *readPoly(FILE *fp);                    //added
void displayPoly(Node *items);               //added
int evalPoly(Node *items,int x);             //added
void derivPoly(Node *items);                 //added
