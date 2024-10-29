# Problem:
Write a c program to replace 0 and 1 in a number.

## Solution Approach:
Defined an array of character to store a number as string and prompted the user to input a number.

Then defined a for loop from 0 to length of the array and searched if any '0' or '1' is there in any index.

If any '0' or '1' is present then simply swap it with the other one.

Lastly, printed the manipulated number.

The reason behind doing all the functions with string is to make the code compatible for all types of numbers including negative, float and specifically the number that starts with a '0' as the compiler considers it without '0' in left.