/*
Construa um programa que leia um número desconhecido de peixes de um arquivo
texto, chamado “pescado.txt”, e exiba a quantidade total de quilos de peixe
pescado. O arquivo é formatado como no exemplo abaixo: o nome do peixe, o peso
em gramas e o comprimento em centímetros.

Dourado 250 20
Tilapia 300 25
Carpa 400 40
Sardinha 50 10
Atum 150 15
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin;
  char nome[50];
  float total = 0.0;
  int peso, comprimento;

  fin.open("pescado.txt");
  if (!fin.is_open())
  {
    cout << "Abertura do arquivo pescado.txt falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  while (!fin.eof())
  {
    fin >> nome >> peso >> comprimento;
    total += peso;
  }
  fin.close();

  cout << "Total de peixes pescados: " << total / 1000 << " kg" << endl;

  return 0;
}