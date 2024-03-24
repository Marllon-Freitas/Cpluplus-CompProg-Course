/*
Construa um programa que leia um número desconhecido de peixes de um
arquivo texto e grave estas informações em um arquivo binário que possa ser lido pelo programa da primeira
questão. Compare o tamanho dos arquivos texto e binário.

O arquivo texto é formatado como no exemplo abaixo: o nome do peixe, o peso em gramas e o comprimento em centímetros.
Dourado 250 20
Tilapia 300 25
Carpa 400 40
Sardinha 50 10
Atum 150 15

crie um arquivo.txt no mesmo diretório do executável com o conteúdo acima
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct peixe
{
  char nome[20];
  unsigned peso;
  float comp;
};

int main()
{
  ifstream fin;
  peixe p;
  char nome[50];
  int peso, comprimento;

  fin.open("pescado.txt");

  if (!fin.is_open())
  {
    cout << "Abertura do arquivo pescado.txt falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  ofstream fout;
  fout.open("pescado.bin", ios_base::out | ios_base::app | ios_base::binary);

  if (!fout.is_open())
  {
    cout << "Erro ao abrir o arquivo pescado.bin" << endl;
    return 1;
  }

  while (!fin.eof())
  {
    fin >> nome >> peso >> comprimento;
    strcpy(p.nome, nome);
    p.peso = peso;
    p.comp = comprimento;
    fout.write((char *)&p, sizeof(peixe));
  }

  fout.close();
  return 0;
}