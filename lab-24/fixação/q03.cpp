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

struct mensagem
{
  char texto[80];
  int corTexto;
  int corFundo;
};

int main()
{
  ifstream fin;
  mensagem m;
  fin.open("mensagem.bin", ios_base::in | ios_base::binary);

  if (!fin.is_open())
  {
    cout << "Erro ao abrir o arquivo mensagem.bin" << endl;
    return 1;
  }

  while (fin.read((char *)&m, sizeof(mensagem)))
  {
    cout << m.texto << " " << m.corTexto << " " << m.corFundo << endl;
  }

  fin.close();
  cout << endl;

  ofstream fout;
  fout.open("mensagem.bin", ios_base::out | ios_base::app | ios_base::binary);

  if (!fout.is_open())
  {
    cout << "Erro ao abrir o arquivo mensagem.bin" << endl;
    return 1;
  }

  char opcao;
  cout << "Mensagens Coloridas" << endl;
  cout << "-------------------" << endl;
  cout << "[A]rmazenar" << endl;
  cout << "[E]xibir" << endl;
  cout << "[S]air" << endl;
  cout << "-------------------" << endl;
  cout << "Opção: ";
  cin >> opcao;

  if (opcao == 'A')
  {
    cout << "Sua mensagem: ";
    cin.ignore();
    cin.getline(m.texto, 80);

    cout << "Cor do texto: ";
    cin >> m.corTexto;

    cout << "Cor do fundo: ";
    cin >> m.corFundo;

    fout.write((char *)&m, sizeof(mensagem));

    cout << "Texto colorido foi armazenado." << endl;
  }
  else if (opcao == 'E')
  {
    cout << "Texto: " << m.texto << endl;
    cout << "Cor do texto: " << m.corTexto << endl;
    cout << "Cor do fundo: " << m.corFundo << endl;
  }
  else if (opcao == 'S')
  {
    return 0;
  }

  fout.close();

  return 0;
}