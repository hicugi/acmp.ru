#include <iostream>
using namespace std;

int main() {

  int a[3], res = 0;
  
  for( int i=0; i < 3; i++ )
    cin >> a[i];

  if( a[0] + a[1] == a[2] || a[0] + a[2] == a[1] || a[1] + a[2] == a[0] )
    res = 1;

  if( res ) cout << "YES";
  else cout << "NO";
}