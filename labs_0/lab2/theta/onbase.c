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
    Modified by Stephanie Rupert to accept inputs from a file and write outputs to a file */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

// function prototypes

void getData(int *,int *,int *,int *,int *);
void displayData(int,int,int,int,int);
double computeRating(int,int,int,int,int);

int
main(int argc, char **argv)
    {
    FILE *fp = fopen("data.out","a");
    if (fp == 0)
        {
        fprintf(stderr,"file data could not be opened for writing\n");
        exit(1);
        }

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
    fprintf(fp,"\nFor these statistics, the on-base percentage is %f\n",rating);

    fclose(fp);
    return 0;
    }

void
getData(int *hits,int *walks,int *hbp,int *atBats,int *flies)
    {
    FILE *fp = fopen("data.in","r");
    if (fp == 0)
        {
        fprintf(stderr,"file data could not be opened for reading\n");
        exit(1);
        }
    
    fscanf(fp," %d",hits);  //atts is a pointer already

    fscanf(fp," %d",walks);

    fscanf(fp," %d",hbp);

    fscanf(fp," %d",atBats);

    fscanf(fp," %d",flies);

    fclose(fp);
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
    FILE *fp = fopen("data.out","a");
    if (fp == 0)
        {
        fprintf(stderr,"file data could not be opened for writing\n");
        exit(1);
        }

    fprintf(fp,"\n");
    fprintf(fp,"hits: %d\n",h);
    fprintf(fp,"base on balls: %d\n",bb);
    fprintf(fp,"hit by pitch: %d\n",hbp);
    fprintf(fp,"at bats: %d\n",ab);
    fprintf(fp,"sacrifice flies: %d\n",sf);
    
    fclose(fp);
    return;
    }
