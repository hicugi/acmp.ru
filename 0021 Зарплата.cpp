#include <iostream>
using namespace std;
 
int main(){
	int n[3], i, min, max;

	for( i=0; i < 3; i++ ) cin >> n[i];
	min = n[0]; max = n[0];
	for( i=0; i < 3; i++ ){
		if( min > n[i] ) min = n[i];
		if( max < n[i] ) max = n[i];
	}
	cout << (max-min);
	return 0;
}