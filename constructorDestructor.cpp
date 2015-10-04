#include <iostream>
using namespace std;
class base {
protected:
  int i;
public:
	base()
	{i=0;}
  base(int x)  { 
     i=x; 
     cout << "Constructing base\n";   }
  ~base()   { cout << "Destructing base\n";   }
};
class derived: public base{
  int j;
public: 
	derived(int y, int x)/*:base(y)*/  { 
     j=x; 
     cout << "Constructing derived\n";   }
  ~derived()   {   cout << "Destructing derived\n";   }
  void show()  {   cout << i << " " << j << "\n";   }
};
int main()
{
  derived ob(3, 4);
  ob.show();
  return 0;
}