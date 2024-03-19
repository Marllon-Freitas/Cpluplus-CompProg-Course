/*
Construa uma função para exibir um vetor de inteiros de tamanho qualquer. Passe
mat[0] da questão anterior para essa função. Se nossa teoria de que uma matriz é
um vetor de vetores estiver correta, a função não deve fazer diferença entre mat[0]
e um vetor normal.
*/

#include <iostream>
using namespace std;

void exibirVetor(int *, int);

int main()
{
	int mat[2][3] =
	{
		{1, 2, 3},
		{4, 5, 6}
	};
  exibirVetor(mat[0], 6);
  return 0;
}

void exibirVetor(int *vetor, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    cout << vetor[i] << " ";
  }
  cout << endl;
}
