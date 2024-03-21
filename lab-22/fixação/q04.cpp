/*
Escreva um programa que leia a entrada do usuário palavra por palavra até que
seja achada uma palavra apenas com a letra 's'. O programa deve então relatar o
número de palavras que começam por vogais, o número de palavras que começam
por consoantes, e o número de palavras que não se encaixam nos casos anteriores.
A saída do programa deve ser semelhante ao exemplo abaixo:

Digite palavras (s para sair):
Os 12 bravos homens lutaram
ate a morte naqueles 15 minutos de batalha. s
3 palavras começam por vogais
8 palavras começam por consoantes
2 outras palavras

Dica: uma solução é usar isalpha() para discriminar entre palavras que
começam com letras e aquelas que não começam e então usar um if ou switch
para identificar aquelas que começam com vogal.
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  char palavra[30];
  int vogais = 0, consoantes = 0, outras = 0;

  cout << "Digite palavras (s para sair):\n";

  while (cin >> palavra && strcmp(palavra, "s"))
  {
    if (isalpha(palavra[0]))
    {
      char primeiraLetra = tolower(palavra[0]);
      if (primeiraLetra == 'a' || primeiraLetra == 'e' || primeiraLetra == 'i' || primeiraLetra == 'o' || primeiraLetra == 'u')
      {
        vogais++;
      }
      else
      {
        consoantes++;
      }
    }
    else
    {
      outras++;
    }
  }
  cout << vogais << " palavras começam por vogais\n";
  cout << consoantes << " palavras começam por consoantes\n";
  cout << outras << " outras palavras\n";
  return 0;
}