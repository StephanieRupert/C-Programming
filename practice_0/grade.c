#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isPassing(double s)
    {
    return s >= 60;
    }    

char computeGrade(double s)
    {
    char result;
    if (s >= 90)
        result = 'A';
    else if (s >= 80)
        result = 'B';
    else if (s >= 70)
        result = 'C';
    else if (s >= 60)
        result = 'D';
    else
        result = 'F';
    return result;          //If only one can be true, use a chain
                            //If more than one can be true, use independent if else statements
    }

int main(int argc,char **argv)
    {
    char grade;
    int passing;
    double score;
    printf("Give me your percentage: ");
    scanf("%lf",&score);
    
    passing = isPassing(score);
    if (passing)
        printf("Congratulations, you passed!\n");
    else
        printf("Try again, I know you'll do better!\n");
    
    grade = computeGrade(score);
    printf("Your grade is %c\n",grade);
    if (grade == 'D')
    printf("Unfortunately, you will need to retake the class to move on\n");
    return 0;
    }
