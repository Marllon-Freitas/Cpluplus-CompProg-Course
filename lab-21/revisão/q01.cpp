/*
Construa expressões lógicas para representar as seguintes condições:
a. peso é maior ou igual a 115 mas é inferior a 125
b. ch é q ou Q
c. x é par mas não é 26
d. x é par mas não é um múltiplo de 26
e. donativo está na faixa [10-20] ou [90-100]
f. ch é uma letra maiúscula ou minúscula
*/

#include <iostream>
using namespace std;

int main()
{
  int peso = 120;
  char ch = 'q';
  int x = 24;
  int donativo = 15;

  // a. peso é maior ou igual a 115 mas é inferior a 125
  if (peso >= 115 && peso < 125)
  {
    cout << "a. peso é maior ou igual a 115 mas é inferior a 125" << endl;
  }

  // b. ch é q ou Q
  if (ch == 'q' || ch == 'Q')
  {
    cout << "b. ch é q ou Q" << endl;
  }

  // c. x é par mas não é 26
  if (x % 2 == 0 && x != 26)
  {
    cout << "c. x é par mas não é 26" << endl;
  }

  // d. x é par mas não é um múltiplo de 26
  if (x % 2 == 0 && x % 26 != 0)
  {
    cout << "d. x é par mas não é um múltiplo de 26" << endl;
  }

  // e. donativo está na faixa [10-20] ou [90-100]
  if ((donativo >= 10 && donativo <= 20) || (donativo >= 90 && donativo <= 100))
  {
    cout << "e. donativo está na faixa [10-20] ou [90-100]" << endl;
  }

  // f. ch é uma letra maiúscula ou minúscula
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  {
    cout << "f. ch é uma letra maiúscula ou minúscula" << endl;
  }

  return 0;
}