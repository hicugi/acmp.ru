/*
  (Время: 1 сек. Память: 16 Мб Сложность: 17%)

  Вновь созданная фирма купила заброшенные склады на окраине города. Новому заведующему складами поручили произвести учёт в короткие сроки. Всё шло хорошо, пока случайно не рассыпали контейнеры с болтами и гайками на каждом складе, после чего собрали их в общие (для болтов и гаек) контейнеры, потеряв при этом несколько деталей.

  Помогите оценить нанесённый ущерб на каждом складе, приняв во внимание, что, помимо потерянных деталей, болт (или гайка) считается непригодным, если он не имеет соответствующей гайки (или болта).

  Входные данные
    Во входном файле INPUT.TXT описано текущее положение на складе. В первой строке через пробел записаны три целых числа: k1, l1, m1 – начальное число болтов (100 ≤ k1 ≤ 30000, k1 кратно 100), процент потерянных деталей (0 ≤ l1 ≤ 100) и стоимость одного болта (1 ≤ m1 ≤ 100) соответственно. Во второй строке через пробел записаны также три целых числа: k2, l2, m2 – начальное число гаек (100 ≤ k2 ≤ 30000, k2 кратно 100), процент потерянных деталей (0 ≤ l2 ≤ 100) и стоимость одной гайки (1 ≤ m2 ≤ 100) соответственно.

  Выходные данные
    В выходной OUTPUT.TXT выведите одно целое число – размер ущерба.

  Примеры
    №	INPUT.TXT     OUTPUT.TXT
    1	1000 10 100   37000
      1200 20 90
    2 5000 15 23    53600
      4000 17 22
*/
#include <iostream>
using namespace std;

int main() {

  // болты
  int k1, l1, m1;
  cin >> k1 >> l1 >> m1;

  // гайки
  int k2, l2, m2;
  cin >> k2 >> l2 >> m2;

  int k1_after, k2_after;

  k1_after = k1 - ( k1 / 100 * l1 );
  k2_after = k2 - ( k2 / 100 * l2 );

  // get basic sum
  int sum = k1_after;
  if( sum > k2_after ) sum = k2_after;

  // lost_count
  int lc1, lc2;

  lc1 = k1 - sum;
  lc2 = k2 - sum;

  // lost price
  int lp;
  lp = lc1 * m1 + lc2 * m2;

  cout << lp;
}