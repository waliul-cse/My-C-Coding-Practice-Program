#include <iostream.h>

class ThreeD
{
  int x, y, z;
public:
  ThreeD() { x = y = z = 0; }
  ThreeD(int i, int j, int k)
  {
	x = i;
	y = j;
	z = k;
  }
  ThreeD operator-(ThreeD op2); // op1 is implied
  void show() ;
};
// Overload subtraction.
ThreeD ThreeD::operator-(ThreeD op2)
{
  ThreeD temp;

  temp.x = x - op2.x;
  temp.y = y - op2.y;
  temp.z = z - op2.z;
  return temp;
}

// Show X, Y, Z coordinates.
void ThreeD::show() 
{ 
  cout << x << ", ";
  cout << y << ", "; 
  cout << z << "\n"; 
} 
 
int main() 
{ 
  ThreeD a(1, 2, 3), b(10, 10, 10), c;

  cout << "Original value of a: ";
  a.show(); 
  cout << "Original value of b: ";
  b.show(); 
 
  c = a - c;
  cout << "a - c: ";
  c.show();
  cout << "\n";
  return 0;
}