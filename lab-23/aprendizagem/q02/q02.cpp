/*
Uma palavra é um palíndromo se a sequência de letras que a forma é a mesma
quando lida da esquerda para a direita ou da direita para a esquerda (ex: raiar).
Escreva uma função que seja capaz de descobrir se uma palavra é um palíndromo.
Nesta verificação desconsidere maiúsculas e minúsculas (i.e. Ana é um
palíndromo).

O programa deve ler um número indefinido de palavras de um arquivo texto e,
para cada palavra, verificar se ela é ou não um palíndromo. Exiba a quantidade de
palíndromos encontrados no texto, bem como as palavras que são palíndromos,
como mostrado abaixo:

No raiar do dia Ana observou que esse radar estava quebrado

Arquivo: palindromos.txt
raiar
ana
esse
radar
Foram encontrados 4 palíndromos neste arquivo.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

bool is_palindrome(char[]);

int main()
{
  ifstream fin("palindromos.txt");
  if (!fin)
  {
    cout << "Não foi possível abrir o arquivo.\n";
    return 1;
  }

  cout << "Arquivo: palindromos.txt\n";

  char word[50];
  int count = 0;
  while (fin >> word)
  {
    if (is_palindrome(word))
    {
      cout << word << "\n";
      count++;
    }
  }

  fin.close();

  cout << "Foram encontrados " << count << " palíndromos neste arquivo.\n";

  return 0;
}

bool is_palindrome(char word[])
{
  int len = strlen(word);
  for (int i = 0; i < len / 2; i++)
  {
    if (tolower(word[i]) != tolower(word[len - i - 1]))
    {
      return false;
    }
  }
  return true;
}