/*
Ponteiros pra funções podem ser usados para simplificar códigos que devem
escolher uma dentre várias funções com base no valor de uma variável. Por
exemplo, considere o trecho de código abaixo:

switch (num)
{
case 0:
  func0();
  break;
case 1:
  func1();
  break;
case 2:
  func2();
  break;
case 3:
  func3();
  break;
}

Uma alternativa para o código acima é criar um vetor de ponteiros para
funções, de forma que o valor da variável num seja usado para chamar a função
adequada:

void (*func[])(void) = { func0, func1, func2, func3 };
...
func[num]();

Construa um programa que use um vetor de ponteiros para funções para
implementar a seleção de uma opção de Menu. Cada vez que o usuário fizer
uma escolha, uma mensagem apropriada deve ser exibida por uma função.

Menu do Sistema

1) Inserir
2) Remover
3) Buscar
4) Sair

Escolha:
*/

#include <iostream>
using namespace std;

void inserir()
{
  cout << "\nInserindo...\n"
       << endl;
}

void remover()
{
  cout << "\nRemovendo...\n"
       << endl;
}

void buscar()
{
  cout << "\nBuscando...\n"
       << endl;
}

void sair()
{
  cout << "\nSaindo...\n"
       << endl;
}

int main()
{
  void (*func[])(void) = {inserir, remover, buscar, sair};
  int opcao;

  do
  {
    cout << "Menu do Sistema\n"
         << endl;
    cout << "1) Inserir" << endl;
    cout << "2) Remover" << endl;
    cout << "3) Buscar" << endl;
    cout << "4) Sair" << endl;
    cout << endl;
    cout << "Escolha: ";
    cin >> opcao;

    if (opcao >= 1 && opcao <= 4)
    {
      func[opcao - 1]();
    }
    else
    {
      cout << "\nOpção inválida!\n"
           << endl;
    }
  } while (opcao != 4);

  return 0;
}