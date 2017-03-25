#include <iostream>
using namespace std;

int main(){
	int r[3] = {0};
	for( int i=0; i < 3; i++ )
		cin >> r[i];
	
	if( r[0] >= (r[1]+r[2]) ) cout << "YES";
	else cout << "NO";
	
	return 0;
}
