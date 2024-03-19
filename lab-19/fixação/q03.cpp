/*
Escreva um programa que use laços aninhados para produzir a seguinte saída:
  $
   $$$
  $$$$$
 $$$$$$$
$$$$$$$$$
*/

#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5 - i; j++)
      cout << " ";
    for (int j = 0; j < 2 * i + 1; j++)
      cout << "$";
    cout << endl;
  }
  return 0;
}