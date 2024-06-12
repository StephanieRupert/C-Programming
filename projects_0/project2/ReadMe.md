CS100: Project 2

Revision Date: February 15, 2015

Printable Version
Preamble
Life is full of difficult decisions

Ever dropped food on the floor? We're not talking about pickled brussels sprouts that you probably pushed off your plate on purpose when you were a child, but good food that you really like. Once it hits the floor, your initial instinct is that you've got to throw it away. However, in the back of your mind, you are wondering if it is still good to eat. Especially if no one else noticed that you just picked something up from the floor.

This assignment develops a program to help one decide whether or not to eat food that they dropped on the floor. Using this flowchart, write a program that asks the user a series of questions about the food that was just dropped and gives them an answer - whether or not they can still eat what dropped on the floor.
Where to Start

The first thing you should do is study the flowchart and make sure you understand the logic behind it. The flowchart asks a series of questions and expects specific answers to each question. For example, it assumes you dropped one of four possible items, meat or produce or bread-roll or junk-food. It asks some yes/no questions and is also has a couple of routines that it calls to find out information about when you last cleaned your floor (the options range today to do-not-know) and what the item you dropped looks like after you blow on it and brush off any visible dirt and grime (the options for this test range from immaculate to still-yucky).

Next, establish a directory in which you will work. Run the following commands in a terminal window, one at a time:

    cd
    cd cs100
    mkdir -p projects/project2
    cd projects/project2

Name your main module eat.c. You will also need to copy the scanner.h and scanner.c files from troll into this directory. You will also create an input-output module (io.c and io.h) and a logic module (logic.c and logic.h).
Assumptions for this Project

We are assuming that all submitted projects will:

    Require that user always enters lower-case answers to the questions
    Require that user always enters single-word answers to the questions. There may be special characters (such as the -) in the word, but each answer is a single token (block of characters).
    Use the scanner.h and scanner.c routines for all input
    Use functions to break the overall project down into smaller modules 

Functions in your Program

At a minimum, your program should have eight functions.

    Four functions that handle a person dropping meat, produce, bread-roll, and junk-food
    A YesNo function that asks a specific question and gets a yes/no answer. For this function, we suggest passing the specific question as a character string to the function, and simply returning a value to determine whether the user answered yes or no (return 1 for yes and 0 for no).
    A FloorLastCleaned function that asks when the floor was last cleaned, one of today, yesterday, this-week, or do-not-know.
    A BlowBrushTest function that asks how clean the food is after you blow on it and brush off the obvious dirt, one of immaculate, looks-clean, visible-specks, or still-yucky.
    A ThreeSecondRule function that asks whether or not the food was on the floor for more than three seconds before you picked it up. This function is similar to the YesNo function, as it expects the user to enter a yes or no answer. However, it does not require anything be passed to it (the YesNo function expected a question to be passed as its one argument). 

As an example for the YesNo function, take the situation where you are asking whether or not the donut (type of junk-food) that dropped had sprinkles on it. The function signature and function call shown below would be one way to approach the task.

    int YesNo(char *);
    ...
    int ans = YesNo("Did the donut have sprinkles on it?");

You may introduce more functions if you wish. For the functions listed above, you must figure out what arguments you want to pass and how you want the results returned. For example, you could return the results from the YesNo function as an integer answer or a character (or a string or a double). The choice is yours.
Program Input

For this program, you can assume that all input is entered correctly. All input will be lower-case responses. The user will also give a valid response. The complete list of input words that you might see is shown below:

meat, produce, bread-roll, junk-food, fish, canned, fresh, beef, chicken, donut, chips, yes, no, immaculate, looks-clean, visible-specks, still-yucky, today, yesterday, this-week, do-not-know

You will use the scanner module to perform all input.
Program Output

As your program runs, it will prompt the user for information. The user will reply with a valid answer to each question. After asking these questions, your program must determine whether or not to recommend eating the dropped food. Your program should:

    Print a message to the user indicating eat or do not eat.
    Exit with a return code of 0 (success) if the program recommends eating the food and a 1 (failure) if the program recommends not to eat what dropped. 

