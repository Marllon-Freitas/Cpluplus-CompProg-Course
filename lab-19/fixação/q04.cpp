/*
Escreva um programa que peça ao usuário para entrar com um caractere. O
programa deve usar uma função cujo único propósito é exibir 20 vezes na tela o
caractere recebido como argumento, formando uma linha. Crie o programa
principal e a função de forma a obter o seguinte resultado:

Digite um caractere: -
--------------------
Programando em C++
--------------------
*/

#include <iostream>
using namespace std;

void exibirLinha(char);

int main()
{
  char caractere;
  cout << "Digite um caractere: ";
  cin >> caractere;
  exibirLinha(caractere);
  cout << "Programando em C++" << endl;
  exibirLinha(caractere);
  return 0;
}

void exibirLinha(char caractere)
{
  for (int i = 0; i < 20; i++)
  {
    cout << caractere;
  }
  cout << endl;
}