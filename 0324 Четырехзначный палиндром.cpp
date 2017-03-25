#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int N ,v[4] ,i ,j ,k;
	
	cin >> N;
	
	for( i=0; i < 4; i++ ){
		
		j = N / pow(10 ,i);
		
		if( j > 9 ){
			
			k = j * 0.1;
			j = j - k*10;
		}
		
		v[i] = j;
	}
	
	if( v[0] == v[3] and v[1] == v[2] )
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}
