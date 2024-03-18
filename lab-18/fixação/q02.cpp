/*
Escreva um programa que utilize um laço de repetição while ou do-while para
ler números inteiros até que o número zero seja lido. Uma vez finalizada a
entrada, o programa deve mostrar a quantidade de números lidos (excluindo o
zero), a soma e a média dos números.

Digite números inteiros (0 para finalizar):
10 4 5 2 0
Foram lidos 4 números
A soma dos números é 21
A média é 5.25
*/

#include <iostream>
using namespace std;

int main()
{
  int numero, somaNumeros = 0, qtdNumeros = 0;
  float media = 0.0;
  cout << "Digite números inteiros (0 para finalizar):" << endl;
  cin >> numero;
  while (numero != 0)
  {
    somaNumeros += numero;
    qtdNumeros++;
    cin >> numero;
  }

  media = (float)somaNumeros / qtdNumeros;
  cout << "Foram lidos " << qtdNumeros << " números" << endl;
  cout << "A soma dos números é " << somaNumeros << endl;
  cout << fixed;
  cout.precision(2);
  cout << "A média é " << media << endl;
  return 0;
}
