/*
Escreva funções sobrecarregadas para exibir números de tipo inteiro, números de
tipo ponto-flutuante e constantes strings. Cada tipo deve ser exibido com uma cor
diferente, de forma que o código abaixo gere a saída a seguir:

int main()
{
  cout << "Inteiro: ";
  print(45);
  cout << "\nPonto-flutuante: ";
  print(3.9);
  cout << "\nString: ";
  print("Oi Mundo");
  cout << "\n";
}

Inteiro: 45
Ponto-flutuante: 3.9
String: Oi Mundo
*/

#include <iostream>
#include <string>
using namespace std;

void print(int n);
void print(double n);
void print(const string &s);

int main()
{
  cout << "Inteiro: ";
  print(45);
  cout << "\nPonto-flutuante: ";
  print(3.9);
  cout << "\nString: ";
  print("Oi Mundo");
  cout << "\n";
}

void print(int n)
{
  cout << "\033[1;33m" << n << "\033[0m";
}

void print(double n)
{
  cout << "\033[1;34m" << n << "\033[0m";
}

void print(const string &s)
{
  cout << "\033[1;31m" << s << "\033[0m";
}
