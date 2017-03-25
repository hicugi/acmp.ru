#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	int arr[N] = {};
	for( int i=0; i < N; i++ )
		cin >> arr[i];
	
	cout << arr[ N-1 ];
	for( int i=N-2; i >= 0; i-- )
		cout << " " << arr[i];
	
	return 0;
}
