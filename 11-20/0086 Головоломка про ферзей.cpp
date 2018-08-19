#include <iostream>
using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	int p[N][N] , r=0;
	
	for( int i=1; i <= N; i++ )
		for( int j=1; j <= N; j++ )
			if( i != N && j != N && i != j )
				r++;
	
	cout << r;
	
	return 0;
}
