/*
Listando os 6 primeiros números primos, temos 2, 3, 5, 7, 11 e 13. Podemos notar
que o sexto número primo é 13. Qual é o 10001º número primo?
*/

#include <iostream>
#include <cmath>
using namespace std;

bool ePrimo(int);

int main()
{
  int contador = 0;
  int numero = 2;
  while (contador < 10001)
  {
    if (ePrimo(numero))
    {
      contador++;
    }
    numero++;
  }
  cout << "O 10001º número primo é " << numero - 1 << endl;
  return 0;
}

bool ePrimo(int num)
{
  if (num <= 1)
    return false;
  if (num == 2)
    return true;
  if (num % 2 == 0)
    return false;
  for (int i = 3; i <= sqrt(num); i += 2)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}