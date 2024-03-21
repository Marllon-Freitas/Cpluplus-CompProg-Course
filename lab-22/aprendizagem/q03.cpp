/*
Crie um registro “Prato” com os campos nome e preço. Na função principal, crie um
vetor de pratos com os pratos de uma lanchonete, inicializando-o com pratos de
sua escolha. Mostre o cardápio dos pratos da lanchonete para o usuário e pergunte
se ele quer pedir algo. Enquanto ele fizer pedidos, some o valor do prato pedido ao
valor total da conta que ele vai pagar, e mostre o cardápio novamente. Quando ele
quiser encerrar o pedido, mostre a conta final com o total a pagar.
*/

#include <iostream>
using namespace std;

struct prato
{
  char nome[50];
  double preco;
};

int main()
{
  prato cardapio[5] = {
      {"Hamburguer", 10.00},
      {"Pizza", 15.00},
      {"Salada", 7.00},
      {"Refrigerante", 3.00},
      {"Sorvete", 5.00}};

  double total = 0.0;
  int escolha;
  cout << "Cardapio:\n";
  for (int i = 0; i < 5; i++)
  {
    cout << i + 1 << ". " << cardapio[i].nome << " - R$ " << cardapio[i].preco << "\n";
  }
  cout << "0. Encerrar pedido\n";

  do
  {
    cout << "Escolha um prato: ";
    cin >> escolha;

    if (escolha > 0 && escolha <= 5)
    {
      total += cardapio[escolha - 1].preco;
      cout << "Você adicionou " << cardapio[escolha - 1].nome << " ao seu pedido.\n";
    }
  } while (escolha != 0);

  cout << fixed;
  cout.precision(2);
  cout << "Total a pagar: R$ " << total << "\n";

  return 0;
}