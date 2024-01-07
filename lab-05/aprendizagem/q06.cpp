/*
Crie 2 funções, uma que eleva um número ao quadrado, outra ao cubo. Na função
principal, receba um valor do usuário e mostre o número recebido ao quadrado, ao
cubo e, por fim, mostre o cubo do quadrado desse número. Ou seja, passe o
resultado da função quadrado para a função cubo. Isso pode ser feito passando a
chamada da função quadrado como argumento da função cubo.

Digite um valor: 2.1
Quadrado = 4.41
Cubo = 9.261
Cubo do quadrado = 85.7661

*/

#include <iostream>
using namespace std;

float quadrado(float x);
float cubo(float x);

int main()
{
  float x;
  cout << "Digite um valor: ";
  cin >> x;
  cout << "Quadrado = " << quadrado(x) << endl;
  cout << "Cubo = " << cubo(x) << endl;
  cout << "Cubo do quadrado = " << cubo(quadrado(x)) << endl;
}

float quadrado(float x)
{
  return x * x;
}

float cubo(float x)
{
  return x * x * x;
}
