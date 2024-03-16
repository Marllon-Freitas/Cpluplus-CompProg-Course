/*
Escreva um programa para descobrir se uma palavra é um palíndromo. O
programa deve pedir ao usuário para digitar uma palavra que deve ser
armazenada em um vetor de caracteres. Use um laço para copiar a palavra em
outro vetor de caracteres, invertendo a sua ordem. Por fim use as instruções
abaixo para exibir se a palavra é um palíndromo ou não.

if (strcmp(palavra, invertida))
 cout << "A palavra não é um palíndromo\n";
else
 cout << "A palavra é um palíndromo\n";

Digite uma palavra: animal
Palavra invertida: lamina
A palavra não é palíndromo.

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char palavra[20] = "animal", palavraInvertida[20];
  cout << "Digite uma palavra: " << endl;
  cin >> palavra;

  for (int i = strlen(palavra) - 1, j = 0; i >= 0; i--, j++)
  {
    palavraInvertida[j] = palavra[i];
  }
  if (strcmp(palavra, palavraInvertida))
    cout << "A palavra não é um palíndromo\n";
  else
    cout << "A palavra é um palíndromo\n";
}