Your output will be graded based on this return code. So the return statement at the end of your main routine now actually means something. If your program exits with a return 0; then the food is safe to eat while exiting with a return 1; statement is a recommendation not to eat the food.
Sample Execution

The following dialog illustrates how the program might operate. Note that your program's prompts are shown like this and user responses are shown like this.

What fell on the floor? meat

What kind of meat? chicken

Chicken nuggets? yes

Recommendation - you can eat what you dropped

Another example of this program in action is:

What fell on the floor? junk-food

What kind of junk food? donut

Did it have sprinkles on it? yes

When did you last clean the floor? today

What does it look like after blowing on it and brushing it off? looks-clean

Recommendation - do not eat what you dropped

The exact wording of the questions that you ask is not critical. So whether you say What fell on the floor? or What did you drop on the floor? does not matter. Your program must simply follow the correct paths through the flowchart, for the answers given, and then produce the correct eat-or-don't-eat answer.
Program Organization

A guiding principle of Computer Scientists is "separation of concerns". Common concerns are input-output, logic, and data storage. By separating the concerns of the program, it makes it easier to modify the program for different environments, say moving your program from a desktop computer to a phone. For this project, you will separate the input-output and logic concerns from the main module.

All functions/procedures that call the scanner or write/print data should be placed in the file io.c, with their prototypes placed in io.h.

All functions/procedures that implement the logic of the flowchart should be placed in the file logic.c, with their prototypes place in logic.h

The main function should be placed in a file named eat.c.

For this project, you should have a header block of comments that explains the purpose of each module and also identifies the program author and date. Each function in the program should have a short header block (one or two lines) that explains the purpose of the function.

A good rule to remember with commenting is that if you had to sit down and think about the code to enter in a given statement, then it probably deserves a comment. If you had to think about the statement, then comments will help anyone who is looking at your code at a later date.

As always, you should use consistent brace placement and indentation. Your code should have a pleasing look.
A Makefile is Required

Please make sure to generate a makefile for this project and include it in your submission. Since you have four modules in this project, eat.c, io.c, logic.c, and scanner.c, you should include a makefile that allows you to compile this project cleanly and easily.

Your makefile should respond to the commands:

make
    typing make should have your makefile build your executable 
make test
    typing make test should have your makefile test your executable with a file named test.dat 
make clean
    typing make clean should remove the object files and the executable 

Your makefile should never perform any unnecessary compilations.
Challenges

Challenge One: Handle input from the user regardless of case. That is, for a yes answer, the user should be able to specify Yes or yes or YES or any other combination of upper-and-lower-case letters.

Challenge Two: Handle the case where the user mis-spells a word. Ask the user to re-enter a valid response. For example, if the user enters on instead of no then catch this error and ask them for a valid response.
Compliance Instructions

First, check to make sure that you are using proper programming style for this projet. The document style contains a number of expected conventions that must be followed for this project (as well as all future projects). Please make sure your program adheres to the requirements identified in the style guide.

Second, create a file named test.dat that holds a proper set of responses for your program.

Compile and test your program, naming the executable eat, by entering the following commands and input:

    $ gcc -Wall -g eat.c io.c logic.c scanner.c -o eat
    $ cat test.dat | eat

These commands must not fail.

Third, test your makefile with the commands:

    $ make
    $ make test

You should get the exact same behavior as when you manually compiled the program and piped your test.dat file to the executable.
Checklist

Did you:

    name your main module eat.c?
    place your functions in the proper modules?
    have your main function return zero or one appropriately?
    comment your modules sufficiently?
    create your test.dat file and test your program with it?
    test your makefile thoroughly to ensure it builds and tests your executable?
    test your makefile thoroughly to ensure it performs no unnecessary compilations? 

Note: this list is not exhaustive! There may be other specifications and requirements not listed here.
Submission Instructions

Change to the project2 directory containing your assignment. Do an ls command. You should see something like this:

eat.c    io.c    io.h    logic.c    logic.h    makefile    scanner.c    scanner.h

Extra files are OK, as long as you are in the correct directory. Submissions from the wrong directory will be penalized.

Submit your program like this:

    submit cs100 YYY project2

Remember to replace YYY with your instructor name (brown,cordes,lusth).
Due Date

The due date for this assignment can be found on the class schedule.

lusth@cs.ua.edu
