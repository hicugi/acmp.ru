#include <iostream>
using namespace std;

int main() {

  int W, H, R, D, res;
  cin >> W >> H >> R;
  D = R * 2;

  if( W >= D && H >= D )
    cout << "YES";
  else
    cout << "NO";
}