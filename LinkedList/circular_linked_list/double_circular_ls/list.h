#include <iostream>
#include <unordered_set>
#include <exception>
#include <vector>
// CREATE A NODE FOR LINKED LIST
// USE TEMPLATE CLASS FOR CREATEING NODE
namespace standard {
    template <class T> 
    class LinkedNode {
    public:
     T key;
     LinkedNode *next;
     LinkedNode *prev;
     LinkedNode ():key (-1),next (nullptr),prev (nullptr) {};
     LinkedNode (T key):key (key),next (nullptr),prev (nullptr) {};
     LinkedNode (T key,LinkedNode <T> *next):key (key),next (next),prev (nullptr) {};
};

template <class T> class LinkedList {
    private:
     LinkedNode <T> *head;
     LinkedNode <T> *tail;
     int size;
    public:
     LinkedList ();
    ~LinkedList ();
     void push_back (T);
     void push_front (T);
     void insert (T,int);
     void pop_front ();
     void pop_back ();
     void remove (T);
     T front ();
     T back ();
     std::unordered_set <T> unique ();
     int get_size ();
     void display ();
     void sorted ();
     void reverse ();
    // void bubble_sort (std::vector <T>);
    void bubble_sort (std::vector <T>&);
};
// CLASS CONSTRUCTOR OF THE LINKED LIST 
 template <typename T>
 LinkedList <T>::LinkedList () {
    head = tail = nullptr;
    size = 0;
 };
 // METHOD THAT INSERT NODE AT THE FRONT OR BEGGIN OF THE LINKED LIST
 template <typename T> 
 void LinkedList <T>::push_front (T value) {
    LinkedNode<T> *newnode = new LinkedNode <T> (value);
    try {
        if (newnode) {
              size++;
              if (head == nullptr) { // INSERT DATA WHEN THERE IS NO ELEMENT IN THE LINKED LIST
                head = tail = newnode;
                tail->next = head;
                head->prev = tail;
                return;
              }
              else { // INSERT DATA WHEN ELEMENT IS ALREADY IN THE LINKED LIST
                newnode->next = head;
                head->prev = newnode;
                newnode->prev = tail;
                head = newnode;
                tail->next = head;
                return;
              }
        } 
        else 
          throw newnode; // THROW AN EXCEPTION 
    }
    catch (LinkedNode <T> *ptrNode) { // HANDLE THE EXCEPTION
      std::cout << "\nThere is no dynamic memory allocation !" << std::endl;
    }
 }
 // METHOD THAT PUSH NODE AT THE END OF THE LINKED AT THE TAIL POSITION
 template <typename T>
 void LinkedList <T>::push_back (T value) {
    LinkedNode <T> *node = new LinkedNode <T> (value);
    try {
      if (node) {
         size++;
        if (head == nullptr) { // INSERT DATA WHEN HEAD IS NULL
         head = tail = node;
         head->prev = tail;
         tail->next = head;
         return;
        }
        else { // INSERT NODE WHEN THERE IS AT LEAST ONE NODE IN THE LINKED LIST
         tail->next = node;
         node->prev = tail;
         tail = node;
         tail->next = head;
         return;
        }
      }
      else 
       throw node;
    }
    catch (LinkedNode <T> ptrNode) {
        std::cerr << "" << std::endl;
    }
    return;
 }
 template <typename T>
 std::unordered_set <T> LinkedList <T>::unique () {
   std::unordered_set <T> seen;
   LinkedNode <T> *temp = head;
   while (temp->next != head) {
     if (seen.find (temp->key) == seen.end())
       seen.insert (temp->key);
     temp = temp->next;
   }
   //std::cout << seen.size () << std::endl;
   return seen;
 }
 // METHOD THAT INSERT POSITION NODE BETWEEN IN THE LINKED LIST
 template <typename T>
 void LinkedList <T>:: insert (T value, int pos) { // MEHTOD THAT PUSH NODE AT THE SPECIFIC POSITION IN THE LINKED LIST
   if (pos < 0 || pos > size)
     return;
   LinkedNode <T> *node = new LinkedNode <T> (value);
   try {
    if (node) {
      if (pos == 1) { 
         node->next = head;
         head->prev = node;
         head = node;
         tail->next = head;
         return;
      }
         LinkedNode <T> *temp = head;
         LinkedNode <T> *pre = nullptr;
         int i = 1;
         while (i < pos) { // TRAVERSE UNTIL NOT REACH AT THE PRE RIGHT POSITION
            pre = temp;
            temp = temp->next;
            i++;
         } // INSERT NODE AT THE GIVE POSITION
         node->next = temp;
         temp->prev = node;
         pre->next = node;
         node->prev = pre;
         return;
    }
    else 
     throw node;
   }
   catch (LinkedNode <T> ptrNode) {
     std::cerr << "Dynamic memory allocation !" << std::endl;
   }
   return;
 }
 // POP GENERALLY DELETES THE NODE FROM THE LINKED LIST 
template <typename T> 
void LinkedList <T>::pop_front () {
   if (head == nullptr)
     return;
   size--;
   if (head == tail)  { // WHEN THERE IS ONLY ONE NODE IN THE LINKED LIST
     head = tail = nullptr;
     return;
   }
   // WHEN DELETE OTHER NODE FROM THE LINKED LIST
   LinkedNode <T> *temp = head;
   head = head->next;
   tail->next = head;
   head->prev = tail;
   delete temp;
}
template <typename T> 
void LinkedList <T>:: pop_back () {
  if (head == nullptr) 
    return;
  size--;
  if (head == tail) {
    head = tail = nullptr;
    return;
  }
  LinkedNode <T> *temp = head;
  while (temp->next != tail) {
    temp = temp->next;
  }
  temp->next = tail->next;
  if (tail != nullptr)
    tail->prev = temp;
  LinkedNode <T> *dump = tail;
  delete dump;
  tail = temp;
  tail->next = head;
  return;
}

/*
template <typename T> 
void LinkedList <T>::remove (T val) {
  LinkedNode <T> *ans = new LinkedNode <T> (0,head);
  LinkedNode <T> *ptr = 
  LinkedNode <T> *temp = head;
  while (temp->next != head) {
    while (temp->next != head && temp->key == val) 
      temp = temp->next;
    ptr->next = temp;
    temp = temp->next;
  }
}
*/
template <typename T>
void LinkedList <T>::sorted () {
  if (head == nullptr) return;
  std::vector <T> ary;
  LinkedNode <T> *temp = head;
  while (temp->next != head) {
     ary.push_back (temp->key);
     temp = temp->next;
  }
  ary.push_back (temp->key);
 // sort (ary.end(),ary.begin());
  bubble_sort (ary);
  temp = head;
  while (temp->next != head) {
    temp->key = ary.back();
    ary.pop_back ();
    temp = temp->next;
  }
}
template <typename T>
void LinkedList <T>::bubble_sort (std::vector <T> &ary) {
   for (int i =0; i < ary.size (); i++) {
     for (int j = 0; j < ary.size () - i - 1; j++) {
      if (ary [j] < ary [j + 1]) {
        std::swap (ary[j],ary[j + 1]);
      }
     }
   }
}
 // DISPLAY EACH ELEMENTS OF THE LINKED LIST
 template <typename T>
 void LinkedList <T>::display () {
    if (head == nullptr) 
      return;
    LinkedNode <T> *temp = head; 
    while (temp->next != head) { // TRAVERSE UNITL NOT GET NULL
        std::cout << temp->key << " " << std::endl;
        temp = temp->next;
    }
    std::cout << temp->key << " " << std::endl;
    return;
 }
 // GET FRONT NODE OF THE LINKED LIST
template <typename T>
T LinkedList<T>::front () { // RETURN VALUE OF THE HEAD
  if (head != nullptr)
    return head->key;
  return -1;
}
 // GET BACK NODE OF THE LINKED LIST
 template <typename T>
 T LinkedList <T>::back () { // RETURN VALUE OF THE TAIL
    if (head != nullptr)
      return tail->key;
    return -1;
 }
 template <typename T>
 void LinkedList <T>::reverse () {
     if (head == nullptr) return;
     std::vector <T> ary;
     LinkedNode <T> *temp = head;
    // int counting = 1;
     while (temp->next != head) {
    //  std::cout << counting++ << std::endl;
      ary.push_back (temp->key); // STORE  DATA IN THE VECTOR 
      temp = temp->next;
     }
     ary.push_back (temp->key);
     temp = head; // RE-ASSIGN HEAD INTO TEMP 
     size_t length = ary.size ();
     std::cout << ary.size () << std::endl;
    // std::cout << length << std::endl; // FOR FLAG CHECKING LENGTH OF THE VECTOR ARRAY
     for (int i = length - 1; i >= 0; i--) {
       temp->key = ary [i];
       temp = temp->next;
     }
     return;
 }
 // METHOD THAT RETURN THE SIZE OF THE LINKED LIST
 template <typename T> // RETURN SIZE OF THE LINKED LIST
 int LinkedList <T>::get_size () {
   return size;
 }
 template <typename T>
 LinkedList <T>::~LinkedList () {
    std::cout << "\nProgram is ended now !" << std::endl;
 };
}