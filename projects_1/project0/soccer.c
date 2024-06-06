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
 * Modified by Stephanie Rupert for Project0 from baseball to soccer ratings
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// function prototypes
// had to add one more parameter to each function definition

void getData(int *,int *,int *,int *,int *,int *);
void displayData(int,int,int,int,int,int);
double computeRating(int,int,int,int,int,int);


// modified from baseball to soccer relevent variable names

int
main(int argc, char **argv)
    {
    int goals;
    int shots;
    int corners;
    int assists;
    int passes;
    int touches;
    double rating;
    
    //get the statistics from the user
    //pass in addresses so getData can set these variables
    getData(&goals,&shots,&corners,&assists,&passes,&touches);

    //compute the rating
    rating = computeRating(goals,shots,corners,assists,passes,touches);

    //display the statistics
    displayData(goals,shots,corners,assists,passes,touches);
   
    //display the results
    printf("\nFor these statistics, the offensive production rating is %f\n",rating);

    return 0;
    }

void
getData(int *goals,int *shots,int *corners,int *assists,int *passes,int *touches)
    {
    printf("Number of goals? ");
    scanf(" %d",goals);  //goals is a pointer already

    printf("Shots on goal? ");
    scanf(" %d",shots);

    printf("Effective corner kicks? ");
    scanf(" %d",corners);

    printf("Assists? ");
    scanf(" %d",assists);

    printf("Effective passes? ");
    scanf(" %d",passes);

    printf("Touches? ");
    scanf(" %d",touches);
    
    return;
    }

double
computeRating(int g,int s,int c,int a,int p,int t)
    {
    return ((5 * g) + (4 * s) + (3 * c) + (2 * a) + p) / (double) t; 
    }

void
displayData(int g,int s,int c,int a,int p,int t)
    {
    printf("\n");
    printf("Goals: %d\n",g);
    printf("Shots on goal: %d\n",s);
    printf("Effective corners: %d\n",c);
    printf("Assists: %d\n",a);
    printf("Effective passes: %d\n",p);
    printf("Touches: %d\n",t);
    return;
    }
