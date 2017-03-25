#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int X[2] ,Y[2] ,x ,y;
	double res;
	
	cin >> X[0] >> Y[0] >> X[1] >> Y[1];
	
	x = X[1] - X[0];
	y = Y[1] - Y[0];
	
	res = pow(x ,2) + pow(y ,2);
	res = sqrt(+res);
	
	cout << res;
	
	return 0;
}
