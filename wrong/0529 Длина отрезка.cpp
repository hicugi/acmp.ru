/*
	Отрезок задан координатами своих концевых точек. Требуется вычислить длину этого отрезка.

	Входные данные
		Входной файл INPUT.TXT содержит координаты концов отрезка в формате X1 Y1 X2 Y2 . Все координаты – целые числа, не превышающие 1000 по абсолютной величине.

	Выходные данные
		В выходной файл OUTPUT.TXT выведите длину отрезка с точностью 10-5.

	Пример
		3 4 8 4 =	5
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	
	int X[2] ,Y[2] ,x ,y;
	double res;
	
	cin >> X[0] >> Y[0] >> X[1] >> Y[1];
	
	x = X[1] - X[0];
	y = Y[1] - Y[0];
	
	res = pow(x ,2) + pow(y ,2);
	res = sqrt(res);
	
	// wrong answer on 3
	cout << setprecision(5) << res;
}
