#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
main(int argc,char **argv)
    {
    int maleMass = 82;
    int femaleMass = 70;
    int attendence,femaleCount,maleCount,femaleMassTotal,maleMassTotal;
    int femalePercent,malePercent;

    printf("Enter attendence: ");
    scanf("%d",&attendence);

    printf("Enter female count: ");
    scanf("%d",&femaleCount);

    printf("There were %d attendees, %d female\n",attendence,femaleCount);

    femalePercent = 100.0 * (femaleCount / (double) attendence); 
    malePercent = 100.5 * ((attendence - femaleCount)) / (double) attendence; //Added .5 so that the percentages would total to 100
    
    printf("Percent female was: %d\n",femalePercent);
    printf("Percent male was: %d\n",malePercent);

    maleCount = attendence - femaleCount;

    femaleMassTotal = femaleCount * femaleMass;
    maleMassTotal = maleCount * maleMass;
    
    printf("The total mass of attendees was %d kilograms\n",femaleMassTotal + maleMassTotal);
    printf("The average mass of an attendee was %d kilograms\n",(femaleMassTotal + maleMassTotal) / attendence);

    
    return 0;
    }
