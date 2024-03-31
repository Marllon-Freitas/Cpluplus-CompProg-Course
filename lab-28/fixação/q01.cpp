/*
Escreva uma função que mantenha um contador de quantas vezes ela foi chamada.
A função deve mostrar o valor desse contador a cada chamada. Por exemplo, se a
função for chamada 3 vezes, a saída do programa deve ser como mostrada abaixo:

1a chamada da função.
2a chamada da função.
3a chamada da função.
*/

#include <iostream>
using namespace std;

void mensagem()
{
  static int contador = 0;
  contador++;
  cout << contador << "a chamada da função." << endl;
}

int main()
{
  mensagem();
  mensagem();
  mensagem();
  return 0;
}