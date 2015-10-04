#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
   const int SIZE = 10;
   int a[ SIZE ] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
   vector< int > v( a, a + 17 );

   vector< int >::iterator location;
   location = find( v.begin(), v.end(), 16 );

   sort( v.begin(), v.end() );

   if ( binary_search( v.begin(), v.end(), 13 ) )
      cout << "\n\n13 was found in v";
   else
      cout << "\n\n13 was not found in v";

   return 0;
}
