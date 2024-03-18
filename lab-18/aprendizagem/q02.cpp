/*
Crie um programa que realiza a soma de todos os números impares de 0 a 100
usando um laço for. Mostre como seria a solução do mesmo problema usando um
laço while e um do-while.

*/

#include <iostream>
using namespace std;

void forLoop();
void whileLoop();
void doWhileLoop();

int main()
{
  forLoop();
  whileLoop();
  doWhileLoop();
  return 0;
}

void forLoop()
{
  cout << "Usando for\n";
  int sum = 0;
  for (int i = 0; i <= 100; i++)
  {
    if (i % 2 != 0)
    {
      sum += i;
    }
  }
  cout << "A soma dos números ímpares de 0 a 100 é: " << sum << endl;
}

void whileLoop()
{
  cout << "Usando while\n";
  int sum = 0;
  int i = 0;
  while (i <= 100)
  {
    if (i % 2 != 0)
    {
      sum += i;
    }
    i++;
  }
  cout << "A soma dos números ímpares de 0 a 100 é: " << sum << endl;
}

void doWhileLoop()
{
  cout << "Usando do-while\n";
  int sum = 0;
  int i = 0;
  do
  {
    if (i % 2 != 0)
    {
      sum += i;
    }
    i++;
  } while (i <= 100);
  cout << "A soma dos números ímpares de 0 a 100 é: " << sum << endl;
}