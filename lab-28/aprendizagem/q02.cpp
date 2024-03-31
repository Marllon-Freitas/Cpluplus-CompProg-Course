/*
Considerando o registro tupla definido abaixo, construa uma função trocar()
que receba duas tuplas e inverta seus valores. Escreva um programa para
testar a função.

struct tupla
{
  int a;
  int b;
  int c;
};

Tupla A: 15 20 25
Tupla B: 40 50 60

Invertendo...

Tupla A: 40 50 60
Tupla B: 15 20 25
*/

#include <iostream>
using namespace std;

struct tupla
{
  int a;
  int b;
  int c;
};

void trocar(tupla &t1, tupla &t2);

int main()
{
  tupla A = {15, 20, 25};
  tupla B = {40, 50, 60};

  cout << "Tupla A: " << A.a << " " << A.b << " " << A.c << endl;
  cout << "Tupla B: " << B.a << " " << B.b << " " << B.c << endl;

  trocar(A, B);

  cout << "Invertendo..." << endl;

  cout << "Tupla A: " << A.a << " " << A.b << " " << A.c << endl;
  cout << "Tupla B: " << B.a << " " << B.b << " " << B.c << endl;

  return 0;
}

void trocar(tupla &t1, tupla &t2)
{
  tupla temp = t1;
  t1 = t2;
  t2 = temp;
}

