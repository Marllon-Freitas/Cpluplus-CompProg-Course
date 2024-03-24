/*
No exercício anterior, se o usuário digitar apenas espaços para a mensagem, o
resultado será uma faixa colorida com a cor de fundo. Podemos usar isso para criar
uma imagem formada apenas por caracteres de espaço coloridos.
Construa um programa que peça a largura e altura da imagem e leia do usuário
uma matriz de números. Cada número de 3 dígitos representa a cor de um “bloco”
da imagem. Guarde em um arquivo binário os valores de altura, largura e de cada
bloco da imagem. Assim como o programa anterior, construa um menu para
controlar as opções de armazenamento e exibição da imagem.

Imagens Coloridas
-----------------
[A]rmazenar
[E]xibir
[S]air
-----------------
Opção: [A]
Largura: 5
Altura : 5
Defina 5 cores em cada linha
#1: 220 220 220 220 220
#2: 220 000 220 000 220
#3: 220 220 220 220 220
#4: 220 000 000 000 220
#5: 220 220 220 220 220
Imagem colorida foi armazenada.
*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct imagem
{
  int largura;
  int altura;
  int bloco[80][80];
};

int main()
{
  imagem img;
  char opcao;
  int i, j;

  ifstream fin;
  fin.open("imagem.bin", ios_base::in | ios_base::binary);

  if (!fin.is_open())
  {
    cout << "Erro ao abrir o arquivo imagem.bin" << endl;
    return 1;
  }

  fin.read((char *)&img, sizeof(imagem));
  fin.close();

  ofstream fout;
  fout.open("imagem.bin", ios_base::out | ios_base::app | ios_base::binary);

  if (!fout.is_open())
  {
    cout << "Erro ao abrir o arquivo imagem.bin" << endl;
    return 1;
  }

  cout << "Imagens Coloridas" << endl;
  cout << "-----------------" << endl;
  cout << "[A]rmazenar" << endl;
  cout << "[E]xibir" << endl;
  cout << "[S]air" << endl;
  cout << "-----------------" << endl;
  cout << "Opção: ";
  cin >> opcao;

  switch (opcao)
  {
  case 'A':
    cout << "Largura: ";
    cin >> img.largura;
    cout << "Altura: ";
    cin >> img.altura;

    for (i = 0; i < img.altura; i++)
    {
      cout << "Defina " << img.largura << " cores em cada linha" << endl;
      cout << "#" << i + 1 << ": ";
      for (j = 0; j < img.largura; j++)
      {
        cin >> img.bloco[i][j];
      }
    }

    fout.write((char *)&img, sizeof(imagem));
    cout << "Imagem colorida foi armazenada." << endl;
    break;

  case 'E':
    cout << "Imagem colorida" << endl;
    cout << "Largura: " << img.largura << endl;
    cout << "Altura: " << img.altura << endl;

    for (i = 0; i < img.altura; i++)
    {
      for (j = 0; j < img.largura; j++)
      {
        cout << img.bloco[i][j] << " ";
      }
      cout << endl;
    }
    break;
  case 'S':
    return 0;
  }

  fout.close();
  return 0;
}