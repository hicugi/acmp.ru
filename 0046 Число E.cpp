#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string n = "2.7182818284590452353602875", nv;
	int i, k, v, res;
	
	cin >> k;
	if( k < 1 ){ cout << 3; return 0; }
	
	cout << "2."; k += 1;
	for( i=2; i < k; i++ ){
		if( !n[i] ) break;
		cout << n[i];
	}
	
	nv = n[i+1]; v = atoi(nv.c_str());
	if( v > 4 ){
		nv = n[i]; v = atoi(nv.c_str());
		cout << v+1;
	} else cout << n[i];
	
	return 0;
}
