/*
  (Время: 1 сек. Память: 16 Мб Сложность: 16%)
  
  Напишите программу, которая выводит элемент из строки Y и столбца X матрицы размера N×M, которая заполнена следующим образом:

  0   1   2   3
  7   6   5   4
  8   9   10	11

  Входные данные
    Входной файл INPUT.TXT содержит натуральные числа N, M, Y, X (Y ≤ N ≤ 50; X ≤ M ≤ 50). N - количество строк матрицы, M - количество столбцов матрицы, Y и X - номера строки и столбца искомого элемента.

  Выходные данные
    В выходной файл OUTPUT.TXT выведите искомый элемент.

  Примеры
    №  INPUT.TXT    OUTPUT.TXT
    1  3 4 2 3       5
    2  5 2 3 1       4
*/
#include <iostream>
using namespace std;

int main() {

  int N, M, Y, X;
  cin >> N >> M >> Y >> X;

  int m[N][M], n = 0;

  for( int i=0; i < N; i++ )
    if( i % 2 == 0 )
      for( int j=0; j < M; j++ ){
        m[i][j] = n;
        n++;
      }
    else
      for( int j=M-1; j >= 0; j-- ){
        m[i][j] = n;
        n++;
      }

  cout << m[Y-1][X-1];
}