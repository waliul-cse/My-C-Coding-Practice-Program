#include <iostream>
 
 class Animal
 {
 public:
     Animal():itsAge(1) { std::cout << "Animal constructor...\n"; }
     virtual ~Animal() { std::cout << "Animal destructor...\n"; }
     Animal (const Animal & rhs);
     virtual void Speak() const { std::cout << "Animal speak!\n"; }
     virtual Animal* Clone() { return new Animal(*this); } 
     int GetAge()const { return itsAge; }
 
 protected:
     int itsAge;
 };
 
 Animal::Animal (const Animal & rhs):itsAge(rhs.GetAge())
 {
     std::cout << "Animal Copy Constructor...\n";
 }
 
 class Dog : public Animal
 {
 public:
     Dog() { 
        std::cout << "Dog constructor...\n"; 
     }
     virtual ~Dog() { 
        std::cout << "Dog destructor...\n"; 
     }
     Dog (const Dog & rhs);
     void Speak()const { 
        std::cout << "Woof!\n"; 
     }
     virtual Animal* Clone() { return new Dog(*this); }
 };
 
 Dog::Dog(const Dog & rhs): Animal(rhs)
 {
     std::cout << "Dog copy constructor...\n";
 }
 
 class Cat : public Animal {
 public:
     Cat() { 
        std::cout << "Cat constructor...\n"; 
     }
     virtual ~Cat() { 
        std::cout << "Cat destructor...\n"; 
     }
     Cat (const Cat &);
     void Speak()const { 
        std::cout << "Meow!\n"; 
     }
     virtual Animal* Clone() { 
        return new Cat(*this); 
     }
 };
 
 Cat::Cat(const Cat & rhs): Animal(rhs)
 {
     std::cout << "Cat copy constructor...\n";
 }
 
 int main()
 {
     Animal *theArray[3];
     Animal* ptr;
     int choice,i;

     theArray[0] = new Dog;
     theArray[1] = new Cat;
     theArray[2] = new Animal;
      
     
     Animal *OtherArray[3];
     for (i=0;i<3;i++)
     {
         theArray[i]->Speak();
         OtherArray[i] = theArray[i]->Clone();
     }
     for (i=0;i<3;i++)
         OtherArray[i]->Speak();
     return 0;
 }