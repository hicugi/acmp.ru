#include <iostream>
#include <math.h>
using namespace std;

int getV( int n ){
	
	int r = 0 ,np = 0 ,nq;
	
	for( int i=0; i < 3; i++ ){
		
		nq = pow( 10 ,i+1 );
		r += ( (n - np) % nq ) / (nq / 10);
		np = r;
	}
	
	return r;
}

int main(){
	
	int k;
	cin >> k;
	
	int n ,n1 ,n2 ,r[k];
	for( int i=0; i < k; i++ ){
		
		cin >> n;
		
		n2 = n % 1000;
		n1 = getV( (n-n2) / 1000 );
		
		if( n1 == getV( n2-1 ) || n1 == getV( n2 ) || n1 == getV( n2+1 ) ) r[i] = 1;
		else r[i] = 0;
	}
	
	for( int i=0; i < k; i++ ){
		
		if( r[i] ) cout << "YES";
		else cout << "NO";
		
		cout << endl;
	}
	
	return 0;
}
