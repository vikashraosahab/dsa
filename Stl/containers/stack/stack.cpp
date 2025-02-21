#include <iostream>
#include <stack>

// MAIN FUNCTION OF THE LINKED LIST
int main (void) {
    // CREATION OF THE STACK 
    std::stack <int> s;

    // Insert ELEMENT IN THE STACK 
    s.push (20);
    s.emplace (52);
    s.push (120);
    s.push (520);
    s.push (521);
    while (!s.empty ()) {
        std::cout << s.top () << std::endl;
        s.pop ();
    }
    std::cout << s.size () << std::endl;
    std::stack <int> s2;
    s2.push (100);
    s2.push (200);
    s2.push (300);
    s2.push (400);
    s2.push (500);
    while (!s2.empty()) {
        std::cout << s2.top () << std::endl;
        s2.pop ();
    }
return 0;
}