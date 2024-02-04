/*
Suponha que torque é um vetor de 10 floats. Declare um ponteiro que aponte
para o primeiro elemento de torque e use o ponteiro para mostrar o primeiro e o
último elemento do vetor.

Torques: 2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9
Primeiro: 2.5
Último: 4.9

*/

#include <iostream>
using namespace std;

int main()
{
  float torque[10] = {2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9};
  float *pTorque = torque;

  cout << "Torques: ";
  for (int i = 0; i < 10; i++)
  {
    cout << torque[i];
    if (i < 9)
    {
      cout << ", ";
    }
  }
  cout << endl;
  cout << "Primeiro: " << *pTorque << endl;
  cout << "Último: " << *(pTorque + 9) << endl;

  return 0;
}
