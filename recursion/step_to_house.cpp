// A PROGRAM THAT HELP A BOY TO GO HOME BY EACH STEP
// USE RECURSION 
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

// FUNCTION PROTOTYPE 
void travelling (int&,int&);

// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    int start = 0;
    int destination;
    cout << "Enter distance : " << endl;
    cin >> destination;
    travelling (start,destination);
    return 0;
}

// FUNCTION DEFINITION 
void travelling (int& start,int& destination) {
    if (start == destination) { // BASE CASE
        cout << "Okay boy reached to the home !" << endl;
        return;
    }
    // RECURSIVE CALLING
    cout << "Step : " <<  start << endl;
    start = start + 1;
    travelling (start,destination);
}