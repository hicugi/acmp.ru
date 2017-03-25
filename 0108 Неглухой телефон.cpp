#include <iostream>
using namespace std;
 
int F( int x ){ return x; }
 
int main(){
	int x, i;

	cin >> x;
	for( i=0; i < x; i++ ) x = F(x);
	cout << x;

	return 0;
}