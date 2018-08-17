#include <iostream>
using namespace std;

int main() {

  int v, max = 0, check = 1;
  
  for( int i=0; i < 3; i++ ){

    cin >> v;

    if( v < 94 || v > 727 )
      check = 0;

    if( v > max )
      max = v;
  }

  if( check )
    cout << max;
  else
    cout << "Error";
}