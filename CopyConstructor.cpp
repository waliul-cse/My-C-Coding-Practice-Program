#include <iostream>
#include<conio.h>
 
 class MyClass
 {
 public:
     MyClass();                          // default constructor
     MyClass (const MyClass &);          // copy constructor
     ~MyClass();                         // destructor
     int GetAge() const { return *itsAge; }
     int GetWeight() const { return *itsWeight; }
     void SetAge(int age) { *itsAge = age; }
 
 private:
     int *itsAge;
     int *itsWeight;
 };
 
 MyClass::MyClass()
 {
     itsAge = new int;
     itsWeight = new int;
     *itsAge = 5;
     *itsWeight = 9;
 }
 
 MyClass::MyClass(const MyClass & rhs)
 {
     itsAge = new int;
     itsWeight = new int;
     *itsAge = rhs.GetAge();
     *itsWeight = rhs.GetWeight();
 }
 
 MyClass::~MyClass()
 {
     delete itsAge;
     itsAge = 0;
     delete itsWeight;
     itsWeight = 0;
 }
 
 int main()
 {
     MyClass myObject;
     std::cout << "myObject's age: " << myObject.GetAge() << "\n";
     std::cout << "Setting myObject to 6...\n";
     myObject.SetAge(6);
     std::cout << "Creating secondObject from myObject\n";
     MyClass secondObject(myObject);
     std::cout << "myObject's age: " << myObject.GetAge() << "\n";
     std::cout << "secondObject' age: " << secondObject.GetAge() << "\n";
     std::cout << "setting myObject to 7...\n";
     myObject.SetAge(7);
     std::cout << "myObject's age: " << myObject.GetAge() << "\n";
     std::cout << "boot's age: " << secondObject.GetAge() << "\n";

	 getch();
     return 0;
 }