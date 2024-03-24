/*
O Exercício de Revisão 1 do Laboratório 6 (Tipos Inteiros) mostra como usar
códigos de Escape para mudar a cor do texto exibido em um terminal. A sequência
de caracteres "\033[38;5;000;48;5;154m" define a cor 000 para o texto e 154 para
o fundo. Considerando que as cores são valores de 3 dígitos de 000 a 255, construa
um programa para ler do usuário um texto com no máximo 80 caracteres, um
código para a cor do texto e um código para a cor do fundo. Guarde essas
informações em um arquivo binário. O usuário deve ter a opção de guardar uma
nova frase ou exibir a frase já armazenada através de um menu, como mostrado no
exemplo abaixo.

Mensagens Coloridas
-------------------
[A]rmazenar
[E]xibir
[S]air
-------------------
Opção: [A]
Sua mensagem: Feliz Aniversário!
Cor do texto: 130
Cor do fundo: 038
Texto colorido foi armazenado.
*/
/*
O Exercício de Revisão 1 do Laboratório 6 (Tipos Inteiros) mostra como usar
códigos de Escape para mudar a cor do texto exibido em um terminal. A sequência
de caracteres "\033[38;5;000;48;5;154m" define a cor 000 para o texto e 154 para
o fundo. Considerando que as cores são valores de 3 dígitos de 000 a 255, construa
um programa para ler do usuário um texto com no máximo 80 caracteres, um
código para a cor do texto e um código para a cor do fundo. Guarde essas
informações em um arquivo binário. O usuário deve ter a opção de guardar uma
nova frase ou exibir a frase já armazenada através de um menu, como mostrado no
exemplo abaixo.

Mensagens Coloridas
-------------------
[A]rmazenar
[E]xibir
[S]air
-------------------
Opção: [A]
Sua mensagem: Feliz Aniversário!
Cor do texto: 130
Cor do fundo: 038
Texto colorido foi armazenado.
*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct imagem
{
  int largura;
  int altura;
  int bloco[10][10];
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
  fout.open("imagem.bin", ios_base::out | ios_base::binary);

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
        cout << "\033[48;5;" << img.bloco[i][j] % 256 << "m  \033[0m";
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