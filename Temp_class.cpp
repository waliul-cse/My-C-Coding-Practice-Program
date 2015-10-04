#include <iostream.h>

template <class T, class Q>
class MyClass {
    T value1;
	Q value2;
  public:
    MyClass (T first, Q second)
	{
        value1=first; 
        value2=second;
    }
    Q getmax ()
    {
      Q retval;
      retval = value1<value2 ? value1 : value2;
      return retval;
    }
    
};

int main () {
  MyClass <int,float> myobject (100, 75.9);
  
  cout << myobject.getmax();
  
  return 0;
}