//Author: Stephanie Rupert
//Date: 02/27/2015
//CS 100
//logic.c contains all the logic of the flowchart for project 2


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "io.h"
#include "logic.h"


//Three Second Rule function
int
three(void)
    {
    char *input;

    input = threePrint();

    int i = atoi(input); 
    if (i <= 3)
        return 0;
    else
        return 1;
    }

//Blow/Brush Test function
int
blowbrush(void)
    {
    char *input;

    input = blowPrint();
    
    if (strcmp(input,"immaculate") == 0)
        return 1;
    else if (strcmp(input,"looks-clean") == 0)
        return 2;
    else if (strcmp(input,"visible-specks") == 0)    
        return 3;
    else                                            //"still-yucky"
        return 4;
    }    

//Floor Last Cleaned function
int
clean(void)
    {
    char *input;

    input = cleanPrint();
    
    if (strcmp(input,"today") == 0)
        return 1;
    else if (strcmp(input,"yesterday") == 0)
        return 2;
    else if (strcmp(input,"this-week") == 0)
        return 3;
    else                                            //"do-not-know"
        return 4;
    }

//Canned or fresh fish branch function
int
canned(void)
    {
    char *input;
    int result;

    input = cannedPrint();

    if (strcmp(input,"canned") == 0)
        {
        result = blowbrush();
        if (result == 1)
            return 0;
        else
            return three();
        }    
    
    else                                            //"fresh"
        {
        result = clean();
        if (result == 1)
            return three();
        else if (result == 2)
            return three();
        else
            return 1;
        }
    }


//What kind of meat function
int
meat(void)
    {
    char *input;
    
    input = meatPrint();

    if (strcmp(input,"fish") == 0)
        return canned();
        
    else if (strcmp(input,"beef") == 0)
        {
        int result = yesNo("Steak? ");
        if (result == 1)
            return 0;                               //yes you can eat
        else 
            {
            result = blowbrush();
            if (result == 1)
                return 0;
            else
                return three();
            }
         }

    else                                            //"chicken"
        {
        int result = yesNo("Nuggets? ");
        if (result == 1)
            return 0;                               //yes you can eat
        else
            {
            result = clean();
            if (result == 1)
                return three();
            else if (result == 2)
                return three();
            else
                return 1;
            }        
        }
    }

//Smashed or bruised produce function
int
smash(void)
    {
    int result = yesNo("Smashed or bruised? ");

    if (result == 1)
        {
        result = blowbrush();
        if (result == 1)
            return three();
        else if (result == 2)
            return three();
        else
            return 1;
        }    
            
    else
        result = clean();
        {
        if (result == 1)
            return 0;
        else if (result == 2)
            return 0;
        else
            return 1;
        }    
    }    

//Root vegetable function
int
ground(void)
    {
    int result = yesNo("Does it grow in the ground? ");
    
    if (result == 1)
        return three();
    else
        return smash();
    }

//Bread-Roll function
int
breadroll(void)
    {
    int result = yesNo("Buttered? ");
    
    if (result == 1)
        {
        int result = yesNo("Butter side up? ");
        if (result == 1)
            {
            result = clean();
            if (result == 1)
                return 0;
            else if (result == 2)
                return 0;
            else
                return 1;
            }    
            
        else
            {
            result = blowbrush();
            if (result == 1)
                return three();
            else if (result == 2)
                return three();
            else
                return 1;
            } 
        }

    else                                            //not buttered
        {
        result = clean();
        if (result == 1)
            {
            result = blowbrush();
            if (result == 1)
                return three();
            else if (result == 2)
                return three();
            else
                return 1;
            }

        else if (result == 2)
            {
            result = blowbrush();
            if (result == 1)
                result = three();
            else if (result == 2)
                result = three();
            else
                return 1;
            }

        else if (result == 3)
            {
            result = blowbrush();
            if (result == 1)
                result = three();
            else if (result == 2)
                result = three();
            else
                return 1;
            }   
        else
            return 1;
        }    
   
   return 0;
   } 

//Junk-Food function
int
junkfood(void)
    {
    char *input;

    input = junkPrint();
    
    if (strcmp(input,"donut") == 0)
        {
        int result = yesNo("Sprinkles? ");
        if (result == 1)
            {
            result = clean();
            if (result == 1)
                {
                result = blowbrush();
                if (result == 1)
                    return 0;
                else
                    return 1;
                }
            else
                return 1;
            }    
         else                                               //no sprinkles
            return three();
        }
    
    
    else                                                    //"chips"
        {
        int result = blowbrush();
        if (result == 1)
            return 0;
        else
            return 1;
        }
    }

//What fell on the floor function
int
whatfell(void)
    {
    char *input;
    int result;

    input = whatPrint();

    if (strcmp(input,"meat") == 0)
        result = meat();
    
    else if (strcmp(input,"produce") == 0)
        result = ground();
    
    else if (strcmp(input,"bread-roll") == 0)
        result = breadroll();
    
    else if (strcmp(input,"junk-food") == 0)
        result = junkfood();
    else
        return 0; 
    
    if (result == 0)                                        //final result
        {
        canEat();
        return result;
        }

    else if (result == 1)
        {
        dontEat();
        return result;
        }

    else
        return 0;
    }

