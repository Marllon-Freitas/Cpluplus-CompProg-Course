/*
Por que não se usa const quando o parâmetro da função é um dos tipos básicos
(int, float, char, bool, etc.) ?

void exibir (const int);
void exibir (int);
*/

#include <iostream>

using namespace std;

void exibir(int);

int main()
{
  int numero = 10;

  exibir(numero);

  return 0;
}

void exibir(int numero)
{
  cout << numero << endl;
}

/*
Quando o parâmetro da função é um dos tipos básicos (int, float, char, bool, etc.), não se usa const porque o valor do parâmetro é copiado para a
variável local da função. Portanto, a função não altera o valor da variável original.
*/