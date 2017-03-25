#include <iostream>
using namespace std;

int main(){
	
	int n ,r=0;
	cin >> n;
	
	while( n / 2 > 0 ){
		
		if( n % 2 != 0 ) r++;
		n /= 2;
	}
	if( n == 1 ) r++;
	
	cout << r;
	
	return 0;
}
