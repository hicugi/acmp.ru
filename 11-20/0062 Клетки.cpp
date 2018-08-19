#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	string p1 = "ABCDEFGH";
	int p2[8] = { 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 };
	
	string k ,s;
	cin >> k;
	
	int sk[2] ,n;
	for( int i=0; i < 8; i++ ){
		
		if( k[0] == p1[i] ) sk[0] = i % 2;
		
		s = k[1];
		n = atoi(s.c_str());
		if( n == p2[i] ) sk[1] = i % 2;
	}
	
	if( sk[0] == sk[1] ) cout << "BLACK";
	else cout << "WHITE";
	
	return 0;
}
