#include <iostream>

using std::cout;
using std::endl;
using std::cin;

long long climbingStairs (int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return climbingStairs (n - 2) + climbingStairs (n - 1);
}
// MAIN FUNCTION OF THE PROGRAM
int main (void) {
    int val;
    cout << "Enter value : " << endl;
    cin >> val;
    long long res = climbingStairs (val);
    cout << res << endl;
    return 0;
}