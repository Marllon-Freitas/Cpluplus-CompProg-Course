/*
Construa um programa que leia o nome de um jogador de futebol e seu respectivo
time para um vetor de caracteres, como no exemplo abaixo. O nome do jogador e o
nome do time sempre estarão separados por uma barra e sem espaços. Use um
laço for para localizar a posição do caractere '/' dentro do vetor e coloque um
ponteiro apontando para o caractere seguinte. Mostre a quantidade de letras que
tem o nome do jogador e, usando o ponteiro, mostre o nome do time.

Digite jogador/time: Pele/Santos
O nome do jogador tem 4 letras.
O seu time é o Santos.

*/

#include <iostream>
using namespace std;

int main()
{
	char jogador[30];
	int i;
	cout << "Digite jogador/time: ";
	cin.getline(jogador, 30);
	for (i = 0; jogador[i] != '/'; i++);
  char * time = &jogador[i + 1];
  cout << "O nome do jogador tem " << i << " letras." << endl;
  cout << "O seu time é o " << time << "." << endl;
	return 0;
}
