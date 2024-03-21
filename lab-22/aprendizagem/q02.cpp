/*
Escreva um programa que aceite entrada de texto até achar o caractere @. O
programa deve então usar uma instrução switch para contar a quantidade de cada
vogal existente no texto. O texto pode conter letras, números, espaços e caracteres
de pontuação.

Digite uma frase (@ para finalizar):
Ontem eu andei sob chuva forte, eram 12 em ponto.@
a:3
e:6
i:1
o:5
u:2
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  char c;
  int a = 0, e = 0, i = 0, o = 0, u = 0;
  cout << "Digite uma frase (@ para finalizar): " << endl;
  cin.get(c);
  while (c != '@')
  {
    switch (tolower(c))
    {
    case 'a':
      a++;
      break;
    case 'e':
      e++;
      break;
    case 'i':
      i++;
      break;
    case 'o':
      o++;
      break;
    case 'u':
      u++;
      break;
    }
    cin.get(c);
  }
  cout << "a:" << a << endl;
  cout << "e:" << e << endl;
  cout << "i:" << i << endl;
  cout << "o:" << o << endl;
  cout << "u:" << u << endl;
  return 0;
}