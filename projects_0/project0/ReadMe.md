CS100: Project 0

Revision Date: January 25, 2015

Preamble
Imitation is the sincerest form of flattery - Aesop

Real Computer Scientists abhor reinventing the wheel. So when given the task of writing a program, they search out and find programs they feel are similar to the one they need to write. They then modify the program, with permission, so that it processes the input and produces the output they desire. They accomplish this feat even if they do not completely understand the original program upon which they are basing their new program.

Your task is to take an existing program that computes baseball or softball on-base percentage and turn it into a program that computes an offensive player rating for basketball.
Where to Start

The first thing you should do is to setup a directory in which you will work. Run the following commands in a terminal window, one at a time:

    cd
    cd cs100
    mkdir -p projects/project0
    cd projects/project0

The first two commands move you into your cs100 directory, while the next two create and move you into a project directory. Now, retrieve the existing program for computing batter rating with the command:

    wget troll.cs.ua.edu/cs100/projects/onbase.c

Compile and run the program, using the following commands in a terminal window:

    gcc -Wall -g onbase.c -o onbase 
    onbase

In another terminal window, move into your project directory and run the command:

    vim onbase.c

This will allow you to look at the program while it is running in the other window. Try to figure out what part of the code does what by running the program in the other window over and over.
How to Proceed

Now, in the first window, copy the existing program over into a new file named obr.c with the command:

    cp onbase.c obr.c

In the second window, quit vim and open up the new file, obr.c. Now begin modifying obr.c so that it stops computing on-base percentages and starts computing offensive production for basketball players. Make one change at a time and test after each change. Don't forget the vim's undo button in case you introduce an error into the code. Once a change is working, make sure you save the file.

Here is the formula for computing a basketball players offensive production rating:

    R = (3 T + 2 G + F + (A - 3 S) / P) / 7 

where T is the three-point shooting average, G is the two-point shooting average, F is the free throw shooting average, A is the number of assists, S is the number of turnovers (allowed steals), and P is the number of team possessions while the player is on the court.
About variables and numeric types in C

Variables hold values. For example, in the previous section, T, the three-point shooting average is a variable. In the C programming languages, you must indicate what kind of number a variable holds. The two basic numeric types in C are integers and real numbers. Integer-holding variables in C are designated with the keyword int, while variables that hold real numbers are designated with the keyword double. You need to be aware of which type you will be using when converting the onbase.c program. For example, in the original program, the variables storing the number of "at bats" are declared int, for example:

    int atBats;

If you wish to convert that variable to hold a average, which is a real number, you would need to change the keyword int to the keyword double:

    double threePtPerc;

Also, the command for reading an integer would look something like this:

    scanf("%d",numAtBats);

while reading a real number would look like this:

    scanf("%lf",average3ptrs);

Note that numAtBats would need to have a type of int *, while average3ptrs would have a type of double *. You will learn what the asterisk means at a future date. Just make sure that if you change a variable type from int to double (or vice versa), you make the changes everywhere!
Compliance Instructions

Compile your program, naming the executable obr, by entering the command:

    gcc -Wall -g obr.c -o obr

Test your program in the following two ways. Failure on either of the testing methods will mean you will receive a zero for this project.
Obtaining data from the user

Compile your program using the following compile command (the terminal window prompt is shown as a dollar sign) : Now run the program, entering reasonable numbers for NNN:

    $ obr
    3 point average? 0.NNN
    2 point average? 0.NNN
    free throw average? 0.NNN
    assists? NNN
    turnovers? NNN
    team possessions? NNN
    The offensive rating for this player is MMM
    $

Note the dollar sign indicates the the terminal window prompt. The rating MMM should be consistent with the entered values. You may check your computations on the CS100 Forums.

Note that averages are entered as a fraction. For example, a three point average of .257 would correspond to 25.7% three point percentage.
Obtaining data from a file

Create a file named test.dat that contains six numbers (perhaps the numbers you entered for the previous compliance test), one per line. Make sure there are no blank lines before, between, or after the numbers. If you have done this correctly, the command (using an 'ell' not a 'one'):

    wc -l test.dat

should produce the following output:

    6 test.dat

Now, make sure that you have implemented your program correctly by running this command:

    $ cat test.dat | obr
    3 point average? 2 point average? free throw average? assists? turnovers? team possessions?
    The offensive rating for this player is MMM

This method of running the program is called "piping in the input from a file". When you actually do this, the prompts your program makes for information will all be strung together on a single line. Don't worry about it; it's a natural consequence of the way the program was run.

Your program should print out clearly the results consistent with the six inputs. If your code fails with a runtime error while running this test or if you fail to provide a working test.dat, then you will receive a zero for this assignment.

Note that your answers do not have to be correct for your program to be graded, only that the program does not crash. Of course, correct answers will yield a much higher grade.

Note also that a prerequisite for receiving any credit is that your new program be based off the original program.
Challenges

Try to get the rating to print like 1.324 instead of 1.3235294117647058. You will need to learn about formatting numbers to do this challenge.

If the number of team possessions is below 100, print a message to the effect that there is not enough data to compute a meaningful rating instead of the rating itself. You will need to learn about if statements to do this challenge.
Submission Instructions

Change to the project0 directory containing your assignment. Do an ls command. You should see something like this:

    obr  obr.c  onbase  onbase.c  test.dat

Extra files are OK, as long as you are in the correct directory. Submissions from the wrong directory will be penalized.

Submit your program like this:

    submit cs100 YYY project0

Remember to replace YYY with your instructor name (brown,cordes,lusth). Note that project0 ends in a zero, not a capital Oh.
Due Date

The due date for this assignment can be found on the class schedule.

lusth@cs.ua.edu
