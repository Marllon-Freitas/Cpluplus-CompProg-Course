/*
Crie um programa que leia o nome e o preço de vários produtos de informática. Ao
final de cada entrada o programa deve perguntar se o usuário quer continuar. No
encerramento do programa mostre:
a. Qual o gasto total
b. Quantos produtos custam mais de R$1000
c. Qual o nome do produto mais caro

Loja de Informática
-------------------
Produto: Mouse
Preço: 120
-------------------
Deseja continuar [S/N]? s
-------------------
Produto: Notebook
Preço: 3500
-------------------
Deseja continuar [S/N]? s
-------------------
Produto: Impressora
Preço: 800
-------------------
Deseja continuar [S/N]? s
-------------------
Produto: Monitor
Preço: 1400
-------------------
Deseja continuar [S/N]? n
Total da compra: R$5820
2 produtos custam mais de R$1000.
Notebook é o produto mais caro.
*/

#include <iostream>
using namespace std;

struct produto
{
  char nome[30];
  float preco;
};

int main()
{
  char confirmacao;
  float totalCompra = 0.0;
  int qtdProdutosCaros = 0;
  produto produtoMaisCaro;

  cout << "Loja de Informática" << endl;
  cout << "-------------------" << endl;
  do
  {
    produto produto;
    cout << "Produto: ";
    cin.ignore();
    cin.getline(produto.nome, 30);
    cout << "Preço: ";
    cin >> produto.preco;
    totalCompra += produto.preco;
    if (produto.preco > 1000)
    {
      qtdProdutosCaros++;
    }
    if (produto.preco > produtoMaisCaro.preco)
    {
      produtoMaisCaro = produto;
    }
    cout << "-------------------" << endl;
    cout << "Deseja continuar [S/N]? ";
    cin >> confirmacao;
  } while (confirmacao == 's' || confirmacao == 'S');
  cout << "Total da compra: R$" << totalCompra << endl;
  cout << qtdProdutosCaros << " produtos custam mais de R$1000." << endl;
  cout << produtoMaisCaro.nome << " é o produto mais caro." << endl;
  return 0;
}