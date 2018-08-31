/*
  (Время: 1 сек. Память: 16 Мб Сложность: 17%)

  В полуфинале студенческого чемпионата мира по программированию NEERC (http://neerc.ifmo.ru) участвуют команды из n институтов. Участники для проведения соревнований распределяются по k залам, каждый из которых имеет размеры, достаточные для размещения всех команд от всех институтов. При этом по правилам соревнований в одном зале может находиться не более одной команды от института.

  Многие институты уже подали заявки на участие в полуфинале. Оргкомитет полуфинала хочет допустить до участия максимально возможное количество команд. При этом, разумеется, должна существовать возможность рассадить их по залам без нарушения правил.

  Напишите программу, определяющую максимальное количество команд, которые можно допустить до участия в полуфинале.

  Входные данные
    Первая строка входного файла INPUT.TXT содержит число n - число институтов, подавших заявки. Вторая строка входного файла содержит n чисел a1, …, an (ai - это количество команд, заявленных от института номер i). Последняя строка входного файла содержит число k - количество залов, в которых проходят соревнования.

    Все числа во входном файле целые, положительные и не превосходят 10000.

  Выходные данные
    В выходной файл OUTPUT.TXT выведите одно целое число - ответ на задачу.

  Примеры
  №	INPUT.TXT   OUTPUT.TXT
  1	3           6
    1 2 4
    3
  2	3           7
    1 2 4
    4
*/
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int a[n];
  for( int i=0; i < n; i++ )
    cin >> a[i];
    
  int k;
  cin >> k;

  int res = 0, v;
  for( int i=0; i < n; i++ ){
    v = a[i] < k ? a[i] : k;
    res += v;
  }

  cout << res;
}