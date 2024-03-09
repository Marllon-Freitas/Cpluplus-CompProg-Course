/*
Considerando o vetor dinâmico de peixes da questão anterior, crie uma função
para receber um vetor de peixes. A função deve mostrar o peso do primeiro peixe.
*/

#include <iostream>
using namespace std;

struct peixe
{
  char tipo[20];
  float peso;
  unsigned comp;
};

void mostrarPesoPrimeiroPeixe(peixe *vetorDinamico);

int main()
{
  int tamanhoVetor;
  cout << "Tamanho do vetor: ";
  cin >> tamanhoVetor;
  peixe *vetorDinamico = new peixe[tamanhoVetor];
  cout << "Tipo: ";
  cin >> vetorDinamico[0].tipo;
  cout << "Peso: ";
  cin >> vetorDinamico[0].peso;
  cout << "Comprimento: ";
  cin >> vetorDinamico[0].comp;
  mostrarPesoPrimeiroPeixe(vetorDinamico);
  delete[] vetorDinamico;
  return 0;
}

void mostrarPesoPrimeiroPeixe(peixe *vetorDinamico)
{
  cout << "O peso do primeiro peixe é " << vetorDinamico[0].peso << " gramas." << endl;
}