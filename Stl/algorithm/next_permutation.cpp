// NEXT_PERMUTATION METHOD IS USED FOR DELETING VALUES 
// IT RETURNS NEXT PERMUTATION POSIBILITY 
#include <iostream>
#include <algorithm> 

// SET-UP THE NAMESPACE METHODS
using std::cout;
using std::endl;
using std::string;
using std::next_permutation;

// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    string txt = "1234";
    do { 
        cout << txt << endl;
    }
    while (next_permutation (txt.begin(),txt.end())); // FIND ALL THE PERMUTATIONS POSIBILITIES UNTIL IT GOES FALSE
    return 0;
}