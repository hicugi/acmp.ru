#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
	int N, i, arr[6], n, n2;
	double d;
	cin >> N; n = N;
	for(i=0; i<6; i++){
		n = N/pow(10,i);
		d = n*0.1; n2 = d;
		n = (d*10)-(n2*10);
		arr[i] = n;
	}
	
	n = arr[0]+arr[1]+arr[2];
	n2 = arr[3]+arr[4]+arr[5];
	
	if( n == n2 ) cout << "YES";
	else cout << "NO";
}
