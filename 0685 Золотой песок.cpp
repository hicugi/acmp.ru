#include <iostream>
using namespace std;

int fSort( int arr[] ){
	
	int i ,j ,n;
	
	for( i=1; i < 3; i++ ){
		
		if( arr[i-1] < arr[i] )
			continue;

		for( j=i; j > 0; j-- ){
			
			if( arr[j-1] < arr[j] )
				break;
			
			n = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = n;
		}
	}
}

int main(){
	
	int A[3] = {0} ,B[3] = {0} ,n ,i;
	
	for( i=0; i < 3; i++ )
		cin >> A[i];
		
	for( i=0; i < 3; i++ )
		cin >> B[i];
	
	fSort( A );
	fSort( B );
	
	int res = 0;
	
	for( i=0; i < 3; i++ )
		res += A[i] * B[i];
	
	cout << res;
	
	return 0;
}
