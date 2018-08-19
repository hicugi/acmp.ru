#include <iostream>
using namespace std;

int main() {
	
  int A, B, C, res;

  cin >> A >> B >> C;
  res = 2 * ( (A * B) + (B * C) + (A * C) );

  if( A >= 1 && B >= 1 && C >= 1 )
    cout << res << " " << A * B * C;
  else
    cout << 0;
}