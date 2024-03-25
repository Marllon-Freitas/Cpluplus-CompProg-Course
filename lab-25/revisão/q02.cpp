/*
Escreva uma função que receba um vetor de double’s e retorne o valor do maior
elemento no vetor. A função não deve alterar o conteúdo do vetor. Use a função
para encontrar o maior valor presente em um arquivo texto. O arquivo contém
uma quantidade qualquer de valores ponto-flutuantes separados por espaços,
tabulações ou saltos de linha.

Nome do arquivo: valores.txt
O maior valor é 9.5
*/
#include <iostream>
#include <fstream>

using namespace std;

double maiorElemento(const double[], int);

int main()
{
  double vetor[100] = {0};
  int i = 0;
  ifstream fin;
  double maior = 0;

  fin.open("valores.txt");
  if (!fin.is_open())
  {
    cout << "Abertura do arquivo valores.txt falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  if (fin.is_open())
  {
    while (!fin.eof())
    {
      fin >> vetor[i];
      i++;
    }
    fin.close();
  }

  maior = maiorElemento(vetor, i);
  cout << "O maior valor e " << maior << endl;

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
