/*
Utilize apenas uma instrução cin para ler as três informações abaixo para variáveis
diferentes. Multiplique o valor das variáveis altura, largura e comprimento para
achar o volume do cubo.
*/
#include <iostream>
using namespace std;

int main()
{
  system("chcp 1252 > nul"); //
  float altura, largura, comprimento, volume;
  cout << "Digite a altura, largura e comprimento do cubo: \n";
  cin >> altura >> largura >> comprimento;
  volume = altura * largura * comprimento;
  cout << "O volume do cubo é: " << volume << " cm cúbicos." << endl;

  return 0;
}

/*
O programa funciona se for pressionado ENTER no lugar de ESPAÇO após a digitação
de cada número?

resposta: Sim, funciona.
--------------------------------------------------------------------------------
E se utilizarmos uma instrução cin para cada número? Ainda é possível digitar
todos os números na mesma linha? Faça o teste.

resposta: Sim, é possível digitar todos os números na mesma linha.
*/