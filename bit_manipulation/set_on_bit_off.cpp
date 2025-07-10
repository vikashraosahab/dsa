// SET THE ON BIT OFF 
#include <iostream>

using namespace std;

int main (void) {
    int n,i;
    cout << "enter n : ";
    cin >> n;
    cout << "enter i-th position : ";
    cin >> i;
    n = (n & ~(1 << i));
    cout << "value : " << n;
	return 0;
}