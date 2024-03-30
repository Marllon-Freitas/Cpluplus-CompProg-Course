/*
Construa funções inline para as tarefas abaixo e escreva um programa para testar
as funções. As funções devem ser criadas com apenas uma instrução em uma única
linha.
  a. Achar o máximo entre dois números
  b. Achar o mínimo entre dois números
  c. Encontrar o valor absoluto de um número
  d. Converter um caractere para maiúsculo
*/

#include <iostream>
#include <cctype>
using namespace std;

inline int max(int a, int b) { return (a > b ? a : b); }
inline int min(int a, int b) { return (a < b ? a : b); }
inline int absValue(int a) { return (a < 0 ? -a : a); }
inline char toUpper(char c) { return (islower(c) ? toupper(c) : c); }

int main()
{
  cout << "max(5, 10) = " << max(5, 10) << endl;
  cout << "min(5, 10) = " << min(5, 10) << endl;
  cout << "abs(-5) = " << absValue(-5) << endl;
  cout << "toUpper('a') = " << toUpper('a') << endl;
  return 0;
}
