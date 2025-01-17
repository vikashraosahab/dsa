#include <iostream>
#include <stdio.h>
#include <exception>

namespace standard {
class Node {
    public: 
     int key;
     Node *next;
     Node *pre;
     Node (int val):key (val),next (nullptr),pre (nullptr) {};
};

class DoubleLinkedList {
    private:
     Node *head;
     Node *tail;
     int size;
    public:
      DoubleLinkedList (); // CONSTRUCTOR OF THE LINKED LIST
      ~DoubleLinkedList (); // DESTRUCTOR OF THE LINKED LIST
      void push_front (int); // INSERT NEW ELEMENT AT THE FRONT OF THE LINKED LIST 
      void push_end (int); // INSERT NEW ELEMENT AT THE END OF THE LINKED LIST 
      void push_middle (int,int); // INSERT NEW ELEMENT AT THE MIDDLE OF THE LINKED LIST 
      void pop_front (); // DELETE ELEMENT FROM THE FRONT THE LINKED LIST
      void pop_end (); // DELETE ELEMENT FROM THE END OF THE LINKED LIST
      void pop_middle (); // DELETE ELEMENT FROM THE MIDDLE OF THE LINKED LIST
      void display (); // DISPLAY ELEMENT OF THE LINKED LIST
      void reverse (); // REVERSE ELEMENT OF THE LINKED LIST
      bool empty (); // CHECK FUNCTION THAT EMPTY 
      int get_size (); // GET SIZE OF THE LINKED LIST
      void search (int); // SEARCH A PARTICULAR ELEMENT FROM THE LINKED LIST
};
// CLASS MEMBER DEFINITIONS 
DoubleLinkedList::DoubleLinkedList ():head (nullptr),tail (nullptr),size (0) {}; // DEFINITION OF THE CONSTRUCTOR 
DoubleLinkedList::~DoubleLinkedList () {
    std::cout << "\nEnd of the program !" << std::endl;
} 
void DoubleLinkedList::push_front (int key) { // INSERT NEW ELEMENT AT THE FRONT THE LINKED LIST
   Node *newNode = new Node (key);
   try {
     if (newNode) {
        size++;
        if (head == nullptr || tail == nullptr) {
            head = tail = newNode; // WHEN LINKED LIST IS NULL 
        }
        else { // WHEN LINKED LIST IS ALREADY HAVE A ELEMENT IN THE LINKED LIST
            newNode->next = head;
            head->pre = newNode;
            head = newNode;
        }
     }
     else 
       throw newNode; // THROW EXCEPTION 
   }
   catch (Node ptrNode) {
    std::cout << "\nDynamic memory not allocated !" << std::endl;
   }
}
void DoubleLinkedList::push_end (int key) {
    Node *newNode = new Node (key);
    try {
      if (newNode) {
           size++;
           if (head == nullptr || tail == nullptr)  // INSERT NEW ELEMENT AT THE END OF THE LINKED LIST
             head = tail = newNode;
           else { // OTHERWISE INSERT AT THE END OF THE LINKED LIST
              newNode->pre = tail;
              tail->next = newNode;
              tail = newNode;
           }
      }
      else 
       throw newNode; // THROW EXCEPTION
    }
    catch (Node ptrNode) {
        std::cout << "\nDynamic memory not allocated !" << std::endl;
    }
}
void DoubleLinkedList::push_middle (int key, int pos) {
    Node *newNode = new Node (key);
    try {
      if (newNode) {
         if (pos < 0) { // WHEN POS IS LESS THEN 0
           return;
        }
        else if (pos > size) // WHEN POS IS GREATER THAN SIZE
           return;
        else { // INSERT IN THE MIDDLE POSITION OF THE LINKED LIST WHEN FOUND VALID POSITION
          size++;
          Node *current = head;
          while (pos >=1) {
            current = current->next;
            pos--;
          }
          newNode->next = current->next;
          current->next = newNode;
          current = newNode;
        }
      }
      else 
        throw newNode; // THROW EXCEPTION
    }
    catch (Node ptrNode) {
        std::cout << "\nDynamic memory allocation !";
    }
}
void DoubleLinkedList::pop_front () {
    if (head == nullptr || tail == nullptr)
      return;
    if (head == tail && head != nullptr)
        head = tail = nullptr;
    else {
        Node *temp = head;
        head = head->next;
        head->pre = nullptr;
        temp->next = nullptr;
        delete temp; // DELETE THE NODE FROM THE LINKED LIST
    }
    size--;
}
void DoubleLinkedList::pop_end () {
    if (head == nullptr || tail == nullptr)
      return;
    if (head == tail && tail != nullptr)
      head = tail = nullptr;
    else {
        Node *ptr = tail;
        tail = tail->pre;
        tail->next = nullptr;
        ptr->pre = nullptr;
        delete ptr;
    }
    size--;
}
void DoubleLinkedList::display () {
    Node *temp = head;
    while (temp != tail) {
        std::cout << temp->key << std::endl;
        temp = temp->next;
    } 
    std::cout << temp->key << std::endl;
}
int DoubleLinkedList::get_size () {
    return size;
}
bool DoubleLinkedList::empty () {
    return head == nullptr || tail == nullptr ? true : false;
}
void DoubleLinkedList::search (int key) {
   Node *temp = head;
   if (!temp)
     return;
   int count = 0;
   while (temp) {
    count++;
    if (temp->key == key) {
      std::cout << "Node num : " << count << " ";
      return;
    }
   }

   return;
 }
};
// MAIN FUNCTION OF THE PROGRAM 
int main (int argc, char * argv[]) {
     // CREATE OBJECT OF THE CLASS
     standard::DoubleLinkedList doubleLinkedList;
    // std::cout << doubleLinkedList.empty () << std::endl;
     // PUSH ELEMENT AT THE FRONT 
     doubleLinkedList.push_front (20);
     doubleLinkedList.push_front (32);
     doubleLinkedList.push_end (332);
     doubleLinkedList.push_end (31);
     doubleLinkedList.push_middle (3103,1);
     doubleLinkedList.search (30);
     doubleLinkedList.display ();
    std::cout <<  doubleLinkedList.get_size () << std::endl;
    std::cout <<  doubleLinkedList.empty () << std::endl;

    return 0;
}
