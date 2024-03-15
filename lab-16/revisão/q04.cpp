/*
Escreva uma função que exiba o conteúdo de um vetor dinâmico de jogadores de
tamanho qualquer.

struct jogador
{
 char nome[20];
 float salario;
 unsigned gols;
};

*/

#include <iostream>
using namespace std;

struct jogador
{
	char nome[20];
	float salario;
	unsigned gols;
};

void exibirJogadores(jogador[], int);

int main()
{
	int tamanho;
	cout << "Digite o tamanho do vetor: ";
	cin >> tamanho;
	jogador* vetor = new jogador[tamanho];
	for (int i = 0; i < tamanho; i++)
	{
		cout << "Jogador " << i + 1 << endl;
		cout << "Digite o nome do jogador: ";
		cin >> vetor[i].nome;
		cout << "Digite o salário do jogador: ";
		cin >> vetor[i].salario;
		cout << "Digite a quantidade de gols do jogador: ";
		cin >> vetor[i].gols;
	}
	cout << "Jogadores cadastrados: " << endl;
	exibirJogadores(vetor, tamanho);
	delete[] vetor;
	return 0;
}

void exibirJogadores(jogador vetor[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		cout << "Jogador " << i + 1 << endl;
		cout << "Nome: " << vetor[i].nome << endl;
		cout << "Salário: " << vetor[i].salario << endl;
		cout << "Gols: " << vetor[i].gols << endl;
	}
}