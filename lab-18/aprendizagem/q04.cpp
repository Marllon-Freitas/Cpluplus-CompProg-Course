/*
Escreva um programa que leia uma frase de até 60 caracteres e diga se ela forma
um palíndromo, desconsiderando os espaços. Abaixo estão alguns exemplos de
frases que formam palíndromos:

apos a sopa
a sacada da casa
a torre da derrota
o lobo ama o bolo
anotaram a data da maratona

*/

#include <iostream>
using namespace std;

int main()
{
	char frase[61];
	cout << "Digite uma frase de até 60 caracteres: ";
	cin.getline(frase, 61);
	int i = 0, j = 0;
	while (frase[i] != '\0')
	{
		if (frase[i] != ' ')
		{
			frase[j] = frase[i];
			j++;
		}
		i++;
	}
	frase[j] = '\0';
	int tam = j;
	bool palindromo = true;
	for (i = 0; i < tam / 2; i++)
	{
		if (frase[i] != frase[tam - 1 - i])
		{
			palindromo = false;
			break;
		}
	}
	if (palindromo)
	{
		cout << "A frase é um palíndromo.\n";
	}
	else
	{
		cout << "A frase não é um palíndromo.\n";
	}
	return 0;
}