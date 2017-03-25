#include <iostream>
using namespace std;

int main(){
	
	int k = 0 ,v[2] ,r = -1 ,rv = 0;
	cin >> k;
	
	for( int i=0; i < k; i++ ){
		
		cin >> v[0] >> v[1];
		if( v[1] == 0 ) continue;
		
		if( v[0] > rv ){
			
			r = i+1;
			rv = v[0];
		}
	}
	
	cout << r;
	
	return 0;
}
