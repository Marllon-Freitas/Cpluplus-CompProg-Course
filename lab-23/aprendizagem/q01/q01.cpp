/*
Escreva um programa que leia um arquivo de código fonte C++ indicado pelo
usuário. O programa deve criar um outro arquivo contendo o código com as
seguintes alterações:

Inserir no início do arquivo um comentário com o nome do arquivo
// nomeDoArquivo.cpp
• Inserir no início do arquivo a instrução
#define print cout
• Substituir as ocorrências de cout por print

O novo arquivo deve ter o mesmo nome do arquivo original acrescido de um _m.
Por exemplo, se o arquivo indicado se chamar teste.cpp, deve ser gerado um
arquivo chamado teste_m.cpp.

#include <iostream>
using namespace std;
int main()
{
  int num = 5;
  cout << num << endl;

  return 0;
}

// teste_m.cpp
#define print cout
#include <iostream>
using namespace std;
int main()
{
  int num = 5;
  print << num << endl;

  return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
  char nomeArquivo[50];
  ifstream fin;
  cout << "Digite o nome do arquivo de código fonte C++: ";
  cin >> nomeArquivo;

  fin.open(nomeArquivo);
  if (!fin.is_open())
  {
    cout << "Abertura do arquivo " << nomeArquivo << " falhou.\n";
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  char novoNomeArquivo[50];
  strcpy(novoNomeArquivo, nomeArquivo);

  char *ponto = strrchr(novoNomeArquivo, '.');

  if (ponto)
  {
    memmove(ponto + 2, ponto, strlen(ponto) + 1);
    novoNomeArquivo[ponto - novoNomeArquivo + 0] = '_';
    novoNomeArquivo[ponto - novoNomeArquivo + 1] = 'm';
  }

  ofstream fout;
  fout.open(novoNomeArquivo);
  if (!fout.is_open())
  {
    cout << "Não foi possível criar o arquivo " << novoNomeArquivo << "\n";
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  fout << "// " << novoNomeArquivo << "\n";
  fout << "#define print cout\n";

  char linha[256];
  while (fin.getline(linha, 256))
  {
    char novaLinha[256] = "";
    for (int i = 0; linha[i] != '\0'; i++)
    {
      if (strncmp(&linha[i], "cout <<", 7) == 0)
      {
        strcat(novaLinha, "print <<");
        i += 6;
      }
      else
      {
        int len = strlen(novaLinha);
        novaLinha[len] = linha[i];
        novaLinha[len + 1] = '\0';
      }
    }
    fout << novaLinha << "\n";
  }

  fin.close();
  fout.close();

  return 0;
}