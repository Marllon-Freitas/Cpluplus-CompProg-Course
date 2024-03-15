/*
Faça um programa que leia quatro palavras pelo teclado e armazene-as em vetores
de caracteres distintos. Em seguida calcule o tamanho de um vetor de caracteres
capaz de conter as quatro palavras juntas, aloque dinamicamente a memória para
esta nova string e copie todas as palavras lidas para essa única string. Por fim
apresente esta string única na tela.

Digite 4 palavras:
Ontem
Hoje
Amanhã
Sempre
Concatenando as palavras obtém-se:
Ontem Hoje Amanhã Sempre

*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int main()
{
  char palavra1[20], palavra2[20], palavra3[20], palavra4[20];

  cout << "Digite 4 palavras: ";
  cin >> palavra1 >> palavra2 >> palavra3 >> palavra4;

  int tamanhoTotal = strlen(palavra1) + strlen(palavra2) + strlen(palavra3) + strlen(palavra4) + 4;

  char *novaString = new char[tamanhoTotal];

  strcpy(novaString, palavra1);
  strcat(novaString, " ");
  strcat(novaString, palavra2);
  strcat(novaString, " ");
  strcat(novaString, palavra3);
  strcat(novaString, " ");
  strcat(novaString, palavra4);

  cout << "Concatenando as palavras obtém-se: " << novaString << endl;

  delete[] novaString;
  return 0;
}