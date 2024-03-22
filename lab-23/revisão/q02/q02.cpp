/*
Considere o arquivo texto apresentado abaixo:

Ontem, às 12 horas, faziam 40 graus ao sol e 38 à sombra.
Eu andei 100 metros antes de alcançar um lugar à sombra.
Foram 5 minutos de sofrimento.

Escreva um programa para ler todos os números do texto e gravá-los em outro
arquivo.

12
40
38
100
5

Utilize o código abaixo como ponto de partida:

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream fin;
  fin.open("sol.txt");
  if (!fin.is_open())
  {
  cout << "Abertura do arquivo sol.txt falhou!" << endl;
  cout << "Programa encerrando.\n";
  exit(EXIT_FAILURE);
  }
  ofstream fout;
  fout.open("num.txt");
  if (!fout.is_open())
  {
  cout << "Abertura do arquivo num.txt falhou!" << endl;
  cout << "Programa encerrando.\n";
  exit(EXIT_FAILURE);
  }
  // -----------------------
  // insira seu código aqui
  // -----------------------
  fin.close();
  fout.close();
  cout << "Pronto!" << endl;
  return 0;
}
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream fin;
  fin.open("sol.txt");
  if (!fin.is_open())
  {
    cout << "Abertura do arquivo sol.txt falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  ofstream fout;
  fout.open("num.txt");

  if (!fout.is_open())
  {
    cout << "Abertura do arquivo num.txt falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  char texto[100];
  int num;

  fin >> num;
  while (!fin.eof())
  {
    if (fin.good())
    {
      fout << num << endl;
    }
    else
    {
      fin.clear();
      fin >> texto;
    }
    fin >> num;
  }
  fin.close();
  fout.close();
  cout << "Pronto!" << endl;
  return 0;
}