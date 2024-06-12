CS100: Project 1

Revision Date: January 28, 2015

Printable Version
Preamble
A million here, a million there, and pretty soon you're talking real money - Senator Everett Dirksen

One of the original purposes of the computer was to quickly perform computations that took humans significant time and energy. This program will do exactly that, calculating a result that could be done with paper-and-pencil. However, this program will allow us to perform this calculation quickly and easily for a wide range of input values.

Imagine you are sitting in Bryant-Denny stadium and enduring a long television timeout. Your mind starts to wander. Looking below you, you wonder how much liquid (water) it would take to fill Bryant-Denny to your row. You remember your high school science teacher making you figure out the volume of an Olympic-sized swimming pool (660,000 gallons). You wonder how the stadium compares.

Your task is to take some basic information about a stadium (think Bryant-Denny) and do some calculations that will provide a useful answer to the question above. That is, if you are on row N of Bryant-Denny, how many gallons (rounded to the nearest gallon) of liquid would it take to fill the stadium to your feet? We're in Alabama, so we're using standard U.S. gallons, not the imperial gallon or the U.S. dry gallon.
Where to Start

The first thing you should do is to setup a directory in which you will work. Run the following commands in a terminal window, one at a time:

    cd
    cd cs100
    mkdir projects/project1
    cd projects/project1

As a quick reminder, the first two commands move you into your cs100 directory, while the next two create and move you into a project directory.

After this, you need to ask yourself two questions. First, what input do you get when you run the program, the second is how you should model the stadium to perform the calculations necessary to solve this problem.
What Input Do You Need?

To answer the first question, your program will be given six pieces of information.

    Length - an integer value representing the length of the stadium floor (in yards). This length includes the field, the endzones, plus any space beyond the endzones.
    Width - an integer value representing the width of the stadium floor (in yards). This width includes the field, the sidelines, plus any space beyond the sidelines.
    Elevation - an integer value representing the height of the bottom row in the stadium (in feet). Normally the bottom row starts several feet about the field level for line-of-sight considerations.
    Rise - an integer value representing the rise in height between rows in the stadium (in inches).
    Elevation angle - an integer value that represents the angle (in degrees) of elevation for the seats within the stadium. We will assume the entire stadium has the same elevation angle for all rows. This is not normally the case. If you want to learn more about this, then do a web search for C-value and sightline.
    Row - an integer representing the row where you are sitting in the stadium. The very bottom row is considered row 0 to be consistent with counting in C programming. 

How To Model the Stadium?

To answer the second question, you need to figure out how to compute the volume of space below you in the stadium. Here is a simplification of the stadium layout that you must use for this project:

The colors represent the various chunks that make up the total volume. You must compute the volumes of these chunks individually, via separate functions, and then add the all return values up to get the total volume. Note: these functions should not print anything, just return the volumes calculated. Chunks to consider include:

    the volume of the field itself (blue region), extended vertically until it reaches the level of your row. This is a rectangular solid.
    the volume of the two sidelines (green regions), from the bottom row to your row. This is a triangular wedge shape.
    the volume of the two endzones (red regions), from the bottom row to your row. This is a triangular wedge shape.
    the volume in the four corner areas (pink regions), from the bottom row to your row. The four pink regions can be thought of as four pieces of a right circular cone (upside down). 

Understanding How to Model the Stadium

So how do you calculate the number of gallons of water that it would take to fill Bryant-Denny to your feet? First, we recommend you don't tackle the problem in terms of gallons of water, but in terms of cubic feet. Figure out how many cubic feet are below your row. Once you have this, it is easy to convert from cubic feet to gallons.
Simplifying the Model

The volume below you is an irregular shape, but we will make some simplifying assumptions for our calculations. These assumptions are:

    The field is rectangular, with a known length and width
    The elevation from the field to the bottom row of the stands is a vertical rise
    The stands start at the same height everywhere (sidelines, endzones, corners)
    The stands on both sidelines have the same characteristics and dimensions
    The two endzone stands have the same characteristics and dimensions
    The corners (between the sideline stands and endzone stands) all have the same characteristics and dimensions 

Modeling the Different Parts

