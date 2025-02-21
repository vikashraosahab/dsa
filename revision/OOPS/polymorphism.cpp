// CREATE FUNCTION THAT FOLLOW POLYMORPHISM TECHNIQUE 
// POLYMORPHISM MEANS MANY FORMS 
// OPERATOR OVERLOADING 
// SAME OPERATOR CAN PERFORMS MANY TASKS LIKE + ADDIONT, CONCATNATION OF TWO STRING
// FUNCTION OVERLOADING  
// SAME NAMED FUNCTION BUT DIFFERENT NUMBER OF HAVING ARGMENTS OR DIFFERENT TYPES OF ARGUEMNTS 
#include <bits/stdc++.h> 

// SET UP OF THE NAME SPACES
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
//using std::[];

// TEMPLATE 
class polyMorphism {
  string name;
  int age;
  public:
   polyMorphism (int age):age (age) {};
   void searchPerson (string name,int age) {};
   bool searchPerson (int age) {return true};
   // OPERATOR OVERLOADING 
   // LAMBDA FUNCTIONS 
   int totalAge [this->age](int a){ 
     return age + a;
   };
};

int main (void) {
  polyMorphism obj (20);

  return 0;
}
