#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int a[n];
	for( int j=0; j < n; j++ )
		cin >> a[j];
	
	int m;
	cin >> m;
	
	int i[m][2];
	for( int j=0; j < m; j++ )
		cin >> i[j][0] >> i[j][1];
	
	for( int j=0; j < m; j++ ){
		
		for( int k=0; k < n; k++ )
			if( i[j][0] <= a[k] && a[k] <= i[j][1] )
				cout << a[k] << " ";
		
		cout << endl;
	}
	
	return 0;
}
