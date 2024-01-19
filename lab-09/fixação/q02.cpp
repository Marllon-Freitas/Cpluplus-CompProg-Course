/*
Escreva um programa que leia um número ponto-flutuante e exiba-o na notação
padrão do cout, em notação científica e em notação decimal (com duas casas após
a vírgula). Use cout << scientific e cout << fixed para mudar os formatos e
cout.precision() para definir o número de casas decimais.

Digite um ponto-flutuante: 258040.5
Notação padrão: 258041
Notação científica: 2.580405e+005
Notação decimal: 258040.50

*/

#include <iostream>

using namespace std;

int main()
{
	double numero;

	cout << "Digite um ponto-flutuante: ";
	cin >> numero;
	cout << "Notação padrão: " << numero << endl;
	cout << "Notação científica: " << scientific << numero << endl;
	cout.precision(2);
	cout << "Notação decimal: " << fixed << numero << endl;

	return 0;
}
