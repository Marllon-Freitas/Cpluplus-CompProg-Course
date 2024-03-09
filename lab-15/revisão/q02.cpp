/*
Defina um registro que descreva um peixe. O registro deve incluir o tipo (string),
o peso (ponto-flutuante) e o comprimento (inteiro) do peixe.

struct peixe
{
 char tipo[20];
 float peso;
 unsigned comp;
};

Em seguida mostre:
a. Como criar uma variável de tipo peixe
b. Como alocar dinamicamente um registro de tipo peixe. 

*/

#include <iostream>
using namespace std;

struct peixe
{
 char tipo[20];
 float peso;
 unsigned comp;
};

int main()
{
  // a. Como criar uma variável de tipo peixe
  peixe p1;
  // b. Como alocar dinamicamente um registro de tipo peixe.
  peixe *p2 = new peixe;
  // Deletando a variável dinâmica
  delete p2;
  return 0;
}