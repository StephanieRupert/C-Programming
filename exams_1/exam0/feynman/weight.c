#include <stdio.h>

int
main(int argc,char **argv)
    {
    int attendance,percent,weight,tons;

    printf("Enter attendance: ");
    scanf("%d",&attendance);

    printf("Percent male is: ");
    scanf("%d",&percent);

    printf("There were %d people in attendance, with %d percent of them male.\n",attendance,percent);

    double convert = percent/100.0;         //Conversion from percent to double
   
    int maleCount = (double) attendance * convert;
    int femaleCount = attendance - maleCount;

    printf("There were %d males and %d females\n",maleCount,femaleCount);

    int maleWeight = maleCount * 191;
    int femaleWeight = femaleCount * 164;

    weight = maleWeight + femaleWeight;
    tons = weight / 2000;

    printf("A good estimate for the total weight of all people in attendance is %d pounds which is roughly %d tons.\n",weight,tons);

    return 0;
    }
