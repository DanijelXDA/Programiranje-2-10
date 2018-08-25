#include <iostream>
#include <string>

using namespace std;

int n, m;
string rec[100];
int pojavila[100];

int main( void ) {
   cin >> n;
   for( int i = 0; i < n; ++i ) {
      cin >> rec[i];
      pojavila[i] = 0;
   }

   cin >> m;
   int koliko = 0;
   for( int i = 1; i <= m; ++i ) {
      string s;
      cin >> s;

      for( int j = 0; j < n; ++j ) {
         if( s == rec[j] && pojavila[j] == 0 ) {
            pojavila[j] = 1;
            ++koliko;
         }
      }

      if( koliko*2 >= n ) {
         printf( "%d\n", i );
         break;
      }
   }

   return 0;
}
