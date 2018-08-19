#include <iostream>
using namespace std;

int main(){

	int N ,n ,i ,rn = 30000 ,rx = 0;
	cin >> N;
	
	for( i=0; i < N; i++ ){
		
		cin >> n;
		if( n > rx ) rx = n;
		if( n < rn ) rn = n;
	}
	
	cout << rn << " " << rx;
	
	return 0;
}
