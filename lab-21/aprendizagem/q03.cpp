/*
Se listarmos todos os números naturais menores que 10 que são múltiplos de 3 ou
5, nós teremos 3, 5, 6 e 9. A soma destes múltiplos é 23. Encontre a soma de todos
os múltiplos de 3 ou 5 menores que 1000.
*/

#include <iostream>
using namespace std;

int main()
{
  int soma = 0;
  for (int i = 1; i < 1000; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      soma += i;
    }
  }
  cout << "A soma de todos os múltiplos de 3 ou 5 menores que 1000 é " << soma << endl;
  return 0;
}