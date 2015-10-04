#include <iostream>
#include <iomanip>
using namespace std;
class MyClass 
{
 public:
   MyClass(int a = 1, int b = 2, int c = 3){
        MyClass::a = a; 
        MyClass::b = b;
        MyClass::c = c;
   };
   void show_numbers(void){ 
       cout << a << ' ' << b << ' '<< c << '\n'; 
   };
 private:
   int a, b, c;
};

int main(void){
   MyClass one(1, 1, 1);
   MyClass defaults;
   MyClass happy(101, 101, 101);

   one.show_numbers();
   defaults.show_numbers();
   happy.show_numbers();
}