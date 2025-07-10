// SET THE I - BIT TO 1
#include <iostream>

using namespace std;

int main (void) {
	int n;
	cout << "enter n : ";
	cin >> n;
    
    // SET OFF BIT OF I THE 
    int i;
    cout << "position of i bit : ";
    cin >> i;

    // SET OFF BIT TO ON 
    n = (n ^ (1 << i));
    cout << "new value : " << n;
    return 0;
}