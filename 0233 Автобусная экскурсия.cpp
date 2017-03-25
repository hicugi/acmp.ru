#include <iostream>
using namespace std;

int main(){

	int N;
	cin >> N;
	
	int a[N] ,i;
	for( i=0; i < N; i++ ){
		
		cin >> a[i];
		
		if( a[i] <= 437 ){
			
			cout << "Crash " << i+1;
			return 0;
		}
	}
	
	cout << "No crash";
	
	return 0;
}
