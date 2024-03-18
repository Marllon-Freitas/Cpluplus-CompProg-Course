/*
Construa um programa que peça ao usuário para digitar um texto, encerrando a
entrada apenas quando o caractere @ for lido. Depois do @ ser lido, mostre o texto
recebido.

Digite um texto:
Eu enviei uma mensagem para @Joaozinho sobre esse problema.
Eu enviei uma mensagem para

*/

#include <iostream>
using namespace std;

int main()
{
  char c;
  cout << "Digite um texto: " << endl;
  cin.get(c);
  while (c != '@')
  {
    cout << c;
    cin.get(c);
  }
  cout << endl;
  return 0;
}