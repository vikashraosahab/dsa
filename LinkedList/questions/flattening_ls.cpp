/*
  1 -> 3 -> 4 -> null
  |    |    |
  3    3    3
  |    |    |
  5    null 3
  |         |
  null      3
            |
            3
*/
#include <bits/stdc++.h>

class LinkedNode {
    public:
    int key;
    LinkedNode *next;
    LinkedNode *bottom;
    LinkedNode (int key):key (key),next (nullptr),bottom (nullptr) {};
};

LinkedNode *flatten (LinkedNode *head) {
    if (head == nullptr) {};
    LinkedNode *temp = head;
    std::vector <int> ary;
    while (temp != nullptr) {
         LinkedNode *bottom = temp;
         while (bottom != nullptr) {
           ary.push_back (bottom->key);
           bottom = bottom->bottom;
         }
        temp = temp->next;
    }
    sort (ary.begin(),ary.end());
    head == new LinkedNode (ary.front());
    ary.erase (ary.begin()); // DELETE FIRST VALUE OF THE VECTOR 
    temp = head;
    for (auto val : ary) {
       LinkedNode *node = new LinkedNode (val);
       while (temp->bottom != nullptr) {
        temp = temp->bottom;
       }
       temp->bottom = node;
    }
    return head;
}
void display (LinkedNode *head) {
    LinkedNode *temp = head;
    while (temp != nullptr) {
        std::cout << temp->key << " ";
        temp = temp->bottom;
    }
    return;
}
// MAIN FUNCTION 
int main (void) {
    LinkedNode *head = new LinkedNode (2);
    head->bottom = new LinkedNode (23);
    head->bottom->bottom  = new LinkedNode (24);
    head->next = new LinkedNode (26);
    head->next->bottom = new LinkedNode (27);
    head->next->bottom->bottom = new LinkedNode (28);
    head->next->next = new LinkedNode (30);
    head->next->next->bottom = new LinkedNode (31);
    head->next->next->bottom->bottom = new LinkedNode (32);

    head = flatten (head);
    display (head);
    return 0;
}