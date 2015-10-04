#include <iostream>
using namespace std;
enum COLOR { Red, Green, Blue, Yellow, White, 
             Black, Brown };
class Animal        
{
  public:
    Animal(int);
    virtual ~Animal() { cout << "Animal destructor...\n"; }
    virtual int GetAge() const { return itsAge; }
    virtual void SetAge(int age) { itsAge = age; }
    virtual void Sleep() const = 0;
    virtual void Eat() const = 0;
    virtual void Reproduce() const = 0;
    virtual void Move() const = 0;
    virtual void Speak() const = 0;
  private:
    int itsAge;
};
Animal::Animal(int age):itsAge(age)
{    cout << "Animal constructor..." << endl; }
class Mammal : public Animal
{
  public:
    Mammal(int age):Animal(age){ 
		cout << "Mammal constructor..." << endl;}
    virtual ~Mammal() { 
		cout << "Mammal destructor..." << endl;}
    virtual void Reproduce() const{ 
		cout << "Mammal reproduction depicted..."<<endl; }
};

class Fish : public Animal{
  public:
    Fish(int age):Animal(age){
		cout << "Fish constructor..." << endl;}
    virtual ~Fish() {
		cout << "Fish destructor..." << endl;  }
    virtual void Sleep() const { 
		cout << "fish snoring..." << endl; }
    virtual void Eat() const {
		cout << "fish feeding..." << endl; }
    virtual void Reproduce() const{ 
		cout << "fish laying eggs..." << endl; }
    virtual void Move() const{ 
		cout << "fish swimming..." << endl;   }
    virtual void Speak() const { }
};

class Horse : public Mammal
{
  public:
    Horse(int age, COLOR color ):
    Mammal(age), itsColor(color){ 
		cout << "Horse constructor..." << endl; }
    virtual ~Horse() { 
		cout << "Horse destructor..." << endl; }
    virtual void Speak()const { 
		cout << "Whinny!... " << endl; }
    virtual COLOR GetItsColor()
		const { return itsColor; }
    virtual void Sleep() 
		const{ cout << "Horse snoring..." << endl; }
    virtual void Eat() 
		const { cout << "Horse feeding..." << endl; }
    virtual void Move() 
		const { cout << "Horse running..." << endl;}

  protected:
    COLOR itsColor;
};

class Dog : public Mammal
{
  public:
    Dog(int age, COLOR color ):
    Mammal(age), itsColor(color){ cout << "Dog constructor..." << endl; }
    virtual ~Dog() { 
		cout << "Dog destructor..." << endl; }
    virtual void Speak()const { 
		cout << "Whoof!... " << endl; }
    virtual void Sleep() const { 
		cout << "Dog snoring..." << endl; }
    virtual void Eat() const { 
		cout << "Dog eating..." << endl; }
    virtual void Move() const  { 
		cout << "Dog running..." << endl; }
    virtual void Reproduce() const{ 
		cout << "Dogs reproducing..." << endl; }

  protected:
    COLOR itsColor;
};

int main()
{
   Animal *pAnimal = 0;
   pAnimal = new Dog(5,Brown);
   pAnimal->Speak();
   pAnimal->Eat();
   pAnimal->Reproduce();
   pAnimal->Move();
   pAnimal->Sleep();
   delete pAnimal;
   
   pAnimal = new Horse(4,Black);
   pAnimal->Speak();
   pAnimal->Eat();
   pAnimal->Reproduce();
   pAnimal->Move();
   pAnimal->Sleep();
   delete pAnimal;
   
   pAnimal = new Fish (5);
   pAnimal->Speak();
   pAnimal->Eat();
   pAnimal->Reproduce();
   pAnimal->Move();
   pAnimal->Sleep();
   delete pAnimal;
    return 0;
 }