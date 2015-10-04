#include <iostream> 
using namespace std; 

class BaseClass { 
public: 
  virtual void who() { // specify a virtual function 
    cout << "Base\n"; 
  } 
}; 
 
class DerivedClass1 : public BaseClass { 
public: 
  //void who() { // redefine who() for DerivedClass1  
  //  cout << "First derivation\n"; 
  //} 
}; 
 
class DerivedClass2 : public BaseClass { 
public: 
  void who() { // redefine who() for DerivedClass2 
    cout << "Second derivation\n"; 
  } 
}; 
 
int main() 
{ 
  BaseClass base_obj; 
  BaseClass *p; 
  DerivedClass1 DerivedClass1_obj; 
  DerivedClass2 DerivedClass2_obj; 
 
  p = &base_obj; 
  p->who();  // access BaseClass's who 
 
  p = &DerivedClass1_obj; 
  p->who(); // access DerivedClass1's who 

  //DerivedClass1_obj.who();
 
  p = &DerivedClass2_obj; 
  p->who();  // access DerivedClass2's who 
   
  return 0; 
}