#include <iostream>
#include <queue>

void display (std::priority_queue <int> pq) {
   while (!pq.empty()) {
    std::cout << pq.top () << std::endl;
    pq.pop ();
   }
}

void display (std::priority_queue <int,std::vector <int>, std::greater <int>> p) {
    while (!p.empty()) {
      std::cout << p.top () << std::endl;
      p.pop ();
    }
}
int main (void) {
    std::priority_queue <int> pq; // MAX HEAPS
    pq.push (20);
    pq.push (52);
    pq.push (31);
    pq.push (52);
    pq.push (12);
    pq.push (21);
    
    display (pq);

    // MIN HEAPS 
    int ary [] = {12,3,5,2,3,5,2,2,1,3,523};
    int size = sizeof (ary) / sizeof (ary[0]);
    std::priority_queue <int, std::vector <int> , std::greater <int>> p2 (ary, ary + size);
    p2.push (200);
    p2.push (210);
    p2.push (52);
    p2.emplace (20);
    display (p2);
    return 0;
}
