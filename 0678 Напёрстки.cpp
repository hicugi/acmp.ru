#include <iostream>
using namespace std;

int main(){
	
	int p[3] = {1,0,0} ,n;
	string k
		,  c = "ABC";
	cin >> k;
	
	for( int i=0; i < k.length(); i++ ){
		
		if( k[i] == c[0] ){
			n = p[0];
			p[0] = p[1];
			p[1] = n;
			continue;
		}
		
		if( k[i] == c[1] ){
			n = p[1];
			p[1] = p[2];
			p[2] = n;
			continue;
		}
		
		if( k[i] == c[2] ){
			n = p[0];
			p[0] = p[2];
			p[2] = n;
			continue;
		}
	}

	for( int i=0; i < 3; i++ )
		if( p[i] )
			cout << i+1;

	return 0;
}
