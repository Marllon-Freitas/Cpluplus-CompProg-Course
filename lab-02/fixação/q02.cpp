/*
Escreva um programa que utilize uma chamada a cout para exibir seu nome
completo em uma linha. 
Use um segundo cout para exibir seu nome e sobrenome
em linhas diferentes, e use dois cout’s para exibir seu nome e sobrenome na
mesma linha.
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Peter Parker" << endl;
	cout << "Peter\nParker" << endl;
	cout << "Peter";
	cout << " Parker" << endl;

	return 0;
}