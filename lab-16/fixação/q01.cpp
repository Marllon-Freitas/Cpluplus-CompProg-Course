/*
Você está vendendo o livro “C++ só do bom”. Escreva um programa que te permita
armazenar o número de livros vendidos mensalmente durante um ano. O
programa deve usar um laço para perguntar sobre o número de vendas de cada
mês, exibindo o nome do mês (use um vetor de const char * inicializado para os
nomes dos meses). Use um vetor de inteiros para armazenar a quantidade de
livros vendidos em cada mês. O programa deve calcular e exibir o número total de
livros vendidos no ano.

Digite o número de livros vendidos:
Janeiro: 30
Fevereiro: 45
…
Dezembro: 120
Em um ano foram vendidos 565 livros.

*/

#include <iostream>
using namespace std;

int main()
{
	const char* meses[] = { "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
							"Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro" };
	int vendas[12], total = 0;
	cout << "Digite o número de livros vendidos:" << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << meses[i] << ": ";
		cin >> vendas[i];
		total += vendas[i];
	}
	cout << "Em um ano foram vendidos " << total << " livros." << endl;
	return 0;
}
