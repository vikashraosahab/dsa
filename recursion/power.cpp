// FIND OUT M POWER OF N NUMBER 
// FIND OUT THIS VALUE BY USING RECURSION METHOD
#include <stdio.h>
#include <iostream>

using namespace std; // NAMESPACE STANDARD 

// FUNCTION PROTOTYPE 
int power (int,int);
// MAIN FUNCTION OF THE PROGRAM 
int main (int argc , char * argv[]) {
    int m,n;
    cout << "Enter power value (m) and value (n) respectively : ";
    cin >> m >> n;

    int res = power (m,n);
    cout << "Result : " << res << endl;
	return 0;
}

// FUNCTION DEFINITION 
int power (int m, int n) {
	if (m == 0) return 1;
	int val = power (m - 1,n);
	return val * n;
}