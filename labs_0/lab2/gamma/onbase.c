/*
 * program for baseball or softball on-base percentage, by John C. Lusth, 2015
 * 
 * this program may be freely distributed and modified, as long as:
 * 
 * a) the authorship of any modifications is added
 *
 * b) the reason for modification is added
 *
 * c) the comments are updated to reflect modifications
 *
 * d) the original authorship and that of any previous modifiers is preserved.
 *
    Modified by Stephanie Rupert to replace scanf functions with scanner */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#include "scanner.h"

// function prototypes

void getData(int *,int *,int *,int *,int *);
void displayData(int,int,int,int,int);
double computeRating(int,int,int,int,int);

int
main(int argc, char **argv)
    {
    int atBats;
    int hits;
    int walks;
    int hbp;
    int flies;
    double rating;
    
    //get the statistics from the user
    //pass in addresses so getDat can set these variables
    getData(&hits,&walks,&hbp,&atBats,&flies);

    //compute the rating
    rating = computeRating(hits,walks,hbp,atBats,flies);

    //display the statistics
    displayData(hits,walks,hbp,atBats,flies);

    //display the results
    printf("\nFor these statistics, the on-base percentage is %f\n",rating);

    return 0;
    }

void
getData(int *hits,int *walks,int *hbp,int *atBats,int *flies)
    {
    printf("Enter number of hits: ");
    *hits = readInt(stdin); // modified scanf to scanner functions

    printf("Enter number of walks: ");
    *walks = readInt(stdin);

    printf("Enter times hit by a pitch: ");
    *hbp = readInt(stdin);

    printf("Enter number of at bats: ");
    *atBats = readInt(stdin);

    printf("Enter number of sacrifice flies: ");
    *flies = readInt(stdin);

    return;
    }

double
computeRating(int h,int bb,int hbp,int ab,int sf)
    {
    return (h + bb + hbp) / (double) (ab + bb + hbp + sf); 
    }

void
displayData(int h,int bb,int hbp,int ab,int sf)
    {
    printf("\n");
    printf("hits: %d\n",h);
    printf("base on balls: %d\n",bb);
    printf("hit by pitch: %d\n",hbp);
    printf("at bats: %d\n",ab);
    printf("sacrifice flies: %d\n",sf);
    return;
    }
