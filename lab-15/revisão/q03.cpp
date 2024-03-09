/*
Escreva o código para criar um vetor dinâmico de peixes. O tamanho do vetor deve
ser definido pelo usuário. Mostre como ler e exibir o peso do segundo peixe.

Tamanho do vetor: 10
Tipo: Piaba
Peso: 6.7
Comprimento: 8
O peso do peixe é 6.7 gramas.

*/

#include <iostream>
using namespace std;

struct peixe
{
  char tipo[20];
  float peso;
  unsigned comp;
};

int main()
{
  int tamanhoVetor;
  cout << "Tamanho do vetor: ";
  cin >> tamanhoVetor;
  peixe *vetorDinamico = new peixe[tamanhoVetor];
  cout << "Tipo: ";
  cin >> vetorDinamico[1].tipo;
  cout << "Peso: ";
  cin >> vetorDinamico[1].peso;
  cout << "Comprimento: ";
  cin >> vetorDinamico[1].comp;
  cout << "O peso do peixe é " << vetorDinamico[1].peso << " gramas." << endl;
  delete[] vetorDinamico;
  return 0;
}
