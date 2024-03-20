/*
Encontre o menor inteiro positivo n que satisfaça às seguintes condições:
a. n/3 tem resto 2
b. n/5 tem resto 3
c. n/7 tem resto 4
*/

#include <iostream>
using namespace std;

int main()
{
  int n = 1;
  while (!(n % 3 == 2 && n % 5 == 3 && n % 7 == 4))
  {
    n++;
  }
  cout << "n = " << n << endl;

  return 0;
}