/*
Escreva um programa que leia um valor inteiro do usuário e armazene-o em um
arquivo binário chamado “interger.bin”. Ao entrar, o programa deve verificar se o
arquivo “integer.bin” existe, e em caso positivo, deve ler e exibir o número na tela.

Exemplo 1:
Digite um inteiro: 43
Número armazenado no arquivo integer.bin.

Exemplo 2:
Arquivo integer.bin encontrado!
Ele contém o número 43.
Digite um inteiro: 52
Número armazenado no arquivo integer.bin.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream fin;
  int n;
  fin.open("interger.bin", ios_base::in | ios_base::binary);

  if (!fin.is_open())
  {
    cout << "Erro ao abrir o arquivo interger.bin" << endl;
    return 1;
  }

  while (fin.read((char *)&n, sizeof(n)))
  {
    cout << "Arquivo integer.bin encontrado! \n";
    cout << "Ele contém o número ";
    cout << n << endl;
  }

  fin.close();
  cout << endl;

  ofstream fout;
  fout.open("interger.bin", ios_base::out | ios_base::app | ios_base::binary);

  if (!fout.is_open())
  {
    cout << "Erro ao abrir o arquivo interger.bin" << endl;
    return 1;
  }

  cout << "Digite um inteiro: ";
  cin >> n;

  fout.write((char *)&n, sizeof(n));

  cout << "Número armazenado no arquivo integer.bin." << endl;
  fout.close();

  return 0;
}