/*
Construa uma programa que leia uma lista de até 100 números de um arquivo
texto e armazene-os em um vetor. O programa deve passar o vetor para uma
função que deve encontrar e retornar o menor elemento, o maior elemento, e suas
respectivas posições dentro do vetor. Defina um registro para ser o tipo de retorno
da função. Utilize const nos parâmetros da função sempre que possível.

Arquivo: números.txt
A posição 30 contém o menor número (3)
A posição 12 contém o maior número (98)
*/

#include <iostream>
#include <fstream>
using namespace std;

const int TAMANHO = 100;

struct infoNumVetor
{
  int menor;
  int posicaoMenor;
  int maior;
  int posicaoMaior;
};

infoNumVetor menorMaior(int[], int);

int main()
{
  int vetor[TAMANHO] = {0};
  infoNumVetor info = {0};

  ifstream fin;
  fin.open("numeros.txt");

  if (!fin.is_open())
  {
    cout << "Abertura do arquivo numeros.txt falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  int i = 0;
  while (i < TAMANHO && fin >> vetor[i])
  {
    i++;
  }

  fin.close();

  info = menorMaior(vetor, i);

  cout << "A posição " << info.posicaoMenor + 1 << " contém o menor número (" << info.menor << ")" << endl;
  cout << "A posição " << info.posicaoMaior + 1 << " contém o maior número (" << info.maior << ")" << endl;

  return 0;
}

infoNumVetor menorMaior(int vetor[], int tamanho)
{
  infoNumVetor info = {0};

  info.menor = vetor[0];
  info.posicaoMenor = 0;
  info.maior = vetor[0];
  info.posicaoMaior = 0;

  for (int i = 1; i < tamanho; i++)
  {
    if (vetor[i] < info.menor)
    {
      info.menor = vetor[i];
      info.posicaoMenor = i;
    }
    if (vetor[i] > info.maior)
    {
      info.maior = vetor[i];
      info.posicaoMaior = i;
    }
  }

  return info;
}