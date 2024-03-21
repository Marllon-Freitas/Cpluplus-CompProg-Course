/*
Escreva um programa que aceite entrada de texto até achar o caractere @ e que
exiba os caracteres, exceto os dígitos, convertendo maiúsculas para minúsculas e
vice-versa.

Digite seu texto (@ para sair):
hoje vamos programar muito @ mais que ontem
HOJE VAMOS PROGRAMAR MUITO

Digite seu texto (@ para sair):
Os 12 bravos homens lutaram
oS BRAVOS HOMENS LUTARAM
ate a morte naqueles 15 Minutos de Batalha. @
ATE A MORTE NAQUELES mINUTOS DE bATALHA.
*/

/*
Escreva um programa que aceite entrada de texto até achar o caractere @ e que
exiba os caracteres, exceto os dígitos, convertendo maiúsculas para minúsculas e
vice-versa.

Digite seu texto (@ para sair):
hoje vamos programar muito @ mais que ontem
HOJE VAMOS PROGRAMAR MUITO

Digite seu texto (@ para sair):
Os 12 bravos homens lutaram
oS BRAVOS HOMENS LUTARAM
ate a morte naqueles 15 Minutos de Batalha. @
ATE A MORTE NAQUELES mINUTOS DE bATALHA.
*/

#include <cctype>
#include <iostream>
using namespace std;

int main()
{
  char c;
  cout << "Digite seu texto (@ para sair): " << endl;
  cin.get(c);
  while (c != '@')
  {
    if (!isdigit(c))
    {
      if (islower(c))
      {
        cout << (char)toupper(c);
      }
      else if (isupper(c))
      {
        cout << (char)tolower(c);
      }
      else
      {
        cout << c;
      }
    }

    cin.get(c);
  }
  cout << endl;
  return 0;
}