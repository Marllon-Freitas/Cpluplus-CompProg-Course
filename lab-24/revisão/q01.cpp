/*
Use o registro peixe definido abaixo.

struct peixe
{
 char nome[20];
 unsigned peso;
 float comp;
};

a. Construa um programa que leia do usuário os dados de um único peixe e
salve-os em um arquivo binário. Cada execução do programa deve
acrescentar um peixe ao arquivo.

b. Modifique o programa obtido no item anterior para ler e exibir os peixes
cadastrados no arquivo binário antes de permitir que o usuário faça um
novo cadastro.
*/

#include <iostream>
#include <fstream>
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
  fin.open("pescado.bin", ios_base::in | ios_base::binary);

  if (!fin.is_open())
  {
    cout << "Erro ao abrir o arquivo pescado.bin" << endl;
    return 1;
  }

  while (fin.read((char *)&p, sizeof(peixe)))
  {
    cout << p.nome << " " << p.peso << " " << p.comp << endl;
  }

  fin.close();
  cout << endl;

  ofstream fout;
  fout.open("pescado.bin", ios_base::out | ios_base::app | ios_base::binary);

  if (!fout.is_open())
  {
    cout << "Erro ao abrir o arquivo pescado.bin" << endl;
    return 1;
  }

  cout << "Digite o nome do peixe: ";
  cin >> p.nome;
  cout << "Digite o peso do peixe: ";
  cin >> p.peso;
  cout << "Digite o comprimento do peixe: ";
  cin >> p.comp;

  fout.write((char *)&p, sizeof(peixe));
  fout.close();

  return 0;
}