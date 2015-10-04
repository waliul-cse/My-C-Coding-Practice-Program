#include <iostream> 
using namespace std; 
 
// This is a function template. 
template <class X, class Y> void swapargs(X &a, Y &b) 
{ 
  X temp; 
 
  temp = a; 
  a = b; 
  b = temp; 
} 
 
int main() 
{ 
  int i=1, j=2; 
  float x=1.1, y=2.3; 
  char a='x', b='z'; 
 
  cout << "Original i, j: " << i << ' ' << j << '\n'; 
  swapargs(i, j); // swap integers 
  cout << "Swapped i, j: " << i << ' ' << j << '\n'; 
  
  
  cout << "Original x, y: " << x << ' ' << y << '\n'; 
  swapargs(x, y); // swap floats 
  cout << "Swapped x, y: " << x << ' ' << y << '\n'; 
  
  cout << "Original a, b: " << a << ' ' << b << '\n'; 
  swapargs(a, b); // swap chars 
  cout << "Swapped a, b: " << a << ' ' << b << '\n'; 
 
  return 0; 
}