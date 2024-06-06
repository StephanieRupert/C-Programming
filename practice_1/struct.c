#include <stdio.h>
#include <stdlib.h>

Point *createPoint(double x,double y)
    {
    Point *p = malloc(sizeof(Point));
    if (p != '/0')
        {
        setX(p,x);
        setY(p,y);
        }

    return p;
    }

Point *readPoint(FILE *fp)
    {
    double x,y;
    fscanf(fp," %lf %lf",&x,&y);
    return createPoint(x,y);
    }

void writePoint(Point *p,FILE *fp)
    {
    fprintf(fp,"%f %d",getX(p),getY(p));
    }

double getX(Point *p)
    {
    return p->x;
    }

double getY(Point *p)
    {
    return p->y;
    }

void setX(Point *p,double x)
    {
    p->x = x;
    }

void setY(Point *p,double y)
    {
    p->y = y;
    }

Point *add(Point *p1,Point *p2)
    {
    return createPoint(getX(p1)+getX(p2),getY(p1)+getY(p2));
    }

double distance(Point *p1,Point *p2)
    {
    double dx = getX(p1) - getX(p2);
    double dy = getY(p1) - getY(p2);
    return sqrt(dx*dx+dy*dy);
    }


int main(void)
    {
    double x,y;
    Point *p1;
    printf("Please enter a point: ");
    p1 = readPoint(stdin);
    printf("The point read in is: ");
    writePoint(p1,stdout);
    printf("\n");

    Point *p2 = createPoint(0.5,2.6);

    Point *p3 = add(p1,p2);
    


