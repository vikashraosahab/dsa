#include <iostream>
#include <queue>

// MAIN FUNCTION OF THE PROGRAM
int main (void) {
    std::queue <int> q; // DECLARATION OF THE QUEUE DATA STRUCTURE 
    q.push (20);
    q.push (23);
    q.push (52);
    q.push (520);
    q.push (5200);
    q.push (52110);
    q.push (420);
    std::queue <int> q2;
    q2.swap (q);
    q.swap (q2);
    std::cout << "Size : " << q.size () << std::endl;
    while (!q.empty()) {
        int val = q.front ();
        std::cout << q.front () << std::endl;
        std::cout << val << std::endl;
        q.pop ();
    }
    std::cout << "Size : " << q.size () << std::endl;

return 0;
}