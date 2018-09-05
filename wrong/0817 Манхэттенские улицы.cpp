/*

  (Время: 1 сек. Память: 16 Мб Сложность: 17%)

  Система улиц Нью-Йоркского района Манхеттен весьма интересна. В Манхеттене есть n улиц, идущие с запада на восток (авеню), и m	улиц, идущие с севера на юг (просто улицы). Ширина каждого авеню и каждой улицы равна d метров, а длина – k метров. При этом каждая улица пересекает каждый авеню и не имеет общих точек с другими улицами, а каждый авеню пересекает каждую улицу и не имеет общих точек с другими авеню.

  Разумеется, все авеню и улицы имеют асфальтовое покрытие. Дорожно-ремонтные службы интересуются: сколько квадратных метров асфальта уложено на все авеню и улицы. На перекрестках, без сомнения, асфальт уложен в один слой.

  Напишите программу, вычисляющую ответ на их вопрос.

  Входные данные
    Входной файл INPUT.TXT содержит четыре натуральных числа n, m, d, k (1 ≤ n, m, d, k ≤ 109, k > m∙d, k > n∙d).

  Выходные данные
    В выходной файл OUTPUT.TXT выведите ответ на задачу.

  Примеры
    №	INPUT.TXT         OUTPUT.TXT
    1	1 1 5 10          75
    2	100 10 23 4560    11007800
*/
#include <iostream>
using namespace std;

int main() {

  long int n, m, d, k;
  cin >> n >> m >> d >> k;

  long int cross, sqare, res = 0;

  cross = d * d;
  sqare = d * k;

  res = sqare * n + sqare * m;
  res -= cross * n * m;

  // wrong answer on 6
  cout << res;
}