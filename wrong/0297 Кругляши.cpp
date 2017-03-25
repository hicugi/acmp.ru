#include <iostream>
using namespace std;

int main(){
	
	int r;
	string n ,k = "0698";
	cin >> n;
	
	for( int i=0; i < n.length(); i++ ){
		
		int j=0;
		for( ; j < 3; j++ )
			if( n[i] == k[j] )
				r++;
		
		if( n[i] == k[j] )
			r += 2;
	}
	
	cout << r;
	
	return 0;
}
