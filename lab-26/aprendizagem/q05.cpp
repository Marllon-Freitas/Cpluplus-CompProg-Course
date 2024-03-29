/*
Construa um registro para armazenar um conjunto de caracteres. O registro deve
guardar um ponteiro para um vetor dinâmico de caracteres e o tamanho do vetor,
como mostrado abaixo:

struct CharSet
{
 char * str; // ponteiro para vetor dinâmico
 int tam; // tamanho do vetor
};
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct CharSet
{
  char *str; // ponteiro para vetor dinâmico
  int tam;   // tamanho do vetor
};

int main()
{
  CharSet conjunto;
  conjunto.tam = 13;
  conjunto.str = new char[conjunto.tam];
  strcpy(conjunto.str, "Hello world!");
  cout << conjunto.str << endl;
  delete[] conjunto.str;
  return 0;
}