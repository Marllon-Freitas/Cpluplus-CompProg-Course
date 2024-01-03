/*
Escreva um programa que produza a saída abaixo. Para atingir esse objetivo crie
uma função que exiba “Sorria!” uma única vez e chame-a na função principal
quantas vezes for preciso para gerar a saída

Sorria! Sorria! Sorria! Sorria!
Sorria! Sorria!
Sorria!
*/

#include <iostream>
using namespace std;

void Sorria();

int main()
{
	Sorria();
	Sorria();
	Sorria();
	cout << endl;
	Sorria();
	Sorria();
	cout << endl;
	Sorria();

	return 0;
}

void Sorria()
{
	cout << "Sorria! =) ";
}