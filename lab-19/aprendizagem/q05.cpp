/*
Construa uma matriz estática 16x16 para armazenar os caracteres da tabela ASCII.
Construa laços aninhados para preencher a matriz com os caracteres de código 0 a
255. Os caracteres de código 0 a 15 devem ficar na primeira coluna da matriz, de
código 16 a 31 na segunda coluna e assim por diante.
Em seguida, pergunte ao usuário qual região da tabela ele tem interesse, crie
uma matriz dinâmica para guardar apenas a região (retangular) especificada e
copie os caracteres correspondentes da matriz estática para a matriz dinâmica.
Por fim exiba a matriz dinâmica.

Entre com as coordenadas da região de interesse
De : (1,4)
Até: (8,7)
A Q a q
B R b r
C S c s
D T d t
E U e u
F V f v
G W g w
H X h x

Sugestão: implemente a matriz dinâmica usando as duas soluções vistas em sala.
*/

#include <iostream>
using namespace std;

int main()
{
  char matrizEstatica[16][16];
  int linhaInicial, colunaInicial, linhaFinal, colunaFinal, linhas, colunas;

  for (int i = 0; i < 16; i++)
  {
    for (int j = 0; j < 16; j++)
    {
      matrizEstatica[i][j] = char(i * 16 + j);
    }
  }

  cout << "Entre com as coordenadas da região de interesse" << endl;
  cout << "De: ";
  cin >> linhaInicial >> colunaInicial;
  cout << "Até: ";
  cin >> linhaFinal >> colunaFinal;

  if (linhaInicial < 0 || linhaInicial >= 16 || colunaInicial < 0 ||
      colunaInicial >= 16 || linhaFinal < 0 || linhaFinal >= 16 ||
      colunaFinal < 0 || colunaFinal >= 16)
  {
    cout << "Coordenadas inválidas!" << endl;
    return 1;
  }

  linhas = linhaFinal - linhaInicial + 1;
  colunas = colunaFinal - colunaInicial + 1;

  char **mat = new char *[linhas];
  for (int i = 0; i < linhas; i++)
  {
    mat[i] = new char[colunas];
  }

  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
      mat[i][j] = matrizEstatica[i + linhaInicial][j + colunaInicial];
    }
  }

  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < linhas; i++)
  {
    delete[] mat[i];
  }

  return 0;
}