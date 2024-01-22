/*
Ao se tentar armazenar um elemento em uma posição inválida de um vetor, nem
sempre ocorrerá um erro. O trecho de código abaixo ilustra esta situação. A
atribuição do valor 60 para a posição 5, embora inválida, quase sempre funciona.

int vet[5] = {10, 20, 30, 40, 50};
vet[5] = 60;
vet[5000] = 60;

Pesquise como utilizar um laço de repetição for com vetores e construa um laço
para guardar o valor 60 em posições crescentes a partir da posição 0. Tente
descobrir a primeira posição em que o Sistema Operacional vai intervir e fechar o
programa. Essa posição é sempre a mesma? O que podemos deduzir desse
experimento?

*/

#include <iostream>
using namespace std;

int main()
{
  int vet[5] = {10, 20, 30, 40, 50};

  for (int i = 0; i < 100000; i++)
  {
    vet[i] = 60;
    cout << "vet[" << i << "] = " << vet[i] << endl;
  }

  return 0;
}

/*
A posição em que o sistema operacional intervem é aleatória.
Quando se tenta acessar uma posição inválida, o programa tenta acessar uma posição de memória que não foi alocada para ele,
e o sistema operacional intervem e fecha o programa.
Quando se tenta acessar uma posição de memória inválida muito distante daquela que foi alocada para o programa, o sistema operacional
demora mais para intervir e fechar o programa.
*/
