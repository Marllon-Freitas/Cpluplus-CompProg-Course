/*
Peça ao usuário para digitar seu nome e sobrenome juntos e exiba-os
separadamente em uma frase, como no exemplo abaixo.

Digite seu nome e sobrenome: Joao Silva
Bom dia, senhor Silva. Ou devo chamá-lo de João?

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char nome[100], sobrenome[100];

	cout << "Digite seu nome e sobrenome: ";
	cin.getline(nome, 100);

	for (int i = 0; i < strlen(nome); i++)
	{
		if (nome[i] == ' ')
		{
			strcpy(sobrenome, nome + i + 1);
			nome[i] = '\0';
			break;
		}
	}

	cout << "Bom dia, senhor " << sobrenome << ". Ou devo chamá-lo de " << nome << "?" << endl;

	return 0;
}
