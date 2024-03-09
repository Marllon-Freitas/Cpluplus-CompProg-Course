/*
Peça ao usuário para digitar um número inteiro positivo e então crie um vetor
dinâmico com essa quantidade de inteiros.

Digite o tamanho do vetor: 5
Criando vetor para 5 inteiros...

*/

#include <iostream>
using namespace std;

int main()
{
  int tamanhoVetor;
  cout << "Informe um valor inteiro para ser o tamanho do vetor" << endl;
  cin >> tamanhoVetor;
  cout << "Criando vetor para " << tamanhoVetor << " inteiros..." << endl;
  int *vetorDinamico = new int[tamanhoVetor];
  delete[] vetorDinamico;
  return 0;
}