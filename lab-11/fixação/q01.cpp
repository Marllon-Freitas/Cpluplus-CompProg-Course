/*
Escreva um programa que peça e mostre informações como mostrado no exemplo
abaixo. O número de caracteres para o primeiro e segundo nome deve ser definido
em uma constante.

Primeiro nome? João
Segundo nome? Dias
Bom dia, João Dias.
Seja bem vindo JD!

*/

#include <iostream>

using namespace std;

int main()
{
  const int TAMANHO_NOME = 10;
  char primeiroNome[TAMANHO_NOME], segundoNome[TAMANHO_NOME];

  cout << "Primeiro nome? ";
  cin >> primeiroNome;

  cout << "Segundo nome? ";
  cin >> segundoNome;

  cout << "Bom dia, " << primeiroNome << " " << segundoNome << "." << endl;
  cout << "Seja bem vindo " << primeiroNome[0] << segundoNome[0] << "!" << endl;

  return 0;
}
