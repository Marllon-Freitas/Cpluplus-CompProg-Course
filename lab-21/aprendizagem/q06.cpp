/*
2520 é o menor número que pode ser dividido por cada um dos números de 1 a 10
sem deixar resto. Qual é o menor número positivo que é divisível por todos os
números de 1 a 20 sem deixar resto?
*/

#include <iostream>
using namespace std;

int main()
{
  int numero = 20;
  while (true)
  {
    bool divisivel = true;
    for (int i = 20; i >= 11; i--)
    {
      if (numero % i != 0)
      {
        divisivel = false;
        break;
      }
    }
    if (divisivel)
    {
      cout << "O menor número positivo que é divisível por todos os números de 1 a 20 sem deixar resto é " << numero << endl;
      break;
    }
    numero += 20;
  }
  return 0;
}