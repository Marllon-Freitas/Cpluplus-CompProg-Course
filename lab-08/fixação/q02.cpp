/*
Escreva um programa que leia um número ponto flutuante e exiba-o na notação
padrão do cout, em notação científica e em notação decimal (fixa). Use a função
cout.setf() para mudar os formatos.

Digite um ponto flutuante: 258040.5
Notação padrão: 258040
Notação científica: 2.580405e+05
Notação decimal: 258040.500000

*/

#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nul");

	double numero;

	cout << "Digite um ponto flutuante: ";
	cin >> numero;

	cout << "Notação padrão: " << numero << endl;

	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "Notação científica: " << numero << endl;
	cout.precision(6);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Notação decimal: " << numero << endl;

	return 0;
}
