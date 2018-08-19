#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string A, sel;
	cin >> A;
	
	if( A.size() > 1 ){
		string b="";
		for( int i=0; i < A.size()-1; i++ )
			b += A[i];
		int bi = atoi( b.c_str() );
		cout << bi * (bi+1);
	}
	cout << 25;
	
	return 0;
}
