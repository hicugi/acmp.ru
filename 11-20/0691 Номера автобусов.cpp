/*
  (Время: 1 сек. Память: 16 Мб Сложность: 16%)

  Однажды Вася очень долго просидел на остановке, прежде чем дождался своего автобуса. Чтобы как-то занять время, он решил записывать на листочке государственные регистрационные номера проходящих мимо автобусов, следующих по другому маршруту, нежели нужен был Васе. При этом производилась запись лишь основного номера, без учета региональной принадлежности. В итоге Васе удалось записать N таких номеров.

  Основная часть государственного регистрационного номера состоит из 6 символов: трех букв и трех цифр. Сначала идет буква, затем 3 цифры и еще 2 буквы заканчивают запись. В качестве цифр могут использоваться любые цифры от 0 до 9, а в качестве букв только прописные буквы, обозначения которых присутствуют как в английском, так и в русском алфавите, т.е. только следующие символы: A, B, C, E, H, K, M, O, P, T, X, Y. Например, «P204BT» - правильный номер, а «X182YZ» и «ABC216» - нет.

  Ваша задача заключается в проверке правильности проделанной Васей работы. А именно, нужно определить, какие из номеров соответствуют принятому стандарту, а какие нет.

  Входные данные
    Первая строка входного файла INPUT.TXT содержит единственное натуральное число N – количество записанных Васей номеров (N ≤ 50). Далее следует N строк с записями номеров автобусов. Длины строк от 1 до 300 и содержат только символы с кодами ASCII от 33 до 127 (не содержат пробелов, специальных и русских символов).

  Выходные данные
    В выходной файл OUTPUT.TXT выведите N строк, в i-й строке должно содержаться «Yes», если соответствующая i-я запись номера верна и «No» в противном случае.

  Пример
    №   INPUT.TXT	  OUTPUT.TXT
    1   5
        P204BT      Yes
        X182YZ      No
        a216bc      No
        A216BC      Yes
        ABC216      No
*/
#include <iostream>
#include <regex>
using namespace std;

int main() {

  int N;
  cin >> N;

  string bus, res[N];
  regex rg ("[ABCEHKMOPTXY]{1}[0-9]{3}[ABCEHKMOPTXY]{2}");
  
  for( int i=0; i < N; i++ ){
    cin >> bus;

    if( regex_match( bus, rg ) ) res[i] = "Yes";
    else res[i] = "No";
  }

  for( int i=0; i < N; i++ )
    cout << res[i] << endl;

  cin >> N;
}