/*
Considerando o registro gol definido abaixo, crie um programa que leia e
armazene em um vetor os dados dos três últimos gols que você assistiu.

union jogador
{
 char nome[25]; // nome do jogador
 int numero; // numero da camisa do jogador
};
struct gol
{
 jogador jog; // identificação do jogador
 int hora, min; // hora e minuto em que o gol foi marcado
};

Digite os dados dos 3 últimos gols:
Gol: Bebeto 7 14:30
Gol: Zico 9 45:00
Gol: Pele 10 05:45

*/

#include <iostream>
using namespace std;

union jogador
{
	char nome[25]; // nome do jogador
	int numero;    // numero da camisa do jogador
};

struct gol
{
	jogador jog;   // identificação do jogador
	int hora, min; // hora e minuto em que o gol foi marcado
};

int main()
{
	gol gols[3];
	char doisPontos;
	cout << "Digite os dados dos 3 últimos gols: \n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Gol: ";
		cin >> gols[i].jog.nome >> gols[i].jog.numero >> gols[i].hora >> doisPontos >> gols[i].min;
	}
	cout << "\n\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Gol: " << gols[i].jog.nome << " " << gols[i].jog.numero << " " << gols[i].hora << ":" << gols[i].min << "\n";
	}
	return 0;
}