#include <bits/stdc++.h>

class Node {
    public:
    int key;
    Node *next;
    Node ():key (-1),next (nullptr) {};
    Node (int key):key (key),next (nullptr) {};
    Node (int key, Node *next):key (key),next (next) {};
};

void display (Node *head) {
    if (head == nullptr)
      return;
    Node *temp = head;
    while (temp != nullptr) {
        std::cout << temp->key <<  " ";
        temp = temp->next;
    }
   // return head;
}
int sizeOfList (Node *head) {
    if (head == nullptr) 
      return 0;
    int size = 0;
    Node *temp = head; // ASSIGN HEAD INTO A TEMPORARY POINTER
    while (temp != nullptr) { // TRAVERSE THE LIST UNTIL TEMP NOT BECOME NULL
        size++; // increment the size 
        temp = temp->next;
    }
    return size;
}
Node *getNode (Node *head,int k) {
    k--;
    Node *temp = head;
    while (temp != nullptr && k > 0) {
        temp = temp->next;
        k--;
    }
    return temp;
}
Node *rotateList (Node *head,int k) {
   if (head == nullptr || head->next == nullptr)
     return head;
   int size = sizeOfList (head);
   int p = 1;
   while (p <= k) {
    Node *preNode = getNode (head,size - 1);
    Node *nextNode = preNode->next;
       preNode->next = nextNode->next;
       preNode = nextNode;
       nextNode->next = head;
       head = nextNode;
    p++;
   }
   return head;
}
int main (void) {
    Node *head = new Node (20);
    head->next = new Node (120);
    head->next->next = new Node (200);
    head->next->next->next = new Node (220);
    head->next->next->next->next = new Node (300);

    display (head);
    int k = 3;
    //int size = sizeOfList (head);
    std::cout<<std::endl;
    head = rotateList (head,k);
    display (head);
    return 0;
}