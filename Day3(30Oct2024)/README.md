# Problem
Write a program to allocate the memory of  the character  array storing the name of the students dynamically?

## Explaination:-
A struct called student is defined, which has three fields:

char *name: A pointer to a character array (string) for the student's name.

int rollno: An integer to store the student's roll number.

float marks: A floating-point number to store the student's marks.

## LOGIC:-
s2 of type struct student and a pointer p that points to s2.

This allows access to the members of s2 through the pointer Memory is dynamically allocated for the name field using malloc.

A check is performed to ensure that memory allocation was successful. If not, an error message is printed, and the program exits with a status of 1.

The program prompts the user to enter the student's name.

 The fgets function is used to read the string from standard input, which allows for spaces in the name.