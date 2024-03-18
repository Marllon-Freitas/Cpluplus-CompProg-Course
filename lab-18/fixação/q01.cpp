/*
Escreva um programa que peça ao usuário para digitar números. Após cada
entrada, o programa deve mostrar o valor acumulado da soma dos números
naquele momento. O programa deve encerrar quando for digitado o número zero

Digite números inteiros (0 para finalizar):
10
Soma parcial: 10
5
Soma parcial: 15
3
Soma parcial: 18
0
*/

#include <iostream>
using namespace std;

int main()
{
  int numero, somaNumeros = 0;
  cout << "Digite números inteiros (0 para finalizar):" << endl;
  cin >> numero;
  while (numero != 0)
  {
    somaNumeros += numero;
    cout << "Soma parcial: " << somaNumeros << endl;
    cin >> numero;
  }
  return 0;
}
