#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int
roomSize(int height,int width,int depth)
    {
    int size;
    
    size = height * width * depth;
    
    return size;
    }

int
main(int argc,char **argv)
    {
    int x,y,z;
    
    double size,final,cost;

    printf("Enter the dimensions of the room (length, width, height): ");
    scanf("%d %d %d",&x,&y,&z);
    
    size = roomSize(x,y,z);

    final = (size * 12) / 0.5; 

    printf("It would take %lf sugar cubes to fill the room\n",final);

    cost = (final / 1000) * 2.49;

    printf("The price to fill the room with sugar cubes is %lf dollars",cost);
    
    return 0;
    }
