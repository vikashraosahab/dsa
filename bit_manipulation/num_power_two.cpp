// CHECK THE VALUE OR NUMBER IS POWER OF TWO OR NOT 
#include <iostream>

using namespace std;

int main (void) {
    int n;
    cin >> n;
    if ((n & (n - 1)) != 0 && n > 0) {
    	cout << n << " is not power of two" << endl;
    }
    else {
    	cout << n << " is power of two" << endl;
    }
	return 0;
}
