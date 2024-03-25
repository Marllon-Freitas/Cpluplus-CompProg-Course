/*
Escreva uma função que receba um vetor de double’s e retorne o valor do maior
elemento no vetor. A função não deve alterar o conteúdo do vetor. Use a função
para encontrar o maior valor presente em um arquivo texto. O arquivo contém
uma quantidade qualquer de valores ponto-flutuantes separados por espaços,
tabulações ou saltos de linha.

Nome do arquivo: valores.txt
O maior valor é 9.5

Dica: como não se conhece o conteúdo do arquivo, não é possível prever quantos
valores ele contém. Será necessário ler o arquivo duas vezes, uma para contar e
outra para ler os elementos.
*/
#include <iostream>
#include <fstream>

using namespace std;

double maiorElemento(const double[], int);

int main()
{
  ifstream fin;
  double valor = 0, maior = 0;
  int i = 0, tamanho = 0;

  fin.open("valores.txt");
  if (!fin.is_open())
  {
    cout << "Abertura do arquivo valores.txt falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  while (!fin.eof())
  {
    fin >> valor;
    tamanho++;
  }
  fin.close();

  fin.open("valores.txt");

  double *vetor = new double[tamanho];

  for (i = 0; i < tamanho; i++)
  {
    fin >> vetor[i];
  }

  fin.close();

  cout << "O maior valor é " << maiorElemento(vetor, tamanho) << endl;

  delete[] vetor;

  return 0;
}

double maiorElemento(const double vetor[], int tamanho)
{
  double maior = vetor[0];

  for (int i = 1; i < tamanho; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
    }
  }
  return maior;
}
