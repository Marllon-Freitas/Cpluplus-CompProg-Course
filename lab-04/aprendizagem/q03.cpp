/*
Escreva uma função chamada media() que recebe dois valores inteiros e retorna a
média aritmética destes valores. Teste a função com um programa simples.

Digite um valor inteiro: 10
Digite outro valor inteiro: 11
A média dos números é 10.5
*/

#include <iostream>
using namespace std;

float mediaAritmetica(int nota01, int nota02)
{
	return (nota01 + nota02) / 2.0;
}

int main()
{
	int nota01, nota02;
	cout << "Digite um valor inteiro: ";
	cin >> nota01;
	cout << "Digite outro valor inteiro: ";
	cin >> nota02;
	cout << "A média dos números é " << mediaAritmetica(nota01, nota02) << endl;
	return 0;
}