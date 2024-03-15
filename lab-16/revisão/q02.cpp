/*
Escreva um laço for que exiba o conteúdo de um vetor de caracteres que contém
uma string. O laço deve exibir cada caractere individualmente até atingir o
caractere nulo ('\0').
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
P r a t i q u e m u i t o \0

*/

#include <iostream>
using namespace std;

int main()
{
  char vetor[] = "Pratiquemuito";
  for (int i = 0; vetor[i] != '\0'; i++)
    cout << vetor[i] << " ";
  cout << endl;
  return 0;
}