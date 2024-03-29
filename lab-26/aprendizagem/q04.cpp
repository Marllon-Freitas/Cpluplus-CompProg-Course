/*
Um supermercado vende uma unidade de um produto ao seu preço normal, mas a
partir de uma certa quantidade de produtos, ela vende por um preço menor,
chamado de preço de atacado. Crie um registro produto para guardar o preço
normal de um produto, seu preço de atacado e a quantidade a partir da qual o
preço de atacado deve ser utilizado.

Construa uma função que receba um registro do tipo produto e a quantidade
pedida desse produto e retorne o total a pagar. A função deve analisar se deve
aplicar o preço normal ou o preço de atacado de acordo com a quantidade
solicitada.

Utilize essa função dentro de outra função, cuja tarefa é receber um vetor de
produtos e um vetor de pedidos e retornar o total do pedido. A função principal
deve receber os produtos e os pedidos através de dois arquivos texto separados.
Os arquivos possuem respectivamente as informações dos produtos e as
quantidades pedidas, seguindo o formato abaixo. O primeiro número de cada
arquivo é sempre a quantidade de linhas de informação.

Produtos.txt:
6
N: 3.50 A: 2.95 Q: 5
N: 9.80 A: 8.90 Q: 3
N: 5.00 A: 4.00 Q: 5
N: 7.85 A: 6.95 Q: 2
N: 1.95 A: 1.50 Q: 8
N: 4.90 A: 4.70 Q: 6

Pedido.txt
6
3
4
10
5
5
8

(N)ormal, (A)tacado, (Q)uantidade necessária para o preço de atacado
*/

/*
Um supermercado vende uma unidade de um produto ao seu preço normal, mas a
partir de uma certa quantidade de produtos, ela vende por um preço menor,
chamado de preço de atacado. Crie um registro produto para guardar o preço
normal de um produto, seu preço de atacado e a quantidade a partir da qual o
preço de atacado deve ser utilizado.

Construa uma função que receba um registro do tipo produto e a quantidade
pedida desse produto e retorne o total a pagar. A função deve analisar se deve
aplicar o preço normal ou o preço de atacado de acordo com a quantidade
solicitada.

Utilize essa função dentro de outra função, cuja tarefa é receber um vetor de
produtos e um vetor de pedidos e retornar o total do pedido. A função principal
deve receber os produtos e os pedidos através de dois arquivos texto separados.
Os arquivos possuem respectivamente as informações dos produtos e as
quantidades pedidas, seguindo o formato abaixo. O primeiro número de cada
arquivo é sempre a quantidade de linhas de informação.

Produtos.txt:
6
N: 3.50 A: 2.95 Q: 5
N: 9.80 A: 8.90 Q: 3
N: 5.00 A: 4.00 Q: 5
N: 7.85 A: 6.95 Q: 2
N: 1.95 A: 1.50 Q: 8
N: 4.90 A: 4.70 Q: 6

Pedido.txt
6
3
4
10
5
5
8

(N)ormal, (A)tacado, (Q)uantidade necessária para o preço de atacado
*/

#include <iostream>
#include <fstream>
using namespace std;

struct Produto
{
  float precoNormal;
  float precoAtacado;
  int quantidadeAtacado;
};

float totalPagar(Produto produto, int quantidade);

float totalPedido(Produto produtos[], int pedidos[], int n);

int main()
{
  ifstream finProdutos;
  ifstream finPedidos;
  finProdutos.open("Produtos.txt");
  if (!finProdutos)
  {
    cout << "Não foi possível abrir o arquivo Produtos.txt.\n";
    return 1;
  }

  finPedidos.open("Pedido.txt");
  if (!finPedidos)
  {
    cout << "Não foi possível abrir o arquivo Pedido.txt.\n";
    return 1;
  }

  int qtdeProdutos, qtdePedidos;
  finProdutos >> qtdeProdutos;
  finPedidos >> qtdePedidos;

  Produto *produtos = new Produto[qtdeProdutos];
  for (int i = 0; i < qtdeProdutos; i++)
  {
    char lixo[3];
    finProdutos >> lixo >> produtos[i].precoNormal >> lixo >> produtos[i].precoAtacado >> lixo >> produtos[i].quantidadeAtacado;
  }

  int *pedidos = new int[qtdePedidos];
  for (int i = 0; i < qtdePedidos; i++)
  {
    finPedidos >> pedidos[i];
  }

  cout << fixed;
  cout.precision(2);
  cout << "Total a pagar: R$" << totalPedido(produtos, pedidos, qtdePedidos) << endl;

  return 0;
}

float totalPagar(Produto produto, int quantidade)
{
  if (quantidade >= produto.quantidadeAtacado)
  {
    return produto.precoAtacado * quantidade;
  }
  else
  {
    return produto.precoNormal * quantidade;
  }
}

float totalPedido(Produto produtos[], int pedidos[], int n)
{
  float total = 0;
  for (int i = 0; i < n; i++)
  {
    total += totalPagar(produtos[i], pedidos[i]);
  }
  return total;
}