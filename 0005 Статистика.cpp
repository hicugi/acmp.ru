#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	if( 1 > N or N > 100 ) return false;
	
	int eval[N];
	for( int i=0; i < N; i++ ){
		cin >> eval[i];
		if( 1 > eval[i] or eval[i] > 31 ) return false;
	}
	
	int days[2][N]={0}, count[2]={0}, k1=0,k2=0;
	
	for( int i=0; i < N; i++ ){
		if( eval[i] % 2 != 0 ){
			count[0]++;
			days[0][k1++] = eval[i];
		} else{
			count[1]++;
			days[1][k2++] = eval[i];
		}
	}
	
	for( int i=0; i < 2; i++  ){
		for( int j=0; j < count[i]; j++ )
			cout << days[i][j] << " ";
		cout << endl;
	}
	
	if( count[0] <= count[1] ) cout << "YES";
	else cout << "NO";
	
	return 0;
}
