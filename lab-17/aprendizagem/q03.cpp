/*
Escreva uma função que receba dois números inteiros, sendo o primeiro valor o
início do intervalo e o segundo o fim do intervalo. A função deve retornar a soma
dos números presentes neste intervalo (incluindo o primeiro e o último). Utilize
essa função na função principal, perguntando ao usuário que números vão ser o
início e o fim do intervalo.
*/

#include <iostream>
using namespace std;

int somaNumerosEmIntervalo(int, int);

int main()
{
	int inicioIntervalo, fimIntervalo;
	cout << "Digite o primeiro número do intervalo" << endl;
	cin >> inicioIntervalo;
	cout << "Digite o último número do intervalo" << endl;
	cin >> fimIntervalo;
	if (inicioIntervalo == fimIntervalo)
	{
		cout << "Os números informados são iguais" << endl;
		return 1;
	}
	if (inicioIntervalo > fimIntervalo)
	{
		cout << "O inicio do intervalo não pode ser maior que o fim dele" << endl;
		return 1;
	}
	cout << "A soma dos números no intervalo é: " << endl;
	cout << somaNumerosEmIntervalo(inicioIntervalo, fimIntervalo) << endl;
	return 0;
}

int somaNumerosEmIntervalo(int inicio, int fim) {
	int soma = 0;
	for (int i = inicio; i <= fim; i++)
	{
		soma = soma + i;
	}
	return soma;
}