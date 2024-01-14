/*
Existem aproximadamente 3.156 x 107 segundos em um ano. Escreva um
programa que pergunte sua idade em anos e passe essa informação para uma
função que deve retornar o equivalente em segundos. Utilize uma constante
simbólica para representar o número de segundos em um ano.

Digite sua idade em anos: 25
25 anos correspondem a 7.89e+008 segundos.

O cout vai passar o valor para notação exponencial sempre que o resultado não
puder ser exibido com 6 dígitos significativos. Utilize cout.setf() e cout.precision()
para exibir o valor em formato decimal com apenas uma casa depois da vírgula.

25 anos correspondem a 789000000.0 segundos.

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

	cout << idade << " anos correspondem a " << segundos(idade) << " segundos." << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(1);

	cout << idade << " anos correspondem a " << segundos(idade) << " segundos." << endl;
	return 0;
}

float segundos(int anos)
{
	return anos * SEGUNDOS_ANO;
}
