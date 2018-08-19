#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int p[n] = {0}, i;
	for( i=0; i < n; i++ )
		cin >> p[i];
	
	int r[2] = {0};
	for( i=0; i < n; i++ ){
		if( p[i] ) r[0]++;
		else r[1]++;
	}
	
	if( r[0] < r[1] ) cout << r[0];
	else cout << r[1];
	
	return 0;
}
