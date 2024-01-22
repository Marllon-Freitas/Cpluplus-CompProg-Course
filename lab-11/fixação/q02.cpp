/*
Escreva um programa que peça e mostre informações do usuário, como mostrado:

Qual é o nome? João Maria
Que conceito você merece? B
Bom dia, João Maria. Seu conceito é C.

Note que o programa deve ser capaz de aceitar nome formados por mais de uma
palavra. Observe também que o programa ajusta o conceito para baixo.

*/

#include <iostream>
using namespace std;

int main()
{
	const int TAMANHO_NOME = 40;
	char nome[TAMANHO_NOME], conceito;

	cout << "Qual é o nome? ";
	cin.getline(nome, TAMANHO_NOME);

	cout << "Que conceito você merece? ";
	cin >> conceito;

	conceito = conceito + 1;

	cout << "Bom dia, " << nome << ". Seu conceito é " << conceito << "." << endl;

	return 0;
}
