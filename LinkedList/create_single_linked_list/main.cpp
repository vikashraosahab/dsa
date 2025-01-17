#include <iostream>
#include <stdio.h>
#include <map>
#include <exception>

// CREATE NODE OF THE LINKED LIST
// SINGLY LINKED LIST
namespace standard {
class Node {
    public:
     int data;
     Node *next;
     //Node ():data (-1),size (0),next (nullptr) {};
     Node (int& x): data (x),next (nullptr){};
     Node (int x, Node *next) : data (x),next (next) {};
};

// CREATE LIST 
class List {
    Node *head; // FIRST HEAD NODE OF THE LIST
    Node *tail; // LAST NODE OF THE LIST
    int size;
    public: // PUBLIC METHODS 
     List ();
     ~List ();
     void push_front (int);
     void push_back (int);
     void pop_front ();
     void pop_back ();
     void insert (int,int);
     void search (int);
     void clear ();
     void display ();
     int get_size ();
     std::map <int,int> hash_map ();
};
List::List ():head (nullptr),tail (nullptr),size (0) {}; // CONSTRUCTOR OF THE CLASS 
List::~List () {
  std::cout << "\nObject is destoryed now !\n";
}
int List::get_size () {
    return size;
}
void List::push_back (int val) { // METHOD THAT INSERT ELEMENT AT THE END OF THE LINKED LIST OR AFTER THE TAIL POSITION
  Node *newNode = new Node (val); 
  try {
     if (newNode) {
        size++;
       if (head == nullptr || tail == nullptr) {
         head = tail = newNode;
       }
       else {
         newNode->next = tail->next;
         tail->next = newNode;
         tail = newNode;
       }
     }
     else 
      throw newNode;
  }
  catch (Node ptrNode) {
    std::cerr << "Something occupied error !";
  }
}
void List::push_front (int val) {
  Node *newNode = new Node (val);
  try {
    if (newNode) {
        size++;
      if (head == nullptr) {
         head = tail = newNode;
         return;
      }
      else {
        newNode->next = head;
        head = newNode;
        return;
      }
    }
    else 
      throw newNode;
  }
  catch (Node ptrNode) {
    std::cerr << "\nSomething occupied error !";
  }
}
void List::pop_back () {
  Node *temp = tail;
  if (tail == nullptr) {
    std::cout << "\nLinked list is already empty !";
    return;
  }
  else if (head == tail) {
     size--;
     head = tail = nullptr;
     return;
  }
  else {
    Node *temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    size--;
    Node *t = tail;
    temp->next = nullptr;
    tail = temp;
    delete t;
    return;
  }
}
void List::pop_front () {
   if (head == nullptr) 
     return;
   else if (head == tail) {
     size--;
     head = tail = nullptr;
   }
   else  {
     Node *temp = head;
     size--;
     head = head->next;
     temp->next = nullptr;
     delete temp;
     return;
   }
}
void List::insert (int val,int pos) {
  if (pos < 0) {
    std::cout << "\nPosition is in-valid.";
    return;
  }
  else if (pos > size) {
    std::cout << "\nPosition is in-valid.";
    return;
  }
  else {
    Node *newNode = new Node (val);
    try {
      if (newNode) {
        Node *temp = head;
        size++; // UPDATE THE CURRENT SIZE OF THE LINKED LIST
        int i = 1;
        while (i < pos) {
          temp = temp->next;
          i++;
        }
        newNode->next = temp->next; // Insert in the middle of the list
        temp->next = newNode;
      }
      else 
       throw newNode;
    }
    catch (Node ptrNode) {
      std::cerr << "\nDynamic memory not allocate !";
      return;
    }
  }
};
void List::clear () { // METHOD THAT CLEAR WHOLE LINKED LIST
   if (head == nullptr || tail == nullptr)
      return;
   else {
     head = tail = nullptr;
     return;
   }
};
std::map <int,int> List::hash_map () { // create linked list in hash map with their frequency
  std::map <int,int> mapping;
  Node *temp = head;
  while (temp != nullptr) {
     mapping[temp->data]++;
     temp = temp->next;
  } 
  return mapping;
};
void List::display () { // PRINT WHOLE LINKED LIST ELEMENTS 
    if (head == nullptr || tail == nullptr) {
        std::cout << "\nLinked list is empty !";
        return;
    }
    else {
        Node *temp = head;
        std::cout << "\nElements are : \n";
       // std::cout << head << std::endl;
        while (temp != nullptr) {
            std::cout << temp->data << std::endl;
            temp = temp->next;
        }
    }
}
void List::search (int key) {
   Node *temp = head;
   int nodeNum = 0;
   while (temp) {
    nodeNum++;
    if (temp->data == key) {
      std::cout << "Node is : " << nodeNum;
      return;
    }
    temp = temp->next;
   } 
  return;
}
};
// MAIN FUNCTION OF THE PROGRAM 
//using namespace myList;
int main (void) {
    standard::List list; // INSTANCIATE CLASS 
    list.push_back (50);
    list.push_back (30);
    //list.display ();
    list.push_front (10);
    list.push_front (20);
    std::cout << list.get_size ();
    list.display ();
    list.pop_back ();
    list.pop_front ();
    list.pop_front ();
    list.pop_front ();
    list.display();
    list.push_back (30);
    list.push_front (31);
    list.insert (23,1);
    list.display ();
    list.search (30);
    std::cout << list.get_size ();

    std::cout << "\nFrequency values : \n";
    std::map <int,int> hash = list.hash_map ();
    for (auto val : hash) {
      std::cout << "First value : " << val.first << " || "<< "Frequency : " << val.second << std::endl;
    }
    return 0;
}