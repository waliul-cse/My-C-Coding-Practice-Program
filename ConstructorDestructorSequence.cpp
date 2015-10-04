#include <string>
#include <iostream>
#include<conio.h>

using std::string;
using std::cout;
using std::endl;

class MyClass 
{
public:
   MyClass( int, string ); 
   ~MyClass();             
private:
   int objectID;
   string message; 
};

MyClass::MyClass( int ID, string s )
{
   objectID = ID;
   message = s; 

   cout << "Object " << objectID << " constructor runs " << message << endl;
}
MyClass::~MyClass()
{ 
   cout << "Object " << objectID << " destructor runs " << message << endl; 
}

void create( void );

MyClass first( 1, "(global before main)" );

int main()
{
   MyClass second( 2, "(local automatic in main)" );
   MyClass third( 3, "(local static in main)" );
   
   create(); 
   MyClass fourth( 4, "(local automatic in main)" );
   return 0;
}
void create( void )
{
   cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
   MyClass fifth( 5, "(local automatic in create)" );
   MyClass sixth( 6, "(local static in create)" );
   cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;
}