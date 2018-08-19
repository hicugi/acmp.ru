#include <iostream>
using namespace std;

int main() {
	
  int N, res = -1;
  string M[4] = { "Winter", "Spring", "Summer", "Autumn" };

  cin >> N;

  if( N == 12 || N == 1 || N == 2 ) res = 0;
  if( N >= 3 && N <= 5 ) res = 1;
  if( N >= 6 && N <= 8 ) res = 2;
  if( N >= 9 && N <= 11 ) res = 3;

  if( res >= 0 ) cout << M[res];
  else cout << "Error";
}