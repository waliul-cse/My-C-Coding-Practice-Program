#include <iostream.h>
#include <conio.h>

class A
{
   int data;
public:
   void f(int arg)
   {
	data = arg;
   }
   int g()
   {
	return data;
   }
};

class B : public A
{
public:
   void show()
   {
	cout<<"this is derived class\n";
   }
};

int main()
{
   clrscr();
   B obj;
   obj.f(20);
   obj.show();
   cout << "\n"<<obj.g() << endl;
}