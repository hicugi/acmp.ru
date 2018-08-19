#include <iostream>
using namespace std;

int main(){
	
	int k ,i;
	
	cin >> k;
	
	int n[k] ,m[k];
	
	for( i=0; i < k; i++ )
		cin >> n[i] >> m[i];
	
	for( i=0; i < k; i++ )
		cout << 19 * m[i] + ( n[i] + 239 ) * ( n[i] + 366 ) / 2 << endl;
	
	return 0;
}
