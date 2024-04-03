/*
Construa uma função que leia um certo número de linhas do arquivo texto exibido
abaixo e mostre um sumário das informações. Em cada linha existem 4 valores: o
número do laboratório, a quantidade de exercícios de revisão, a quantidade de
exercícios de fixação e a quantidade de exercícios de aprendizagem.

a primeira unidade é do 0 ao 9
a segunda unidade é do 10 ao 19
a terceira unidade é do 20 ao 29

0 0 0 7
1 2 8 4
2 6 4 5
3 2 3 6
4 2 3 6
5 2 3 7
6 1 3 5
7 0 5 5
8 0 5 4
9 1 4 5
10 0 3 4
11 0 5 5
12 2 4 6
13 1 2 4
14 5 4 4
15 4 5 5
16 4 2 4
17 4 3 5
18 4 3 6
19 2 4 5
20 5 4 4
21 5 4 7
22 2 5 5
23 2 5 3
24 3 4 3
25 3 3 4
26 3 3 5
27 2 3 3
28 1 4 3
29 0 5 3

1a unidade
-----------
Revisão: 16
Fixação: 38
Aprendi: 54
-----------
Total: 108
-----------
2a unidade
-----------
Revisão: 26
Fixação: 35
Aprendi: 48
-----------
Total: 109
-----------
3a unidade
-----------
Revisão: 26
Fixação: 40
Aprendi: 40
-----------
Total: 106

A função deve receber uma referência para um objeto do tipo ifstream, o número
da unidade e a quantidade de linhas que devem ser lidas. Use um argumento
padrão igual a 10 para a quantidade de linhas. A função deve funcionar com o
código abaixo:

int main()
{
  ifstream fin;
  fin.open("stats.txt");
  unidade(fin, 1);
  unidade(fin, 2);
  unidade(fin, 3);
  fin.close();
}
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void unidade(ifstream &fin, int unidade, int linhas = 10);

int main()
{
  ifstream fin;
  fin.open("stats.txt");
  if (!fin.is_open())
  {
    cout << "Erro ao abrir o arquivo stats.txt" << endl;
    return 1;
  }
  unidade(fin, 1);
  unidade(fin, 2);
  unidade(fin, 3);
  fin.close();

  return 0;
}

void unidade(ifstream &fin, int unidade, int linhas)
{
  int lab, rev, fix, apr;
  int totalRev = 0, totalFix = 0, totalApr = 0;

  for (int i = 0; i < linhas; i++)
  {
    fin >> lab >> rev >> fix >> apr;
    if (lab / 10 == unidade - 1)
    {
      totalRev += rev;
      totalFix += fix;
      totalApr += apr;
    }
  }

  cout << unidade << "a unidade" << endl;
  cout << "-----------" << endl;
  cout << "Revisão: " << totalRev << endl;
  cout << "Fixação: " << totalFix << endl;
  cout << "Aprendi: " << totalApr << endl;
  cout << "-----------" << endl;
  cout << "Total: " << totalRev + totalFix + totalApr << endl;
  cout << "-----------" << endl;
}