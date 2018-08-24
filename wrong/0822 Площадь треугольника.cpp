/*
  По целочисленным координатам вершин треугольника (x1,y1), (x2,y2) и (x3,y3) требуется вычислить его площадь.

  Входные данные
    Входной файл INPUT.TXT содержит 6 целых чисел x1,y1,x2,y2,x3,y3 – координаты вершин треугольника. Все числа не превышают 106 по абсолютной величине.

  Выходные данные
    В выходной файл OUTPUT.TXT выведите точное значение площади заданного треугольника.

  Примеры
    INPUT.TXT     OUTPUT.TXT
    2 1 2 4 6 1   6
    0 0 0 3 3 0   4.5
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getWidth( int x1, int y1, int x2, int y2 ) {
  return sqrt( pow(y2-y1, 2) + pow(x2-x1, 2) );
}

int main() {

  int x[3], y[3], w[3];
  double p = 0;

  for( int i=0; i < 3; i++ )
    cin >> x[i] >> y[i];

  int a = getWidth( x[0], y[0], x[1], y[1] ),
    b = getWidth( x[1], y[1], x[2], y[2] ),
    c = getWidth( x[2], y[2], x[0], y[0] );

  p = 0.5 * ( a + b + c );

  double res = sqrt( p * ( (p - a) * (p - b) * (p - c) ) );

  // wrong answer on 2
  cout << setprecision(2) << res;
}