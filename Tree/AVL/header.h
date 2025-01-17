#include <vector>
#include <map>
// CREATE HEADER CLASS 
// CREATE NODE OF THE Tree
class Node {
   public:
    int key;
    Node *left;
    Node *right;
    Node (int& val):key (val),left (nullptr),right (nullptr) {};
};

// CREATE TREE 
class Tree {
    Node *root;
    void distoryTree () {};
    public:
     Tree ();
     ~Tree ();
     void insertion (int);
     void leftRotation ();
     void rightRotation ();
     void display ();  
};