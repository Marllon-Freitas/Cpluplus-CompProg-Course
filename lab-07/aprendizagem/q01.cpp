/*
Crie uma função chamada codificar que recebe um caractere, soma 3 a ele e
retorna o novo caractere codificado. Crie outra função chamada decodificar que
recebe um caractere e subtrai 3 do caractere recebido e retorna o novo caractere
decodificado. Use as duas funções em um programa que receba um caractere do
usuário, codifique o caractere, mostre o caractere ao usuário, decodifique-o e
mostre-o novamente.

*/

#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);

int main()
{
	char c;
	cout << "Informe um caractere: ";
	cin >> c;
	cout << "Codificando " << c << " temos " << codificar(c) << endl;
	cout << "Decodificando " << codificar(c) << " temos " << decodificar(codificar(c)) << endl;
	return 0;
}

char codificar(char c)
{
	return c + 3;
}

char decodificar(char c)
{
	return c - 3;
}
