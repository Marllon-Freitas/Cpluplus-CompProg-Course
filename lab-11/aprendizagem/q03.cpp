/*
Peça que o usuário escreva seu nome completo e a data atual, armazenando ambas
as informações em vetores de caracteres diferentes. Crie um vetor de caracteres
para guardar a concatenação do nome com " esteve aqui em " e mais a data
fornecida. Mostre o resultado exibindo o conteúdo desse vetor.

Nome: Joao Filho
Data: 07/08/2017
Joao Filho esteve aqui em 07/08/2017.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char nome[100], data[100], frase[100];

	cout << "Nome: ";
	cin.getline(nome, 100);

	cout << "Data: ";
	cin.getline(data, 100);

	strcpy(frase, nome);
	strcat(frase, " esteve aqui em ");
	strcat(frase, data);
	strcat(frase, ".");

	cout << frase << endl;

	return 0;
}
