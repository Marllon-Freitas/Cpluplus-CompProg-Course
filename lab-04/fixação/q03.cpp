/*
Escreva um programa que chame uma função de nome UmTres(). Esta função deve
exibir na tela a palavra “Um”, chamar a função de nome Dois(), e então exibir a
palavra “Três”. A função Dois() deve exibir a palavra “Dois” na tela. A função
main() deve mostrar a frase “Começando agora:” , chamar a função UmTres() e em
seguida mostrar a palavra “Pronto!”

Começando agora:
Um Dois Três
Pronto!
*/

#include <iostream>
using namespace std;

void UmTres();
void Dois();

int main()
{
  cout << "Começando agora:" << endl;
  UmTres();
  cout << "Pronto!" << endl;

  return 0;
}

void UmTres()
{
  cout << "Um ";
  Dois();
  cout << "Três " << endl;
}

void Dois()
{
  cout << "Dois ";
}
