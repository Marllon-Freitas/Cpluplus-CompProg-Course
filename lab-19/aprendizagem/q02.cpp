/*
Você está vendendo o livro “C++ só do bom”. Escreva um programa que use um
vetor bidimensional para armazenar o número de livros vendidos mensalmente
durante três anos.
O programa deve usar um laço para perguntar sobre o número de vendas de cada
mês, exibindo o nome do mês (use um vetor de const char * inicializado para os
nomes dos meses). Mostre o total de vendas em cada ano e o total geral dos três
anos.

Digite o número de livros vendidos no 1° ano:
Janeiro: 30
Fevereiro: 45
…
Digite o número de livros vendidos no 2° ano:
Janeiro: 40
Fevereiro: 48
…
Digite o número de livros vendidos no 3° ano:
Janeiro: 40
Fevereiro: 48
…
Total de vendas
1o ano: 565
2o ano: 450
3o ano: 320
Nos três anos foram vendidos 1335 livros.
*/

#include <iostream>
using namespace std;

int main()
{
  const char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
                         "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
  int vendas[3][12], total[3] = {0, 0, 0}, totalGeral = 0;
  for (int i = 0; i < 3; i++)
  {
    cout << "Digite o número de livros vendidos no " << i + 1 << "° ano:" << endl;
    for (int j = 0; j < 12; j++)
    {
      cout << meses[j] << ": ";
      cin >> vendas[i][j];
      total[i] += vendas[i][j];
    }
  }
  cout << endl;
  cout << "Total de vendas" << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << i + 1 << "o ano: " << total[i] << endl;
    totalGeral += total[i];
  }
  cout << endl;
  cout << "Nos três anos foram vendidos " << totalGeral << " livros." << endl;
  return 0;
}