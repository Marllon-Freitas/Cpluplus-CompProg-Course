/*
Escreva um programa que peça ao usuário para digitar dois valores. O programa
deve calcular e mostrar a soma de todos os inteiros entre, mas excluindo, os dois
valores. Não existe restrição quanto aos números digitados, isso significa que o
programa deve tratar todos os casos: o primeiro valor maior que o segundo, o
primeiro valor menor que o segundo e o caso dos valores serem iguais.

Digite um número inteiro: 2
Digite outro número inteiro: 5
A soma de todos os valores entre 2 e 5: 7.
*/

#include <iostream>
using namespace std;

int main()
{
  int valor1, valor2, somaValores = 0;
  cout << "Digite um número inteiro: ";
  cin >> valor1;
  cout << "Digite outro número inteiro: ";
  cin >> valor2;

  if (valor1 < valor2)
  {
    for (int i = valor1 + 1; i < valor2; i++)
    {
      somaValores += i;
    }
  }
  else if (valor1 > valor2)
  {
    for (int i = valor2 + 1; i < valor1; i++)
    {
      somaValores += i;
    }
  }
  cout << "A soma de todos os valores entre " << valor1 << " e " << valor2 << ": " << somaValores << "." << endl;
  return 0;
}