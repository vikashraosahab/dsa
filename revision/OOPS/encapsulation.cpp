// CREATE A CLASS THAT FOLLOW ALL ENCAPSULATION TECHINQUES 
// ENCAPSULATION IS TECHNIQUE WHERE METHODS AND DATA MEMBER ARE WRAPPED TO-GETHER SO OTHER PART OF THE CODE CAN ACCESS THESE METHODS EXCEPT THOSE CLASSES
// IT'S LIKE PROVIDE SOME PROTECTION LIKE PUBLIC, PRIVATE AND PROTECTED 
// PUBLIC IS ACCESSIBLE BY OUTER METHODS OF THE THAT CLASS BUT PRIVATE AND PROTECT ARE NOT ACCESSIBLE 
#include <bits/stdc++.h> // ACCESS ALL THE C++ FILES 
// SETUP OF THE NAMESPACES METHODS 
using std::cout;
using std::cin;
using std::string;
using std::endl;

// CLASS CREATION 
class Person {
  public: 
   Person (string& name,int& age) {
     // 
       this->name = name;
       this->age = age;
   }
   void details () {
        cout << "Person name is : " << name << endl;
        cout << "Person age is : " << age << endl;
   }
  private:
   /* DATA MEMBER ARE ALWAYS DECLARED IN PRIVATE SECTION FOR PROTECTION */
   string name;
   int age;
};
// MAIN FUNCTION OF PROGRAM
int main (void) {
  // CREATE INSTANCES OF THE CLASS 
  string name = "Vikash";
  int age = 20;
  Person obj (name,age);
  obj.details ();

  Person *ptr = new Person (name, age);
   ptr->details ();
  //delete[] ptr;
  delete ptr;
  return 0;
}
