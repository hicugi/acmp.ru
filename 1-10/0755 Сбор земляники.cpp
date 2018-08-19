#include <iostream>
using namespace std;

int main() {

  int X, Y, Z, res;
  cin >> X >> Y >> Z;

  res = X + Y - Z;
  
  if( res >= 0 )
    cout << res;
  else
    cout << "Impossible";
}