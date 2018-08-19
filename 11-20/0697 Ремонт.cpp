#include <iostream>
using namespace std;

int main(){
	
	int L ,W ,H ,r;
	double n;
	
	cin >> L >> W >> H;
	
	n = ( (L*H) * 2 ) + ( ( W*H) * 2 );
	
	n /= 16;
	r = n;
	
	if( n > r ) r++;
	cout << r;
	
	return 0;
}
