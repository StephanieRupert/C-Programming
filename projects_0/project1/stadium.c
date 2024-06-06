#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int length,width,elevation,rise,angle,row;

double
lengthYardsToFeet(int length)
    {
    double lengthFeet = length * 3.0;
    return lengthFeet;
    }

double
widthYardsToFeet(int width)
    {
    double widthFeet = width * 3.0;
    return widthFeet;
    }

double
riseInchesToFeet(int rise)
    {
    double riseFeet = rise / 12.0;
    return riseFeet;
    }

double
degreesToRadians(angle) //should have said int angle, no warnings though on my side
    {
    double radians = angle * (acos(-1) / 180.0);
    return radians;
    }

int
getValues()
    {
    printf("Length of the stadium floor in yards? ");
    scanf("%d",&length);

    printf("Width of the stadium floor in yards? ");
    scanf("%d",&width);
    
    printf("Elevation to the first row in feet? ");
    scanf("%d",&elevation);

    printf("Rise between rows in inches? ");
    scanf("%d",&rise);

    printf("Elevation angle in degrees? ");
    scanf("%d",&angle);

    printf("Row number (the first row is row 0)? ");
    scanf("%d",&row);
   
    printf("--------------------\n");
    
    printf("Length is %d yards      ",length);
    printf("Width is %d yards       ",width);
    printf("Elevation is %d feet\n",elevation);
    printf("Rise is %d inches        ",rise);
    printf("Angle is %d degrees     ",angle);
    printf("Row is %d\n",row);
    
    printf("--------------------\n");

    return 0;
    }

double
field()
    {
    double result;
    result = lengthYardsToFeet(length) * widthYardsToFeet(width) * (elevation + (row * riseInchesToFeet(rise)));
    return result;
    }

double
findSide()      //Find missing side needed for sidelines, endzone, and corner sections.
    {
    double result;
    result = (row * riseInchesToFeet(rise)) / tan(degreesToRadians(angle));
    return result;
    }

double
sideline()
    {
    double result;
    result = 0.5 * lengthYardsToFeet(length) * (row * riseInchesToFeet(rise)) * findSide();
    return result;
    }

double
endzone()
    {
    double result;
    result = 0.5 * widthYardsToFeet(width) * (row * riseInchesToFeet(rise)) * findSide();
    return result;
    }

double
corner()
    {
    double result;
    result = ((acos(-1)) * (findSide() * findSide()) * (row * riseInchesToFeet(rise))) / 3.0;
    return result;
    }

double
totalVolume()
    {
    double result;
    result = field() + (sideline() * 2.0) + (endzone() * 2.0) + corner();
    return result;
    }

double
cubicFeetToGallons()
    {
    int gallons =  ((field() + (sideline() * 2.0) + (endzone() * 2.0) + corner()) * 7.4805194805195) + 0.5;
    return gallons;
    }

int
main(int argc,char **argv)
    {
    getValues();
    
    double fieldValue,sidelineValue,endzoneValue,cornerValue,totalCubicFeet; 
    int totalGallons;

    fieldValue = field();
    sidelineValue = sideline() * 2.0;
    endzoneValue = endzone() * 2.0;
    cornerValue = corner();
    totalCubicFeet = totalVolume();
    totalGallons = cubicFeetToGallons();

    printf("field volume is %lf cubic feet\n",fieldValue);
    printf("sideline volume is %lf cubic feet\n",sidelineValue);
    printf("endzone volume is %lf cubic feet\n",endzoneValue);
    printf("corner volume is %lf cubic feet\n",cornerValue);
    printf("total volume is %lf cubic feet\n",totalCubicFeet);
    printf("--------------------\n");
    printf("total volume is %d gallons\n",totalGallons);
    
    return 0;
    }
