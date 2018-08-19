#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int i,j, a=0,b=0, score[4][2] = {0};
	
	for( i=0; i < 4; i++ )
		for( j=0; j < 2; j++ )
			cin >> score[i][j];
	
	for( i=0; i < 4; i++ ){
		a += score[i][0];
		b += score[i][1];
	}
	
	if( a > b ) cout << "1";
	if( a < b ) cout << "2";
	if( a == b ) cout << "DRAW";
	
	return 0;
}
