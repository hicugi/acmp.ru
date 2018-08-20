#include <iostream>
using namespace std;

int main() {
	
  int C, H, O;
  cin >> C >> H >> O;

  int res=0;

  while( 1 ){

    // C2 H2 ( O H )
    C -= 2;
    H -= 6;
    O--;

    if( C >= 0 && H >= 0 && O >= 0 ) res++;
    else break;
  }

  // wrong answer on 7
  cout << res;
}