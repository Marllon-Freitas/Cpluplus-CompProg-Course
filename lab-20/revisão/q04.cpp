/*
Considere o código abaixo. Suponha que a entrada fornecida seja:

Oi!
Mande $10 ou $20 agora!@

#include <iostream>
using namespace std;

int main()
{
  char ch;
  int ct1, ct2;
  ct1 = ct2 = 0;
  while ((ch = cin.get()) != '@')
  {
  cout << ch;
  ct1++;
  if (ch = '$')
    ct2++;
  }
  cout << "\nct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
  return 0;
}

a. Qual é a saída?
b. Tem algo errado com este programa?
*/

#include <iostream>
using namespace std;
int main()
{
  char ch;
  int ct1, ct2;
  ct1 = ct2 = 0;
  while ((ch = cin.get()) != '@')
  {
    cout << ch;
    ct1++;
    if (ch = '$')
      ct2++;
  }
  cout << "\nct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
  return 0;
}

// Resposta:
// a. A saída será:
// Oi!
// Mande $10 ou $20 agora!
// ct1 = 27, ct2 = 27 (ct2 vai receber o mesmo valor de ct1)
// b. Sim, o programa está atribuindo o valor '$' à variável ch, e não comparando
// se ch é igual a '$'. A condição correta seria if (ch == '$').
