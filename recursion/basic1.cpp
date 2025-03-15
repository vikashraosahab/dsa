// WHEN A FUNCTION CALL'S ITSELF DIRECTLY OR IN-DIRECTLY IS CALLED RECURSION.
// IN RECURSION A METHOD BREAK BIG PROLEMS INTO SMALLER ONES
// IN RECURSION METHOD THERE ARE THREE THINGS NEEDED -
/*
   ******** BASE CASE WHERE RECURSION ENDED 
   ******** RECURSIVE CALLING 
   ******** PROCESSING 
*/

// PRINT NUMBER 1 TO 100 BY USING RECURSION 
// TIAL RECURSION 
#include <iostream>
#include <stdio.h>

void print (int); // FUNCTION PROTOTYPE 

// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    int n = 100;
    print (n);
	return 0;
}

// FUNCTION DEFINITION 
void print (int n) {
	if (n == 0) return;

	print (n - 1);
	std::cout << n << std::endl;
}