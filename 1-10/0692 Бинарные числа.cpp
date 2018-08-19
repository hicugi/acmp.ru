#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int N,b=1, res=false;
	
	cin >> N;
	while( N >= b && N < 10000 ){
		if( N == b ){
			res = true;
			break;
		}
		b *= 2;
	}
	
	if( res ) cout << "YES";
	else cout << "NO";
	
	return 0;
}
