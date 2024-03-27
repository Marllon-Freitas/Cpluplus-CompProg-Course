/*
Escreva uma função com o protótipo abaixo. Ela deve substituir todas as
ocorrências do caractere c1 por c2 na string str, retornando o número de
substituições feitas.

int subst(char * str, char c1, char c2);
*/

#include <iostream>
using namespace std;

int subst(char *str, char c1, char c2);

int main()
{
  char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
  char c1 = 'o';
  char c2 = 'k';

  cout << "Substituições: " << subst(str, c1, c2) << endl;
  cout << "String modificada: " << str << endl;

  return 0;
}

int subst(char *str, char c1, char c2)
{
  int substituicoes = 0;

  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == c1)
    {
      str[i] = c2;
      substituicoes++;
    }
  }

  return substituicoes;
}