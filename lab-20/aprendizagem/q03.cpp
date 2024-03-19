/*
Usando instruções de repetição e desvio, escreva um programa que leia uma
entrada de texto até o caractere #. O programa deve exibir os caracteres lidos,
substituindo cada ponto por uma exclamação e cada exclamação por duas
exclamações. Ao final mostre o número de substituições feitas.

Digite um texto (# para finalizar):
Ontem eu andei sob chuva forte! Eram 12 em ponto.
Ontem eu andei sob chuva forte!! Eram 12 em ponto!
Fiquei sujo e molhado. Que tristeza!# Ainda peguei uma gripe.
Fiquei sujo e molhado! Que tristeza!!
Substituições: 4
*/

#include <iostream>
using namespace std;

int main()
{
  char ch;
  int qtdSubstituicoes = 0;
  cout << "Digite um texto (# para finalizar):\n";

  cin.get(ch);
  while (ch != '#')
  {
    if (ch == '.')
    {
      qtdSubstituicoes++;
      ch = '!';
    }
    else if (ch == '!')
    {
      qtdSubstituicoes++;
      cout << ch;
    }
    cout << ch;
    cin.get(ch);
  }

  cout << endl;
  cout << "Substituições: " << qtdSubstituicoes << endl;
  return 0;
}