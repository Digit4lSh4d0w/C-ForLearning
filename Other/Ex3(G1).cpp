#include <iostream>
using namespace std;
int main()
{
  cout << "Введите 3 суммы очков" << endl;
  int sum1, sum2, sum3, mid;
  cin >> sum1;
  cin >> sum2;
  cin >> sum3;
  mid = (sum1 + sum2 + sum3) / 3;
  cout << "Среднее значение: " << mid;
  return 0;
}
