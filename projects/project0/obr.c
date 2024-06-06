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
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

// function prototypes

void getData(double *,double *,double *,int *,int *,int *);
void displayData(double,double,double,int,int,int);
double computeRating(double,double,double,int,int,int);

int
main(int argc, char **argv)
    {
    double three;
    double two;
    double free;
    int assists;
    int turnovers;
    int possessions;
    double rating;
    
    //get the statistics from the user
    //pass in addresses so getDat can set these variables
    getData(&three,&two,&free,&assists,&turnovers,&possessions);

    //compute the rating
    rating = computeRating(three,two,free,assists,turnovers,possessions);

    //display the statistics
    displayData(three,two,free,assists,turnovers,possessions);

    //display the results
    printf("\nFor these statistics, the player's offensive production rating is %f\n",rating);

    return 0;
    }

void
getData(double *three,double *two,double *free,int *assists,int *turnovers,int *possessions)
    {
    printf("Enter the three-point shooting percentage: ");
    scanf(" %lf",three);

    printf("Enter the two-point shooting percentage: ");
    scanf(" %lf",two);

    printf("Enter the free throw shooting percentage: ");
    scanf(" %lf",free);

    printf("Enter the number of assists: ");
    scanf(" %d",assists);

    printf("Enter the number of turnovers (allowed steals): ");
    scanf(" %d",turnovers);

    printf("Enter the number of team possessions: ");
    scanf(" %d",possessions);

    return;
    }

double
computeRating(double T,double G,double F,int A,int S,int P)
    {
    return ((3 * T) + (2 * G) + (F) + (A - (3 * S)) / (double) P) / (double) 7;
    }

void
displayData(double T,double G,double F,int A,int S,int P)
    {
    printf("\n");
    printf("three-point: %lf\n",T);
    printf("two-point: %lf\n",G);
    printf("free throw: %lf\n",F);
    printf("assists: %d\n",A);
    printf("turnovers: %d\n",S);
    printf("possessions: %d\n",P);
    return;
    }
