#include <iostream>
using namespace std;

int main(){
	int n, r = 1;
	cin >> n;
	
	if( n > 10000 ) return false;
	
	for( int i=1; i != n; ){
		if( i > n ) i--;
		else i++;
		r += i;
	}
	
	cout << r;
	
	return 0;
}
