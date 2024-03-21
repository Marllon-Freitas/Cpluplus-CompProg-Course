/*
Escreva um programa que apresente um menu com 4 opções, cada uma rotulada
por uma letra. Se o usuário responder com uma letra diferente das quatro opções,
o programa deve pedir ao usuário que entre com uma opção válida, até que ele o
faça. O programa deve usar um switch para selecionar e exibir uma frase em
resposta a uma escolha válida.

Menu do Sistema
a) Inserir
b) Remover
c) Buscar
d) Sair
Escolha: f
Opção Inválida
Escolha: g
Opção Inválida
Escolha: 4
Opção Inválida
Escolha: a
Inserindo elementos...
Escolha: b
Removendo elementos...
Escolha: c
Buscando elementos...
Escolha: d
Tchau!
*/

#include <iostream>
using namespace std;

int main()
{
  char escolha;
  cout << "Menu do Sistema\n";
  cout << "a) Inserir\n";
  cout << "b) Remover\n";
  cout << "c) Buscar\n";
  cout << "d) Sair\n\n";
  do
  {
    cout << "Escolha: ";
    cin >> escolha;
    switch (escolha)
    {
    case 'a':
      cout << "Inserindo elementos...\n\n";
      break;
    case 'b':
      cout << "Removendo elementos...\n\n";
      break;
    case 'c':
      cout << "Buscando elementos...\n\n";
      break;
    case 'd':
      cout << "Tchau!\n";
      break;
    default:
      cout << "Opção Inválida\n\n";
    }
  } while (escolha != 'd');
  return 0;
}