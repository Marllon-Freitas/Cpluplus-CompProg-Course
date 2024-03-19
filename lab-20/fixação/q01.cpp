/*
Escreva um programa que sorteie um número aleatório entre 0 e 10. Peça para o
usuário tentar adivinhar o número sorteado. O programa deve escrever “muito
baixo” ou “muito alto”, para cada tentativa errada do usuário. Ele só deve encerrar
quando o usuário acertar o número.
*/

#include <iostream>
using namespace std;

int main()
{
  int numero, chute;
  srand(time(0));
  numero = rand() % 11;
  cout << "Tente adivinhar o número sorteado: ";
  cin >> chute;
  while (chute != numero)
  {
    if (chute < numero)
      cout << "Muito baixo! Tente novamente: ";
    else
      cout << "Muito alto! Tente novamente: ";
    cin >> chute;
  }
  cout << "Parabéns! Você acertou!" << endl;
  return 0;
}