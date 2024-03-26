/*
Escreva um programa que leia 10 valores do usuário e os insira em um vetor de
forma que os elementos fiquem ordenados. Para isso, antes de cada inserção, use
uma função Locate para localizar e retornar a posição correta do elemento dentro
do vetor. Em seguida use outra função, OpenSpace, que receba uma posição e abra
espaço no vetor nessa posição, “empurrando” os demais elementos para a próxima
posição. Caso a operação de abrir espaço não seja possível, porque o vetor está
cheio, a função deve retornar falso. Use estas funções no programa principal para
inserir os elementos e depois exibir os elementos ordenados.

Digite 10 valores:
3 12 6 7 4 8 2 9 14 1

Os valores ordenados:
1 2 3 4 6 7 8 9 12 14
*/

#include <iostream>
using namespace std;

const int TAMANHO = 10;

int locate(int[], int, int);
bool openSpace(int[], int, int);

int main()
{
  int vetor[TAMANHO] = {0};
  int valor = 0;

  cout << "Digite " << TAMANHO << " valores:" << endl;

  for (int i = 0; i < TAMANHO; i++)
  {
    cin >> valor;

    int posicao = locate(vetor, i, valor);

    if (!openSpace(vetor, i, posicao))
    {
      cout << "O vetor está cheio!" << endl;
      break;
    }

    vetor[posicao] = valor;
  }

  cout << "\nOs valores ordenados:" << endl;

  for (int i = 0; i < TAMANHO; i++)
  {
    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}

int locate(int vetor[], int tamanho, int valor)
{
  int i = 0;

  while (i < tamanho && vetor[i] < valor)
  {
    i++;
  }

  return i;
}

bool openSpace(int vetor[], int tamanho, int posicao)
{
  if (tamanho == TAMANHO)
  {
    return false;
  }

  for (int i = tamanho; i > posicao; i--)
  {
    vetor[i] = vetor[i - 1];
  }

  return true;
}