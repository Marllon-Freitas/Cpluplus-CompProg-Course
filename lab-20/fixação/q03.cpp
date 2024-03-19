/*
Escreva um programa que leia até 10 valores de donativos em um vetor de
double’s. O programa deve encerrar a entrada quando o valor doado for igual a
zero. Ao final mostre a média dos valores doados e diga quantos valores são
maiores que a média.

Digite ate 10 valores de donativos (zero para encerrar):
20
30
40
50
0
A media dos valores doados foi de R$ 35.00.
2 valores foram maiores que a media.
*/

#include <iostream>
using namespace std;

int main()
{
  double vetorDoacoes[10], media = 0.0;
  int qtdValoresMaioresQueMedia = 0, qtdValoresDoados = 0;

  cout << "Digite ate 10 valores de donativos (zero para encerrar): " << endl;

  for (int i = 0; i < 10; i++)
  {
    cin >> vetorDoacoes[i];

    if (vetorDoacoes[i] == 0)
    {
      break;
    }

    qtdValoresDoados++;

    media += vetorDoacoes[i];
  }

  media = media / qtdValoresDoados;

  for (int j = 0; j < qtdValoresDoados; j++)
  {
    if (vetorDoacoes[j] > media)
    {
      qtdValoresMaioresQueMedia++;
    }
  }

  cout << fixed;
  cout.precision(2);
  cout << "A media dos valores doados foi de R$ " << media << "." << endl;
  cout << qtdValoresMaioresQueMedia << " valores foram maiores que a media."
       << endl;

  return 0;
}
