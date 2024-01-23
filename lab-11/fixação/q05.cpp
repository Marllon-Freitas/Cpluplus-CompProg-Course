/*
Construa uma função que receba uma string como parâmetro e retorne o último
caractere da string, independentemente de seu tamanho. Construa um programa
para testar a função, como mostrado abaixo:

Digite uma palavra: progcomp
Em progcomp a última letra é p.

*/

#include <iostream>
#include <cstring>
using namespace std;

char ultimoCaractere(char palavra[]);

int main()
{
	char palavra[100];

	cout << "Digite uma palavra: ";
	cin >> palavra;

	cout << "Em " << palavra << " a última letra é " << ultimoCaractere(palavra) << "." << endl;

	return 0;
}

char ultimoCaractere(char palavra[])
{
	return palavra[strlen(palavra) - 1];
}
