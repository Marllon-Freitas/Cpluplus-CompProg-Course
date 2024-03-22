/*
Escreva um programa que peça ao usuário para digitar um nome de arquivo texto
e uma palavra que ele deseja procurar neste arquivo. O programa deve dizer se a
palavra está ou não presente no arquivo.

Nome do arquivo: texto.txt
Palavra: homens
A palavra "homens" está presente no texto.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  char nomeArquivo[50], palavra[100];
  cout << "Digite o nome do arquivo: ";
  cin >> nomeArquivo;
  cout << "Digite a palavra que deseja procurar: ";
  cin >> palavra;

  ifstream arquivo(nomeArquivo);
  if (!arquivo.is_open())
  {
    {
      cout << "Não foi possível abrir o arquivo " << nomeArquivo << endl;
      cout << "Programa encerrando.\n";
      exit(EXIT_FAILURE);
    }
  }

  char palavraArquivo[100];
  bool encontrou = false;
  while (arquivo >> palavraArquivo)
  {
    if (strcmp(palavra, palavraArquivo) == 0)
    {
      encontrou = true;
      break;
    }
  }

  if (encontrou)
  {
    cout << "A palavra '" << palavra << "' foi encontrada no arquivo!" << endl;
  }
  else
  {
    cout << "A palavra '" << palavra << "' não foi encontrada no arquivo." << endl;
  }
  return 0;
}