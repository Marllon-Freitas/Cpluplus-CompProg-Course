/*
Escreva um programa que utilize as seguintes funções:
Preencher: recebe como argumento um vetor de double’s e o tamanho do vetor. A
função pede ao usuário que entre com valores para preencher o vetor. Ela encerra
a entrada de valores quando o vetor encher ou quando o usuário digitar um valor
não-numérico, e retorna o número de valores armazenados.

Mostrar: recebe um vetor de double’s e seu tamanho e exibe o conteúdo do vetor.

Inverter: recebe como argumento um vetor de double’s e seu tamanho e inverte a
ordem dos valores armazenados.

O programa deve usar estas funções para preencher o vetor, mostrar o vetor,
inverter o vetor, mostrar novamente o vetor, inverter todos excetos o primeiro e
último elementos, e então mostrar o vetor mais uma vez. Utilize const sempre que
apropriado.

Entre com até 10 valores:
21 32 85 43 17 80 fim
21 32 85 43 17 80
80 17 43 85 32 21
80 32 85 43 17 21
*/

#include <iostream>
using namespace std;

const int TAMANHO = 10;

int preencher(double[], int);

void mostrar(const double[], int);

void inverter(double[], int, int);

int main()
{
  double vetor[TAMANHO] = {0};
  int tamanho = 0;

  tamanho = preencher(vetor, TAMANHO);

  mostrar(vetor, tamanho);

  inverter(vetor, 0, tamanho - 1);

  mostrar(vetor, tamanho);

  inverter(vetor, 0, tamanho - 1);

  inverter(vetor, 1, tamanho - 2);

  mostrar(vetor, tamanho);

  return 0;
}

int preencher(double vetor[], int tamanho)
{
  int i = 0;
  double valor = 0;

  cout << "Entre com até " << tamanho << " valores:" << endl;

  for (i = 0; i < tamanho; i++)
  {
    cin >> valor;
    if (cin.fail())
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      break;
    }
    vetor[i] = valor;
  }

  return i;
}

void mostrar(const double vetor[], int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    cout << vetor[i] << " ";
  }
  cout << endl;
}

void inverter(double vetor[], int inicio, int fim)
{
  double temp = 0;

  while (inicio < fim)
  {
    temp = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = temp;
    inicio++;
    fim--;
  }
}