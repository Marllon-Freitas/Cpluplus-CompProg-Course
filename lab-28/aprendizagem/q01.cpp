/*
Um corredor deseja computar o tempo total de uma corrida a partir dos
tempos parciais de cada volta. Para ajudá-lo, crie uma função TempoDaVolta()
que recebe o tempo de uma volta, o acumula em uma variável local estática e
retorna o total acumulado. Crie um programa que leia o tempo de cada volta e
chame a função TempoDaVolta() com o valor lido. O programa deve rodar até
que o corredor entre com um valor inválido para o tempo da volta

Volta: 16.2
Tempo total = 16.2 segs.
Volta: 18.5
Tempo total = 34.7 segs.
Volta: 20.1
Tempo total = 54.8 segs.
Volta: 21.4
Tempo total = 76.2 segs.
Volta: fim
*/

#include <iostream>
using namespace std;

float TempoDaVolta(float tempoVolta);

int main()
{
  float tempoVolta, tempoTotal = 0;
  cout << "Volta: ";
  cin >> tempoVolta;
  while (tempoVolta >= 0 && !cin.fail())
  {
    tempoTotal = TempoDaVolta(tempoVolta);
    cout << "Tempo total = " << tempoTotal << " segs." << endl;
    cout << "Volta: ";
    cin >> tempoVolta;
  }
  return 0;
}

float TempoDaVolta(float tempoVolta)
{
  static float tempoTotal = 0;
  tempoTotal += tempoVolta;
  return tempoTotal;
}