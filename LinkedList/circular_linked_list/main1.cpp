// SINLGY CICURLAR LINKED LIST 
#include <iostream>
#include <exception>
// CREATE A NAMESPACE NAMED LIST 
// IT HOLDS ALL THE TOOLS AND METHODS THAT HAVE RELATION WITH THE CIRCULAR LINKED LIST
namespace list {
    class Node { // FOR THE PARTICULAR NODE FOR THE LINKED LIST
        public:
         int key;
         Node *next;
         Node ():key (-1),next (nullptr) {};
         Node (int key):key (key),next (nullptr) {};
         Node (int key, Node *next):key (key),next(next) {};
    };
    class List { // FOR CREATION OF LINKED LIST
        private:
          Node *tail;
          Node *head;
          int size;
        public : // METHODS OF THE LINKED LIST
         List  ();
         ~List ();
         void push_front (int);
         void push_back (int);
         void insert (int,int);
         void pop_front ();
         void pop_back ();
         void remove (int);
         void clear ();
         bool empty ();
         inline int getSize ();
         void search (int);
         void display ();
         int front ();
         int back ();
         
    };
    // CONSTRUCTOR OF THE LINKED LIST 
    List::List ():tail (nullptr),head (nullptr),size (0) {};
    List::~List () {}; // DESTRUCTOR OF THE LINKED LIST 
    void List::push_front (int key) { // PUSH KEY ELEMENT AT THE FRONT OF THE NODE 
         Node *newNode = new Node (key);
         try {
           if (newNode) {
            size++; // INCREMENT THE TOTAL LENGTH OF THE LINKED LIST
             if (head == nullptr) { // WHEN THERE IS NOT NODE IN THE LINKED LIST
                head = tail = newNode;
                tail->next = head;
                return;
             }
             else { // WHEN AT LEAST ONE NODE IN THE LINKED LIST
                tail->next = newNode;
                newNode->next = head;
                head = newNode;
                return;
             }
           }
           else 
             throw newNode;
         }
         catch (Node ptrNode) {
            std::cerr << "\nDynamic allocation not occur !" << std::endl;
         }
    };
    void List::push_back (int key) { // INSERT NODE AT THE END OF THE CIRCULAR LINKED LIST 
      Node *newNode = new Node (key);
      try {
         if (newNode) {
          size++; // INCREMENT THE TOTAL LENGTH OF THE LINKED LIST
          if (head == nullptr) { // INSERT NODE WHEN IT'S NULLPTR
            head = tail = newNode;
            tail->next = head;
            return;
          }
          else {
            // INSERT NODE WHEN LINKED NOT NULL
            newNode->next = head; 
            tail->next = newNode;
            tail = newNode;
            return;
          }
         }
         else 
          throw newNode; // THROW EXCEPTION TO THE SOLVER
      }
      catch (Node ptrNode) {
        std::cerr << "\nDynamic allocation not happend";
      }
    };
    void List::insert (int key, int pos) { // INSERT NODE IN THE MIDDLE OF THE LINKED LIST
      if (pos > size || pos < 0)  // WHEN POSITION IS LESS THAN OR GREATER THAN WHOLE SIZE OF THE LINKED LIST
        return;
        Node *node = new Node (key); // DYNAMIC ALLOCATION OF THE NODE 
        try {
          if (node) {
            size++;
            Node *temp = head;
            if (pos == 1) {
              tail->next = node;
              node->next = head;
              head = node;
              return;
            }
            int i = 1;
            while (i < pos) {
              temp = temp->next;
              i++;
            }
            node->next = temp->next;
            temp->next = node;
            return;
          }
          else 
            throw node;
        }
        catch (Node ptrNode) { // EXCEPTION HANDLING 
          std::cerr << "\nNode is not allocated !" << std::endl;
        }
    }
    void List::pop_front () {
        size--;
        if (head == tail) {
          head = tail = nullptr;
          return;
        }
        Node *temp = head;
        tail->next = head->next;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        return;
    }
    void List::pop_back () {
      size--;
      if (head == tail) {
        head = tail = nullptr;
        return;
      }
      Node *temp = head;
      while (temp->next != tail) {
        temp = temp->next;
      }
      temp->next = head;
      Node *ptr = tail;
      delete tail;
      tail = temp;
      return;
    }
    
    // size of the nbjjnkjng,bdgggb bfgkdgggkgggk list
    inline int List::getSize () {
      return size;
    }
    void List::display () {// DISPLAY EACH ELEMENTS OF THE LINKED LIST 
      if (head == nullptr)
        return;
      Node *temp = head;
      while (temp->next != head) {
        std::cout << temp->key << std::endl;
        temp = temp->next;
      }
      std::cout << temp->key << std::endl;
      return;
    }
    // FOR CHECKING LINKED LIST IS EMPTY OR NOT EMPTY
    bool List::empty () {
      return head == nullptr ? true : false;
    }
    void List::search (int key) { // SEARCH VALUE IN THE LINKED LIST
      if (head == nullptr)
        return;
      Node *temp = head;
      while (temp->next != head) {
        if (temp->key == key) {
          std::cout << "Value is found in the linked list" << std::endl;
          return;
        }
        temp = temp->next;
      }
      if (temp->key == key)
       std::cout << "Value is found in the linked list" << std::endl;
      return;
    }
    void List::clear () { // CLEAR WHOLE LINKED LIST
      head = tail = nullptr;
      size = 0;
    }
    int List::front () { // FRONT OF THE LINKED LIST
      if (head == nullptr)
        return -1;
      return head->key;
    }
    inline int List::back () { // BACK OF THE LINKED LIST
      if (head == nullptr)
        return -1;
      return tail->key;
    }
   void List::remove (int val) {
       Node *ans = new Node (0,head);
       Node *dummy = ans;
       while (dummy->next != head) {
         while (dummy->next != head && dummy->next->key == val)
           dummy->next = dummy->next->next;
         dummy = dummy->next;
       }
      delete head;
      head = ans->next;
      delete dummy;
    }
};

// DEFINE USER DEFINE NAMESPACE 
using namespace list;

// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    // CREATE OBJECT O FTHE LIST NAMESPACE LIST CLASS
    List list;
   // list.push_front (20);
    list.push_front (32);
    list.push_front (321);
    list.push_front (300);
    list.push_back (32);
    list.push_back (33);
    list.push_back (120);
    list.push_back (20);
    list.push_front (20);
    list.push_back (20);
    list.insert (20,30);
    list.insert (120,1);
    list.insert (2003,2);
    list.search (2003);
   
    //list.clear ();
    //list.pop_front ();
   /*list.pop_front ();
    list.pop_back ();
    list.pop_back ();
    list.pop_back ();
   // list.pop_back ();
    list.pop_back ();
    list.pop_front ();
    list.pop_back ();
    list.pop_front (); */
     //list.remove (1);
    //list.remove (1);
    //list.remove (7);
    list.remove (20);
    list.display ();
    std::cout << "\nTotal size of the linked list : " << list.getSize () << std::endl;
    std::cout << "Linked list is empty or not empty : " << list.empty () << std::endl;
    std::cout << "First element of the list : " << list.front () << std::endl;
    std::cout << "Last element of the list : " << list.back () << std::endl;
    return 0;
}