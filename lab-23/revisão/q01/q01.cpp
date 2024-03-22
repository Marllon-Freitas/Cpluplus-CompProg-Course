/*
Considerando o arquivo texto apresentado, o que o trecho de código abaixo faz?

A leitura de arquivos pode ser realizada por caractere,
por palavras ou por linhas.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream fin;
  fin.open("intro.txt");
  if (!fin.is_open())
  {
  cout << "Abertura do arquivo falhou!" << endl;
  cout << "Programa encerrando.\n";
  exit(EXIT_FAILURE);
  }
  char ch;
  fin >> ch;
  fin.close();
  cout << ch << endl;
  return 0;
}

Modifique o programa para ler do arquivo texto:
a. O oitavo caractere
b. Uma palavra
c. A quinta palavra
d. Uma linha
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream fin;
  fin.open("intro.txt");

  if (!fin.is_open())
  {
    cout << "Abertura do arquivo falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  // a. O oitavo caractere
  // char oitavoCaractere;
  // for (int i = 0; i < 8; i++)
  //	fin.get(oitavoCaractere);
  // cout << oitavoCaractere << endl;
  // fin.close();

  // b. Uma palavra
  // char palavra[50];
  // fin >> palavra;
  // fin.close();
  // cout << palavra << endl;

  // c. A quinta palavra
  // char quintaPalavra[50];
  // for (int i = 0; i < 5; i++) {
  //	fin >> quintaPalavra;
  //	cout << quintaPalavra << endl;
  //}
  // fin.close();

  // d. Uma linha
  char linha[100];
  fin.getline(linha, 100);
  fin.close();
  cout << linha << endl;

  return 0;
}