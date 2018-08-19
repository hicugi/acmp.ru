#include <iostream>
using namespace std;
 
int main() {

  int N, M, K, res = false;
  cin >> N >> M >> K;

  if( N * M >= K )
    res = true;

  if( res ) cout << "YES";
  else cout << "NO";

  return 0;
}