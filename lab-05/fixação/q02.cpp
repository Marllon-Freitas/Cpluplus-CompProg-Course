/*
Escreva um programa para converter temperaturas de Celsius para Fahrenheit.
Você deve criar uma função que receba um valor em Celsius e retorne o
equivalente em Fahrenheit. O programa deve pedir ao usuário para digitar uma
temperatura em graus Celsius, usar a função para obter o valor equivalente em
graus Fahrenheit e exibir uma mensagem com o resultado. A saída do programa
deve seguir o modelo abaixo:

Digite uma temperatura em graus Celsius: 20.5
20.5 graus Celsius equivalem a 68.9 graus Fahrenheit.

*/

#include <iostream>
using namespace std;

float celsiusParaFahrenheit(float celsius);

int main()
{
  float celsius;
  cout << "Digite uma temperatura em graus Celsius: ";
  cin >> celsius;
  cout << celsius << " graus Celsius equivalem a " << celsiusParaFahrenheit(celsius) << " graus Fahrenheit." << endl;
}

float celsiusParaFahrenheit(float celsius)
{
  return celsius * 9 / 5 + 32;
}