When looking at the total number of cubic feet, don't try and solve this all at once. Instead, tackle it in parts. Then simply add the various parts to get a total volume in cubic feet. Specifically:

    Model the field itself as a rectangular solid, you just need to know the length and width and height to calculate its volume.
    Model both the sideline stands and the endzone stands as a wedge. That is, a right triangle that has a known thickness. The thickness of the wedge corresponds to the length of the sideline stands. To construct the right triangle, you'll need to remember some basic trig functions. You have a right triangle, know the angle of elevation, and you know the rise in height. You've got two angles and a side, you just need to find the length of the other side for your volume calculations.
    Model the endzone stands the exact same way you did the sideline stands. The height and angle of elevation is the same, the only difference is the thickness of this wedge. It is now the width of the field instead of the length of the field.
    Model each of the four corners as one-fourth of a right circular cone. In our case, the cone is upside down from what you see in most pictures. There are some basic formulas to calculate the volume of a right circular cone that you'll need to find for this program. You need to figure out the height and radius for this right circular cone. The height is the same as the sidelines and endzone, and the angle of elevation plus rise between rows should allow you to calculate the radius. 

One final comment on this. If you don't remember what these basic shapes look like, search online for images of rectangular solid and right circular cone and triangle wedge. Just remember to think of the right circular cone upside down.

As mentioned previously, we strongly recommend that you structure your program so that your calculations are done in pieces. As you compute the various pieces of information that you need, print them out to confirm their accuracy.
Programming This Task

Do not approach this problem as one long main program. If you do, you will lose significant points. Instead, break the task into parts and have a separate function for each part. At a minimum, we suggest:

    A function to read the six input values
    A function to print out the six input values that you received
    A function to calculate the volume of the stadium below a given row. Note that you must use several helper functions in this function. These helper functions would:
        Calculate the volume above the field
        Calculate the volume in the sideline (and endzone) stands
        Calculate the volume of the four corners 

In addition to these functions, there are several helper functions that can be used at various points in your program. These would include:

    A function to convert from yards to feet
    A function to convert from inches to feet
    A function to convert from cubic feet to gallons
    A function to convert from degrees to radians (since C uses radians in its various mathematical functions - sin, cos, tan, etc.) 

When programming, do not try and write in one sitting. Instead, we recommend that you build this in steps. Try getting things to work in the order listed below:

    Get a program that reads in the six values and print them out
    Get a program that reads in six values, prints them out, and then calculates the rectangular volume of the field (to the given row). Ignore the volume in the stands themselves.
    Get a program that reads in six values, prints them out, and then calculates the rectangular volume of the field and the volume of the triangular wedges on the sidelines. Ignore the volume in the four corners.
    Get a program that reads in six values, prints them out, nd then calculates the total volume of the field (to that given row).
    Get a program that reads in six values, prints them out, prints out the intermediate and final volumes in cubic feet, and finally prints out the final volume to the nearest gallon. 

Compliance Instructions

Your program should be named stadium.c.

Compile and test your program, naming the executable stadium, by entering the following commands and input:

    $ gcc -Wall -g stadium.c -o stadium -lm
    $ stadium
    length? 0
    width? 0
    elevation? 0
    rise? 0
    angle? 45
    row? 0
    --------------------------
    length is 0     with is 0       elevation is 0
    rise is 0       angle is 45     row is 0
    --------------------------
    field volume is 0.000000
    sideline volume is 0.000000
    endzone volume is 0.000000
    corner volume is 0.000000
    total volume in cubic feet is 0.000000
    ---------------------------
    0 gallons

Your program should print out clearly the intermediate results and the final result. Add a little more explanatory text for the output than shown above (e.g. units).

You must generate at least one test.dat file that contains a set of reasonable data for this project. Test your data with the command:

    cat test.dat | stadium

If your code fails with a runtime error while running this test or if you fail to provide a working test.dat, then you will receive a zero for this assignment.

Note that your answers do not have to be correct for your program to be graded, only that the program does not crash. Of course, correct answers will yield a much higher grade.
Checklist

Did you:

    name your program stadium.c?
    use consistent units for calculating your volumes?
    use lots of functions?
    have not functions printing other than your main function and your procedure for printing the input values?
    print out the intermediate results?
    round to the nearest gallon?
    create your test.dat file and test your program with it?
    check your test.dat results on the forum? 

Note: this list is not exhaustive! There may be other specifications and requirements not listed here.
Submission Instructions

Change to the project1 directory containing your assignment. Do an ls command. You should see something like this:

    stadium  stadium.c  test.dat

Extra files are OK, as long as you are in the correct directory. Submissions from the wrong directory will be penalized.

Submit your program like this:

    submit cs100 YYY project0

Remember to replace YYY with your instructor name (brown,cordes,lusth).
Due Date

The due date for this assignment can be found on the class schedule.

lusth@cs.ua.edu
