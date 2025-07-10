#include <iostream>
#include <stack>

int main (void) {
	std::stack<int> st;
	st.push (20);
	st.push (30);
	st.push (50);
	st.push (60);
    std::cout << "size of the stack : " << st.size() << std::endl;
    std::cout << "Top of the stack : " << st.top () << std::endl;
    st.pop ();
    st.pop ();
    std::cout << "Top element after pop : " << st.top () << std::endl;
    std::cout << "Stack is empty or not : ";
    if (st.empty()) {
    	std::cout << "Stack is empty" << std::endl;
    }
    else {
    	std::cout << "NO, Stack is empty" << std::endl;
    }
	return 0;
}