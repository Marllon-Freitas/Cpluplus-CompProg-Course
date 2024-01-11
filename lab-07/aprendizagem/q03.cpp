/*
Construa uma função bitsBaixos que utiliza uma máscara de bits para retornar
apenas os 16 bits de mais baixa ordem de um número tipo int. Teste a função
passando um valor inteiro digitado pelo usuário e mostrando o número retornado.

Digite um valor inteiro: 350000
Os 16 bits mais baixos desse valor correspondem ao número 22320.

*/

#include <iostream>
using namespace std;

int bitsBaixos(int);

int main()
{
	int n;
	cout << "Digite um valor inteiro: ";
	cin >> n;
	cout << "Os 16 bits mais baixos desse valor correspondem ao número " << bitsBaixos(n) << endl;
	return 0;
}

int bitsBaixos(int n)
{
	return n & 0xFFFF;
}
