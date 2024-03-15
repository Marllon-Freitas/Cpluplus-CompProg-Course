/*
1. Explique em uma frase o que o laço de repetição abaixo faz.
int x;
cout << "Digite um valor: ";
for (cin >> x; x; cin >> x)
cout << "Digite outro valor: ";
*/

#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Digite um valor: ";
  for (cin >> x; x; cin >> x)
    cout << "Digite outro valor: ";
  return 0;
}

/*
O laço de repetição lê um valor inteiro do usuário e imprime "Digite outro valor: " até que o valor digitado seja 0.
*/