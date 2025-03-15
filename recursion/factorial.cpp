// FIND OUT FACTORIAL BY USING RECURSION METHOD 
// FIND OUT N NUMBER FACTORIAL BY USING RECURSION
#include <iostream>
#include <stdio.h>
#include <math.h>

// ALLOW NAMESPACE STANDARD 
using std::cout;
using std::endl;
using std::cin;

// FUNCTION PROTOTYPE 
int factorial (int);

// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    int n;
    cout << "Enter n : " << endl;
    scanf ("%d",&n);
    // CALLING FUNCTION
    cout << factorial (n) << endl;
	return 0;
}

// FUNCTION DEFINITION
int factorial (int n) {
	if (n == 0) return 1; // BASE CASE 
    return n * factorial (n - 1);
}