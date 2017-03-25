#include <iostream>
using namespace std;

int main(){

	int N;
	
	cin >> N;
	
	int arr[N][3] ,i,j;
	
	// input times
	for( i=0; i < N; i++ )
		for( j=0; j < 3; j++ )
			cin >> arr[i][j];
	
	
	// insert smaller times at begin
	int res[N][3] ,l;
	bool b;
	
	for( i=0; i < N; i++ ){
		
		b = false;
		
		for( j=0; j < 3; j++ ){
			
			if( i == 0 || ( !b && arr[i][j] >= res[i-1][j] ) ){
				
				res[i][j] = arr[i][j];
				continue;
			}
			
			b = true;
			res[i][j] = res[i-1][j];
			res[i-1][j] = arr[i][j];
		}
	}
	
	// show result
	for( i=0; i < N; i++ ){
		
		if( i > 0 )
			cout << endl;
		
		for( j=0; j < 3; j++ ){
			
			if( j > 0 )
				cout << " ";
			cout << res[i][j];
		}
	}
}
