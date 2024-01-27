/*
Crie uma função para exibir os dados de uma Conta Bancária e outra para exibir
uma Palavra, definidas de acordo com as questões 1 e 2. Modifique os programas
das questões anteriores de forma que eles usem estas novas funções.

*/

#include <iostream>
#include <cstring>
using namespace std;

struct contaBancaria
{
	int identificador;
	char nome[50];
	float saldo;
};

struct palavra
{
	string portugues;
	string ingles;
	string espanhol;
};

void exibirConta(contaBancaria);
void exibirPalavra(palavra);

int main()
{
	contaBancaria conta = { 0, "", 0 };
	palavra dicionario[10] = { { "cachorro", "dog", "perro" }, { "gato", "cat", "gato" } };
	palavra novaPalavra;

	cout << "Digite os dados da conta bancaria:" << endl;
	cout << "Identificador: ";
	cin >> conta.identificador;

	cout << "Nome: ";
	cin >> conta.nome;

	cout << "Saldo: ";
	cin >> conta.saldo;
	cout << endl;

	exibirConta(conta);

	cout << "-----------------------------------\n";

	cout << "Digite uma palavra em portugues: ";
	cin >> novaPalavra.portugues;

	cout << "Agora em ingles: ";
	cin >> novaPalavra.ingles;

	cout << "Agora em espanhol: ";
	cin >> novaPalavra.espanhol;

	dicionario[2] = novaPalavra;

	cout << endl << "Dicionario:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Palavra " << i + 1 << endl;
		exibirPalavra(dicionario[i]);
		cout << endl;
	}

	return 0;
}

void exibirConta(contaBancaria conta)
{
	cout << "Conta: " << conta.identificador << endl;
	cout << "Nome: " << conta.nome << endl;
	cout << "Saldo: R$" << conta.saldo << endl;
}

void exibirPalavra(palavra palavra)
{
	cout << "Portugues: " << palavra.portugues << endl;
	cout << "Ingles: " << palavra.ingles << endl;
	cout << "Espanhol: " << palavra.espanhol << endl;
}
