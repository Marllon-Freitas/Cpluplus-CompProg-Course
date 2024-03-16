/*
Escreva um programa que peça ao usuário para entrar com o número de linhas a
mostrar. O programa deve então exibir essa quantidade de linhas usando
asteriscos, com um asterisco na primeira linha, dois na segunda, e assim por
diante.
Em cada linha, os asteriscos devem ser precedidos por uma quantidade de pontos
necessários para fazer todas as linhas terem o mesmo número de caracteres. O
número total de caracteres em cada linha deve ser igual ao número de linhas.
Use laços aninhados na solução do problema.

Entre com o número de linhas: 5
....*
...**
..***
.****
*****

*/

#include <iostream>
using namespace std;

int main()
{
  int qtdLinhas;
  cout << "Entre com o número de linhas: " << endl;
  cin >> qtdLinhas;

  for (int i = 0; i < qtdLinhas; i++)
  {
    for (int j = 0; j < qtdLinhas - i - 1; j++)
    {
      cout << ".";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}