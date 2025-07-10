#include <iostream>

// TEMPLATE CLASS FOR STACK IMPLEMENTATION 
template <typename T> class Stack {
	private:
		T queue[10];
		int top;
		int length;
    public: 
    	Stack () {
    		top = -1;
    		length = 0;
    	}
        void push (T val) {
        	if (top >= 9) {
        		std::cout << "Stack is fulled" << std::endl;
        		return;
        	}
        	queue[++top] = val;
        	length++;
        }
        void pop () {
        	if (top == -1) {
        		std::cout << "Stack is empty" << std::endl;
        		return;
        	}
        	top = top - 1;
        	length--;
        	return;
        }
    
        T peek() {
           if (top == -1) {
              throw std::out_of_range("Stack is empty");
            }
           return queue[top];
         }

    	bool empty () {
    		return top == -1 ? true : false;
    	}

    	int size () {
    		return length;
    	}

};

int main (void) {
    Stack<int> st;
    st.push (20);
    st.push (320);
    st.push (210);
    st.push (20);
    st.push (320);
    st.push (210);
    st.push (20);
    st.push (320);
    st.push (210);
    std::cout << st.peek () << std::endl;
    std::cout << "After pop out function : " << std::endl;
    st.pop ();
    st.pop ();
    st.pop ();
    st.pop ();
    st.pop ();
    st.pop ();
    st.pop ();
    st.pop ();
    st.pop ();
    st.pop ();
    st.pop ();
    st.pop ();
    try {
        int value = st.peek();
        std::cout << "Top value: " << value << std::endl;
     } 
     catch (const std::out_of_range& e) {
      std::cout << "Error: " << e.what() << std::endl;
     }
    std::string empty = st.empty() ? "Yes" : "No";
    std::cout << "Stack is empty : " << empty << std::endl;
    std::cout << "Stack size : " << st.size() << std::endl;

    // WITH 
    std::cout << "String now : " << std::endl;
    Stack <std::string> str;
    str.push ("Vikash");
    str.push ("Akash");
    str.pop ();
    str.pop ();
    str.pop ();
    try {
        std::string value = str.peek();
        std::cout << "Top value: " << value << std::endl;
     } 
     catch (const std::out_of_range& e) {
      std::cout << "Error: " << e.what() << std::endl;
     }

    std::cout << str.size() << std::endl;
	return 0;
}

