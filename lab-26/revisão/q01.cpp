/*
O que a significam as expressões abaixo?
  a. *"queijo"
  b. "presunto"[2]
*/

#include <iostream>
using namespace std;

int main()
{
  cout << *"queijo" << endl;
  cout << "presunto"[2] << endl;

  return 0;
}

/*
Resposta:
  a. O operador * é utilizado para acessar o valor de um ponteiro. Neste caso, a expressão *"queijo" acessa o valor do primeiro caractere da string "queijo", que é 'q'.
  b. A expressão "presunto"[2] acessa o terceiro caractere da string "presunto", que é 'e'.
*/
