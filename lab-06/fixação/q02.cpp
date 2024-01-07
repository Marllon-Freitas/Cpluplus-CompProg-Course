/*
Escreva um programa que peça quantos quilômetros você dirigiu e quantos litros
de combustível foram gastos e então mostre o consumo do seu carro em km/litro.
É possível obter um resultado sempre correto usando apenas valores e variáveis
do tipo inteiro? Faça o teste com o seu programa.

Distância percorrida (km): 300
Litros de combustível: 30
O consumo do seu carro foi de 10 km/litro.

*/

#include <iostream>
using namespace std;

int main()
{
  int km, litros;
  cout << "Distância percorrida (km): ";
  cin >> km;
  cout << "Litros de combustível: ";
  cin >> litros;
  cout << "O consumo do seu carro foi de " << km / litros << " km/litro." << endl;
}

/*
Sempre não, caso um dos valores colocados pelo usuário seja maior que 2147483647, ele dará um erro.
pois será maior qur o valor máximo que um inteiro pode armazenar.
*/
