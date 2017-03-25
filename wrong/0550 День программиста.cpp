#include <iostream>
using namespace std;

int main(){
	
	int Y ,m = 1 ,d = 1 ,M[9] = { 31 ,28 ,31 ,30 ,31 ,30 ,31 ,31 ,30 };
	
	cin >> Y;
	
	if( Y < 1 || Y > 9999 )
		return 0;
	
	if( Y % 400 == 0 || ( Y % 4 == 0 && Y % 100 != 0 ) )
		M[1]++;
	
	for( int i=0; i < 255; i++ ){
		
		d++;
		
		if( d-1 == M[m-1] ){
			
			m++;
			d = 1;
		}
	}
	
	cout << d << "/";
	if( m < 10 ) cout << "0";
	cout << m << "/" << Y;
	
	return 0;
}
