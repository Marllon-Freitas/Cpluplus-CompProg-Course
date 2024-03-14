/*
Crie um programa que peça ao usuário para digitar o número de alunos em uma
turma. O programa deve usar essa informação para criar um vetor dinâmico que
armazene as notas finais desses alunos. Peça ao usuário para entrar com a nota de
dois alunos e em seguida mostre essas notas usando cout.

Digite o número de alunos (mínimo 2): 10
Digite a nota de dois alunos:
4.5 8.9
As notas digitadas foram 4.5 e 8.9

*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Digite o número de alunos (mínimo 2): ";
  cin >> n;

  do
  {
    if (n < 2)
    {
      cout << "Digite pelo menos 2 alunos: ";
      cin >> n;
    }
  } while (n < 2);

  float *notas = new float[n];
  cout << "Digite a nota de dois alunos: ";
  cin >> notas[0] >> notas[1];
  cout << "As notas digitadas foram " << notas[0] << " e " << notas[1] << endl;
  delete[] notas;
  return 0;
}