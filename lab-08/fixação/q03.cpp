/*
Existem aproximadamente 3.156 x 107 segundos em um ano. Escreva um
programa que pergunte sua idade em anos e passe essa informação para uma
função que deve retornar o equivalente em segundos. Utilize uma constante
simbólica para representar o número de segundos em um ano.

Digite sua idade em anos: 25
25 anos correspondem a 7.89e+008 segundos.

*/

#include <iostream>

using namespace std;

#define SEGUNDOS_ANO 31560000;

float segundos(int);

int main()
{
	system("chcp 1252 > nul");

	int idade;

	cout << "Digite sua idade em anos: ";
	cin >> idade;

	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << idade << " anos correspondem a " << segundos(idade) << " segundos." << endl;
	cout.precision(56);
	return 0;
}

float segundos(int anos)
{
	return anos * SEGUNDOS_ANO;
}
