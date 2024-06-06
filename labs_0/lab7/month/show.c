
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Month {
    int weeks;
    int **days;
} Month;


/* Functions located at the bottom which you have to implement */
int daysInMonth(int);
Month *createMonth(int,int);
void displayMonth(Month *);
int dayOfWeekToInt(char*);

// Frees all data allocated
void freeMonth( Month *m) {
    int week;
    for( week = 0 ; week < m->weeks ; ++week ) {
        free(m->days[week]);
    }
    free(m->days);
    free(m);
}

int monthToInt( char *mon ) {
    if(strcmp(mon , "January") == 0)    return 0;
    if(strcmp(mon , "February") == 0)   return 1;
    if(strcmp(mon , "March") == 0)      return 2;
    if(strcmp(mon , "April") == 0)      return 3;
    if(strcmp(mon , "May") == 0)        return 4;
    if(strcmp(mon , "June") == 0)       return 5;
    if(strcmp(mon , "July") == 0)       return 6;
    if(strcmp(mon , "August") == 0)     return 7;
    if(strcmp(mon , "September") == 0)  return 8;
    if(strcmp(mon , "October") == 0)    return 9;
    if(strcmp(mon , "November") == 0)   return 10;
    if(strcmp(mon , "December") == 0)   return 11;
    return -1;
}

int main(void) {
    // variables
    int month,dayOfWeek;
    char monthString[16];
    char dayOfWeekString[16];
    Month *m;

    // Read in the data
    printf( "What is the month? " );
    scanf( " %s" , monthString );
    printf( "When is the first day of the week? " );
    scanf( " %s" , dayOfWeekString );

    month = monthToInt( monthString );
    dayOfWeek = dayOfWeekToInt(dayOfWeekString);

    // Do the work
    m = createMonth(month, dayOfWeek);
    displayMonth(m);
    freeMonth(m);

    return 0;

}


/*               IMPLEMENT EVERYTHING BELOW               */

// Return the number of days given a month
int daysInMonth(int month)
    {
    if (month == 0)
        return 31;
    if (month == 1)
        return 28;
    if (month == 2)
        return 31;
    if (month == 3)
        return 30;
    if (month == 4)
        return 31;
    if (month == 5)
        return 30;
    if (month == 6)
        return 31;
    if (month == 7)
        return 31;
    if (month == 8)
        return 30;
    if (month == 9)
        return 31;
    if (month == 10)
        return 30;
    if (month == 11)
        return 31;
    
    return 0;
    }

// Given a month and they day of the week the first
// day falls on return a Month object
Month *createMonth(int month,int dayOfTheWeek) 
    {
    Month *result = malloc(sizeof(Month));
    result->weeks = month;
    result->days = dayOfTheWeek; 
    
    return result;
    }

void displayMonth(Month *month) 
    {
    printf("%s\n",month);
    printf("%3d",month);
    }

int dayOfWeekToInt(char* dow)
    {
    int result = -1;

    if (strcmp(dow,"Sunday") == 0)
        result = 0;
    if (strcmp(dow,"Monday") == 0)   
        result = 1;
    if (strcmp(dow,"Tuesday") == 0)      
        result = 2;
    if (strcmp(dow,"Wednesday") == 0)      
        result = 3;
    if (strcmp(dow,"Thursday") == 0)        
        result = 4;
    if (strcmp(dow,"Friday") == 0)       
        result = 5;
    if (strcmp(dow,"Saturday") == 0)       
        result = 6;

    return result;
    }
