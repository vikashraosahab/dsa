// STACK DATA STRUCUTRE IMPLEMENTATIONS 
#include <iostream>
#include <stack> 

int main (void) {
	std::stack<int> st;
	st.push (20);
	st.push (32);
	st.push (210);
    std::cout << st.top () << std::endl;
    return 0;
}