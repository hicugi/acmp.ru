#include <iostream>
using namespace std;

int main() {
	
  int t[2];
  cin >> t[0] >> t[1];

  string type;
  cin >> type;

  int res = t[0];

  if(
    type == "auto" ||
    (
      ( type == "freeze" && t[0] > t[1] ) ||
      ( type == "heat" && t[1] > t[0] )
    )
  ) res = t[1];

  cout << res;
}