/*
Construa um programa que leia um arquivo texto contendo o nome e as três
notas de vários alunos (uma quantidade indefinida de alunos). Escreva em outro
arquivo texto o nome e a situação do aluno (aprovado, quarta prova ou
reprovado).

Wilson 8.2 7.5 5.0
Silvio 3.2 7.5 7.2
Luis 6.0 7.0 9.0
Pedro 3.0 3.0 1.0

Levando em consideração que a média para aprovação é 7.0, o aluno será aprovado
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  const float MEDIA_APROVACAO = 7.0;
  ifstream fin;
  char nome[50];
  float n1 = 0.0, n2 = 0.0, n3 = 0.0, media = 0.0;

  fin.open("notas.txt");
  if (!fin.is_open())
  {
    cout << "Abertura do arquivo notas.txt falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  ofstream fout;
  fout.open("resultados.txt");
  if (!fout.is_open())
  {
    cout << "Abertura do arquivo resultados.txt falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  while (!fin.eof())
  {
    fin >> nome >> n1 >> n2 >> n3;
    media = (n1 + n2 + n3) / 3.0;
    if (media >= MEDIA_APROVACAO)
    {
      fout << nome << " Aprovado" << endl;
    }
    else if (media < MEDIA_APROVACAO)
    {
      fout << nome << " Reprovado" << endl;
    }
    else
    {
      fout << nome << " Quarta Prova" << endl;
    }
  }
  fin.close();

  return 0;
}