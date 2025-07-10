// FIND OUT ODD OR EVEN VALUES BY USING BIT MANIPULATION OPERATOR 
#include <iostream>

using namespace std;

void checkOddEven (int& n) {
   if ((n & 1) == 1) {
   	   cout << n << " Value is odd" << endl;
   }
   else cout << n << " Value is even";
 }
int main (void) {
    int n;
    cout << "Enter n : ";
    cin >> n;
    checkOddEven (n);

	return 0;
}