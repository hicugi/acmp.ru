#include <iostream>
using namespace std;
 
int main(){
	int a,b,n;
	cin >> a >> b;
	n = a+b-1;
	cout << (n-a) << endl << (n-b);
	return 0;
}