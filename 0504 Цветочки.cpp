#include<iostream>
#include<string>

using namespace std;

int main(){
	int k, i, n, arr[3]={0,1,2};
	string str = "GCV";
	cin >> k;
	
	for( i=0; i < k; i++ ){
		n = arr[1];
		arr[1] = arr[2]; arr[2] = n;
		n = arr[0];
		arr[0] = arr[1]; arr[1] = n;
	}
	for( i=0; i < 3; i++ ) cout << str[ arr[i] ];
}
