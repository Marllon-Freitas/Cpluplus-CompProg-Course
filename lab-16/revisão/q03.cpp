/*
Escreva uma função que exiba o conteúdo de um vetor estático inicializado para
os valores abaixo.
{ 15, 29, 48, 10, 35 }
a) Faça uma versão que funciona apenas para os 5 elementos do exemplo
b) Faça uma versão que funcione com qualquer quantidade de elementos

*/

#include <iostream>
using namespace std;

void exibirNumeroFixoDeElementos(int[]);
void exibirQualquerQuantidadeDeElementos(int[], int);

int main()
{
	int vetor[] = { 15, 29, 48, 10, 35 }, tamanho = 5;
	exibirNumeroFixoDeElementos(vetor);
	cout << "Agora, Digite o tamanho do vetor: ";
	cin >> tamanho;
	exibirQualquerQuantidadeDeElementos(vetor, tamanho);
	return 0;
}

void exibirNumeroFixoDeElementos(int vetor[])
{
	for (int i = 0; i < 5; i++)
		cout << vetor[i] << " ";
	cout << endl;
}

void exibirQualquerQuantidadeDeElementos(int vetor[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
		cout << vetor[i] << " ";
	cout << endl;
}