/*
Construa expressões lógicas para representar as seguintes condições:
a. ch não é um q nem um k
b. idade não está entre 15 e 26
c. x é impar e maior que 30
d. num é múltiplo de 5 ou de 8
e. peso não é menor que 50 e altura é maior que 160
*/

#include <iostream>
using namespace std;

int main()
{
  char ch = 'a';
  int idade = 30, x = 31, num = 40, peso = 60, altura = 170;

  cout << "a. ch não é um q nem um k: " << !(ch == 'q' || ch == 'k') << endl;
  cout << "b. idade não está entre 15 e 26: " << (idade < 15 || idade > 26) << endl;
  cout << "c. x é impar e maior que 30: " << (x % 2 != 0 && x > 30) << endl;
  cout << "d. num é múltiplo de 5 ou de 8: " << (num % 5 == 0 || num % 8 == 0) << endl;
  cout << "e. peso não é menor que 50 e altura é maior que 160: " << (peso >= 50 && altura > 160) << endl;

  return 0;
}