/*
O supermercado on-line ABC vende alface por R$1,25/Kg, beterraba por
R$0,65/Kg e cenoura por R$0,90/Kg. Ele dá um desconto de 5% para pedidos que
ultrapassem R$100 (valor calculado sem os custos de envio da mercadoria). O
custo de entrega é de R$3,50 para pedidos com menos de 5Kg, R$10,00 para
pedidos de 5Kg até 20Kg, e R$8,00 mais R$0,10 por Kg para pedidos iguais ou
maiores que 20Kg.

Escreva um programa que permita ao cliente fazer um pedido de compra de
vegetais. O algoritmo deve fornecer um menu com os vegetais disponíveis e os
respectivos preços:

Supermercado ABC
----------------
a) Alface        R$ 1,25/Kg
b) Beterraba     R$ 0,65/Kg
c) Cenoura       R$ 0,90/Kg
Faça seu pedido usando as letras (a, b, c) e (s) para encerrar:

Ele deve então ler uma opção até que o cliente encerre o pedido: uma resposta “a”
deve permitir ao usuário entrar com os quilos de alface, “b” com os quilos de
beterraba, “c” com os quilos de cenoura e “s” deve encerrar o pedido. O algoritmo
deve permitir que o usuário faça a correção do pedido quantas vezes ele quiser
antes de encerrar o pedido. Se, por exemplo, ele pressionar a letra “a” uma segunda
vez, considere que a segunda entrada é uma correção da quantidade de alface
digitada anteriormente. O pedido só deve ser encerrado quando o usuário digitar
“s”, até lá o algoritmo deve aceitar pedidos e correções de pedidos
indefinidamente.

Quando o usuário encerrar o pedido, o algoritmo deve mostrar o total do pedido, o
desconto (se tiver um), o custo da entrega e o total a pagar (incluindo todos os
custos e descontos).

Produto      Preço/Kg     Pedido (Kg)   Total Parcial
----------   ---------    -----------   ---------------
Alface       R$ 1,25/Kg   3,2Kg          R$ 4,00
Beterraba    R$ 0,65/Kg   6,0Kg          R$ 3,90
Cenoura      R$ 0,90/Kg   10Kg           R$ 9,00
---------------------------------------------------

Se o usuário fizesse o pedido acima, a saída seria:

Total do pedido:                          R$ 16,90
Descontos:                                R$ 0,00
Custo de entrega:                         R$ 10,00
---------------------------------------------------
Total a pagar:                            R$ 26,90
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  char escolha;
  double alface = 0, beterraba = 0, cenoura = 0;
  double total = 0, desconto = 0, custoEntrega = 0;
  cout << "Supermercado ABC\n";
  cout << "----------------\n";
  cout << "a) Alface        R$ 1,25/Kg\n";
  cout << "b) Beterraba     R$ 0,65/Kg\n";
  cout << "c) Cenoura       R$ 0,90/Kg\n";
  cout << "Faça seu pedido usando as letras (a, b, c) e (s) para encerrar:\n";
  do
  {
    cout << "Escolha: \n";
    cin >> escolha;
    switch (escolha)
    {
    case 'a':
      cout << "Quantos quilos de alface? ";
      cin >> alface;
      break;
    case 'b':

      cout << "Quantos quilos de beterraba? ";
      cin >> beterraba;
      break;
    case 'c':

      cout << "Quantos quilos de cenoura? ";
      cin >> cenoura;
      break;
    }
  } while (escolha != 's');

  total = alface * 1.25 + beterraba * 0.65 + cenoura * 0.90;

  if (total > 100)
  {
    desconto = total * 0.05;
  }

  if (alface + beterraba + cenoura < 5)
  {
    custoEntrega = 3.50;
  }
  else if (alface + beterraba + cenoura <= 20)
  {
    custoEntrega = 10.00;
  }
  else
  {
    custoEntrega = 8.00 + (alface + beterraba + cenoura) * 0.10;
  }

  cout << "Produto\t\tPreço/Kg\tPedido (Kg)\tTotal Parcial\n";
  cout << "----------\t---------\t-----------\t---------------\n";
  cout << "Alface\t\tR$ 1,25/Kg\t" << alface << "Kg\t\tR$ " << fixed << setprecision(2) << alface * 1.25 << endl;
  cout << "Beterraba\tR$ 0,65/Kg\t" << beterraba << "Kg\t\tR$ " << fixed << setprecision(2) << beterraba * 0.65 << endl;
  cout << "Cenoura\t\tR$ 0,90/Kg\t" << cenoura << "Kg\t\tR$ " << fixed << setprecision(2) << cenoura * 0.90 << endl;
  cout << "---------------------------------------------------------------\n";
  cout << "Total do pedido:\t\t\t\tR$ " << fixed << setprecision(2) << total << endl;
  cout << "Descontos:\t\t\t\t\tR$ " << fixed << setprecision(2) << desconto << endl;
  cout << "Custo de entrega:\t\t\t\tR$ " << fixed << setprecision(2) << custoEntrega << endl;
  cout << "---------------------------------------------------------------\n";
  cout << "Total a pagar:\t\t\t\t\tR$ " << fixed << setprecision(2) << total - desconto + custoEntrega << endl;

  return 0;
}
