/*
Funções do tipo call-back também são muito empregadas na criação de
interfaces com o usuário (janelas, botões, caixas de texto, etc.). Considere uma
função CreateButton que receba a posição x, y em que o botão deve ser
desenhado dentro da janela e uma função a ser executada quando o botão for
pressionado. O código abaixo está tentando simular esta situação.

Complete o código criando a função CreateButton. Ela deve exibir uma
mensagem informando a posição da tela em que o botão foi criado e atribuir a
função recebida para o ponteiro global OnClick de forma que a saída seja como
a seguir:

Botão criado na posição 10,10
Pressionar Botão? s
Botão Pressionado!

#include <iostream>
using namespace std;
void (*OnClick)(void);
// -------------------------------
// crie aqui a função CreateButton
// -------------------------------
void Mensagem()
{
  cout << "Botão Pressionado!" << endl;
}
int main()
{
  CreateButton(10, 10, Mensagem);
  // simulando pressionamento
  cout << "Pressionar Botão? ";
  char resposta;
  cin >> resposta;
  if (resposta == 'S' || resposta == 's')
    OnClick();
  return 0;
}
*/

#include <iostream>
using namespace std;

void (*OnClick)(void);

void CreateButton(int x, int y, void (*f)(void))
{
  OnClick = f;
  cout << "Botão criado na posição " << x << "," << y << endl;
}

void Mensagem()
{
  cout << "Botão Pressionado!" << endl;
}

int main()
{
  CreateButton(10, 10, Mensagem);
  // simulando pressionamento
  cout << "Pressionar Botão? ";
  char resposta;
  cin >> resposta;
  if (resposta == 'S' || resposta == 's')
    OnClick();
  return 0;
}
