/*
A UFERSA adotou uma nova fórmula para calcular a média parcial das avaliações.
No sistema novo, a média parcial é a média aritmética das três notas. O sistema
antigo utilizava pesos, sendo a média parcial dada pela fórmula abaixo:

𝑀é𝑑𝑖𝑎 = 𝑛𝑜𝑡𝑎1 ∗ 2 + 𝑛𝑜𝑡𝑎2 ∗ 3 + 𝑛𝑜𝑡𝑎3 ∗ 4 / 9

Inicialize um vetor de três float’s com os pesos das notas do sistema antigo. Crie
um outro vetor para guardar as notas do aluno, pergunte quais foram as suas notas
e preencha o vetor com elas. Utilize os vetores para calcular a média do aluno no
sistema novo e no sistema antigo e mostre-as na tela.

*/

#include <iostream>
using namespace std;

int main()
{
	float pesos[3] = { 2, 3, 4 }, notas[3], media_antiga = 0, media_nova = 0;

	for (int i = 0; i < 3; i++)
	{
		cout << "Nota " << i + 1 << ": ";
		cin >> notas[i];
	}

	for (int i = 0; i < 3; i++)
	{
		media_antiga += notas[i] * pesos[i];
		media_nova += notas[i];
	}

	media_antiga = media_antiga / 9;
	media_nova = media_nova / 3;

	cout.precision(2);
	cout << "Média antigo: " << fixed << media_antiga << endl;
	cout << "Média novo: " << fixed << media_nova << endl;

	return 0;
}
