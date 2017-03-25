#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int N;
	
	cin >> N;
	
	if( N == 0 or N == 1 ) cout << 0;
	else if( N % 2 == 0 ) cout << N / 2;
		else cout << N;
	
	return 0;
}
