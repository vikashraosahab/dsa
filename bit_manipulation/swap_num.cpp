// SWAP TWO NUMBER BY USING BIT OPERATORS (WITHOUT USING THIRD VARIABLES)
#include <iostream>

using namespace std;

void swapMethod (int& a, int& b) {
	swap (a,b);
}
void bitMethod (int& a , int& b) {
   a = a ^ b;
   b = b ^ a;
   a = a ^ b;
}

// MAIN FUNCTION 
int main () {
    int a,b;
    cout << "Enter both values : ";
    cin >> a >> b;
    cout << "Before the swap : " << endl;
    cout << "a: " << a << "  b : " << b << endl;
    cout << "After Swap : " << endl;
    //swapMethod (a,b);
    bitMethod (a,b);
    cout << "a: " << a << "  b: " << b;
	return 0;
}