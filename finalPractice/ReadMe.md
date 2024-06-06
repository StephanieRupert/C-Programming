CS 100 Practice Final Exam
Practice Finals – Keeping CS students off the streets since 1988

1. A sugar-cube measures one-half inch on a side. Your bedroom is 14 feet by 16 feet by 9 feet. How many sugar cubes are needed to fill your bedroom completely? If you can buy a box of 1000 sugar cubes for $2.49, how much does it cost to fill your room with sugar cubes?
2. Twizzlers come in many flavors. Twizzlers are eight inches long, and come 40 to a pack. How many packages of Twizzlers are needed to run a continuous string from Tuscaloosa to Auburn (160 miles)? If a package of Twizzlers costs $2.79, how much does it cost to run this string of Twizzlers between the two cities?
3. Using the scanner routines, write a program that reads in strings (double-quote delimited) until end-of-file is reached. For each string, give the percentage of white space (spaces or tabs) in the string.
4. Write a program that reads in integers until end-of-file is reached and prints out the largest and smallest integers, as well as the range (largest – smallest).
5. Assume you have a function named isPrime that takes a single integer argument and returns 1 (true) if the value passed is prime and 0 (false) if the value passed is not prime. Write a main program that uses isPrime and prints all the prime numbers between 1 and 1000. If you want to test your main, search for “C program find prime number” and you can find lots of code to use for your isPrime function.
6. Again, using the function isPrime as described above, write a different main program – this one should compute and print the sum of the first 100 prime numbers.
7. Write a program that reads in integers in the range of 1 to 100, stopping when a zero is read. Give the number of unique integers that were entered. That is, how many numbers in the range of 1-100 were in the input? Hint: use an array of 100 items, one for each of 1-100, and “mark” locations when you see a given number.
8. Write a function flipCase that takes a character string as its argument. It returns the modified character string with all lower-case characters converted to their upper-case equivalent, and all upper-case characters converted to their lower-case equivalent.
9. Write a function orderTwo that takes the addresses of two integers as its arguments. It returns these two integers, with the smallest value in the first parameter and the largest value in the second parameter.
10. Write a function orderThree that takes the addresses of three doubles as its arguments. It returns these three doubles ordered from largest to smallest.
11. Write a function hasDups that takes an integer array with ten elements and returns 1 (true) if there are any duplicates in the array. It returns 0 (false) if there are no duplicate values found in the array.
12. Write a function orderedArray that takes an array of doubles and an integer (the array size) and returns 1 (true) if all the array elements are in ascending order. It returns 0 (false) if the array is not in ascending order.
13. Write a program that reads in words from standard input until end-of-file is reached. After reading in this set of words, report whether or not you saw every letter in the alphabet. You can assume that all input is lower-case.
14. Write a program that reads in numbers from standard input until end-of-file is reached. At the end, give the number of values read, along with the sum and product of all these values.
15. Write a program that reads in ten quiz scores (all scores are out of 100 points). Print the total points that were earned on the quizzes and the letter grade associated with that score (use a standard 90/80/70/60 scale and no plus-minus grades).
16-20. Write programs to generate the following pictures for any size N (the pictures below are for N=5)
    
XXXXX
XXXX
XXX
XX
X
X

XX
XXX
XXXX
XXXXX
XXXXX
XXXX
XXX
XX
X

01234
10123
21012
32101
43210

+-----+
|     |
+-----+
|     |
+-----+
|     |
+-----+
|     |
+-----+
|     |
+-----+

XXXXXXXXXX
XXXX  XXXX
XXX    XXX
XX      XX
X        X
XX      XX
XXX    XXX
XXXX  XXXX
XXXXXXXXXX

21. Write a function countNeg that takes an integer array and the size of the array (another integer) and returns the number of values that are less than zero.
22. Write a function isBalanced that takes an integer array and an integer with the array size and returns 1 (true) if the sum of the positive values is the same as the sum of the negative values (their magnitude is the same, obviously one is positive and one is negative). Return 0 (false) if their magnitudes are not the same.
23. Write a function howSparse that takes a matrix of integers and two integers representing the number of rows and columns in the matrix and returns the percentage of the elements in the matrix that are zero.
24. Write a program called copyFile that takes two command line arguments. It copies the contents of the first command-line argument to the file specified by the second command-line argument. If the first file does not exist (the open fails), then print an appropriate error message.
25. Write a program called quickAdd that takes any number of command-line arguments and prints the sum of these arguments. All command-line arguments are integers.
26-30 Working with linked lists
Define a struct for a Node that contains a name (character string), age (integer), and sex (character), as well as a pointer to the next Node.
Write a join routine that adds a new Node to an existing list
Write a print routine that prints the list, using the format [Name-age-sex] for each Node
Write a find routine that takes a character string as its argument (representing a name) and returns either a pointer to the Node in the list where that person exists or NULL if that person is not in the list
Write a main routine that demonstrates the operation of the routines described above

31-35 More work with linked lists
Define a struct for a Node that contains a part number (integer) and a quantity for that part (inventory)
Write a join routine that adds a new Node to an existing list
Write an update routine that takes a part number and an increment/decrement value (increment is positive, decrement is negative). Find that part number and update its inventory appropriate.
Write a print routine that prints all the items, using the format [Part nnn / yyy in-stock ]
Write a main routine that demonstrates the operations of the routines described above

36. Implement greatest common divisor recursively. Count the number of calls to gcd when computing the greatest common divisor for 120 and 8, for 64 and 16, for 2048 and 256, and for 625 and 90.
37. Write Fibonacci. Count the number of recursive calls in computing the 5th, 10th,, 15th & 20th Fibonacci numbers.
38. Consider a linked list that simply contains names (each Node has a name and a pointer to the next node). Modify the standard join routine so that it only adds new items at the end of the list.
39. Consider a linked list that simply contains names (each Node has a name and a pointer to the next node). Modify the standard join routine so that it only adds a new node if that name does not already exist in the list.
40. Write a function isPalin that returns 1 (true) if the string passed to it is a palindrome and 0 (false) if it is not.
41. Write a function commonChars that takes two character strings as its arguments and returns a new (third) character string. The new string contains all the characters that exist in both strings passed to the function.
42. Write the find routine in the first linked list block (questions 26-30) recursively.
43. Write the print routine in the second linked list block (questions 31-35) recursively.
44. Write a function findSmallest that takes three arguments – a matrix (two dimensional array of integers) and the number of rows and the number of columns in the matrix – and returns the smallest value in the matrix.
45. Write a function findMaxIndex that has five arguments – a matrix (two dimensional array of unique integers), the number of rows, the number of columns, plus two return values. Your function should return the x and y coordinates of the largest entry in the matrix using the last two parameters.
46. Write a function readNames that uses the linked list described in question #38. Your function takes one argument, the name of a file containing all the names to be added to the list. It returns a pointer to the head of the new list (after adding all the names in the file).
47. Write a recursive function that takes an integer and converts it to base 5 (hint: recall the second bonus quiz)
48. Write a function buildMatrix that takes two arguments – the number of rows and columns. Allocate space for the matrix and initialize every location to zero, returning a pointer to this new matrix.
49. Write a function onlyUnique that returns only the unique characters in the character string passed to it.
50. Write a function isOrdered that returns 1 (true) if all the characters in the string passed to it are in ascending order and returns 0 (false) if that is not true.
