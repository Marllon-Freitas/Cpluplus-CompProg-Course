/*
Escreva um programa que peça ao usuário para digitar um número inteiro
(positivo ou negativo). Crie e use uma função chamada Absoluto() para encontrar
o valor absoluto de um número. A função Absoluto() deve receber um valor inteiro
por parâmetro e retornar o seu valor absoluto.

Digite um número inteiro: -10
O valor absoluto é 10.

*/

#include <iostream>
using namespace std;

int valorAbsoluto(int n)
{
	if (n < 0)
    return -n;
  else
    return n;
}

int main()
{
	int n;
	cout << "Digite um número inteiro: ";
	cin >> n;
	cout << "O valor absoluto de " << n << " eh " << valorAbsoluto(n) << endl;
	return 0;
}