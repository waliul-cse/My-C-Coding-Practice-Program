#include <iostream>
 
 class Animal
 {
 public:
     Animal():itsAge(1) { std::cout << "Animal constructor...\n"; }
     virtual ~Animal() { std::cout << "Animal destructor...\n"; }
     virtual void Speak() const { std::cout << "Animal speak!\n"; }
 protected:
     int itsAge;
 };
 
 class Cat: public Animal
 {
 public:
     Cat() { std::cout << "Cat constructor...\n"; }
     ~Cat() { std::cout << "Cat destructor...\n"; }
     void Speak()const { std::cout << "Meow!\n"; }
 };
 
 int main()
 {
	 {
     Animal *pCat = new Cat;
     pCat->Speak();
	 }
	//delete pCat;
     return 0;
 }