// REVERSE A SINGLY LINKED LIST IN THE KTH GROUP 
#include <iostream>

class Node {
    public:
    int key;
    Node *next;
    Node ():key (-1),next (nullptr) {};
    Node (int key):key (key),next (nullptr) {};
    Node (int key, Node *next):key (key),next (next) {};
};

Node *reverseList (Node *temp) {
    Node *ptr = nullptr;
    while (temp != nullptr) {
       Node * front = temp->next; // NEXT NODE OF THE LINKED LIST
        temp->next = ptr; // REVERSE THE CURRENT POINTER DIRECTION FROM FRONT TO PTR 
        ptr = temp; // PRT BECOME TEMP NODE
        temp = front; // INCREMENT 
    }
    return ptr;
}

// FIND OUT KTH NODE OF THE LINKED LIST
Node *get_kthNode (Node *head,int k) {
    k--;
    while (head != nullptr && k > 0) {
        head = head->next;
        k--;
    }

    return head;
}

Node *reverseKth (Node *head,int k) {
  Node *temp = head;
  Node *preList = nullptr;
  while (temp != nullptr) {
    Node *kthnode = get_kthNode (temp,k);
    if (kthnode == nullptr) {
        if (preList) {
            preList->next = temp;
        }
        break;
    }
    Node *nextnode = kthnode->next;
    kthnode->next = nullptr;
    reverseList (temp);
    if (temp == head) {
        head = kthnode;
    }
    else {
        preList->next = kthnode;
    }
    preList = temp;
    temp = nextnode;
  }
  return head;
}
int main (void) {
   Node *head = new Node (20);
   head->next = new Node (23);
   head->next->next = new Node (33);
   head->next->next->next = new Node (44);
   head->next->next->next->next = new Node (55);
  
   Node *temp = head;
   while (temp != nullptr) {
    std::cout << temp->key << " ";
   // std::cout << "Next : " << temp << std::endl;
    temp = temp->next;
   }
  /*
  head = reverseList (head);
  temp = head;
   while (temp != nullptr) {
    std::cout << temp->key << " ";
    //std::cout << "Next : " << temp << " ";
    temp = temp->next;
   }
   Node *kthnode = get_kthNode (head,2);
   std::cout << "K = 2 : " << kthnode->key << std::endl;

   */
   head = reverseKth (head,2);
   temp = head;
   std::cout<<std::endl;
   while (temp != nullptr) {
    std::cout << temp->key << " ";
    temp = temp->next;
   }
   return 0;
}