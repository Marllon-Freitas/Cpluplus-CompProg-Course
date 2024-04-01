/*
Escreva uma função que normalmente recebe um argumento, o endereço de uma
string, e exibe essa string uma vez. No entanto, se um segundo argumento, de tipo
booleano, for fornecido e possuir valor verdadeiro, a função deve mostrar a string
um número de vezes igual ao número de chamadas da função.
*/

#include <iostream>
#include <string>
using namespace std;

void exibe_string(string *s, bool repetir = false)
{
  static int chamadas = 0;
  if (repetir)
  {
    for (int i = 0; i < chamadas; i++)
    {
      cout << *s << endl;
    }
  }
  else
  {
    cout << *s << endl;
  }
  chamadas++;
}

int main()
{
  string s = "Hello, World!";
  exibe_string(&s);
  exibe_string(&s);
  exibe_string(&s, true);
  exibe_string(&s, true);
  return 0;
}