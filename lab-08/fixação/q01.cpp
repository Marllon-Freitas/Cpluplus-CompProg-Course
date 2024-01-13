/*
Em um exercício anterior escrevemos uma função para calcular o IMC de uma
pessoa. A função recebe a altura da pessoa em metros, a sua massa corporal em
quilos e retorna seu Índice de Massa Corporal. O IMC é a massa dividida pelo
quadrado da altura.

Digite sua altura em metros: 1.75
Digite sua massa corporal em quilos: 80.0
Seu índice de massa corporal (IMC): 26.1224

Agora, crie duas versões para a função IMC: uma que trabalha apenas com valores
do tipo float e outra que trabalha somente com valores do tipo double. As
funções podem ter o mesmo nome se os tipos dos parâmetros forem diferentes,
como nos protótipos mostrados abaixo.

float imc(float, float);
double imc(double, double);

a) Teste as funções passando diretamente, sem ler do usuário, os valores
1.75 e 80.0 para altura e massa, respectivamente. Lembre-se que
constantes ponto flutuante tem tipo double por padrão. Para chamar a
função que recebe float’s é preciso passar 1.75f e 80.0f.

b) Mostre o resultado das funções usando a exibição padrão do cout (com 6
dígitos significativos no total). Depois configure o cout para mostrar 10
dígitos depois da vírgula e mostre novamente os mesmos resultados. Como
você explica a diferença nos resultados obtidos?

c) Use uma calculadora comum para fazer essa mesma conta e compare com
o resultado do programa. O programa está fazendo algum tipo de
arredondamento? O resultado obtido com valores float está correto?

d) Com base nos resultados obtidos, o que seria melhor para este programa?
Usar float e economizar memória ou utilizar double e ter resultados mais
precisos?

*/

#include <iostream>
#include <cmath>

using namespace std;

float imc(float, float);
double imc(double, double);

int main()
{
  // aceitando acentos no console
  system("chcp 1252 > nul");

  // variáveis
  float alturaFloat = 1.75f, massaFloat = 80.0f;
  double alturaDouble = 1.75, massaDouble = 80.0;

  // a)
  cout << "letra a)" << endl;
  cout << "IMC com float: " << imc(alturaFloat, massaFloat) << endl;
  cout << "IMC com double: " << imc(alturaDouble, massaDouble) << endl << endl;

  // b)
  cout << "letra b)" << endl;
  cout.precision(6);
  cout << "IMC com float: " << imc(alturaFloat, massaFloat) << endl;
  cout << "IMC com double: " << imc(alturaDouble, massaDouble) << endl;

  cout.precision(10);
  cout << "IMC com float: " << imc(alturaFloat, massaFloat) << endl;
  cout << "IMC com double: " << imc(alturaDouble, massaDouble) << endl;

  return 0;
}

float imc(float altura, float massa)
{
  return massa / pow(altura, 2);
}

double imc(double altura, double massa)
{
  return massa / pow(altura, 2);
}

/*
Respostas:
**valor da calculadora: 26,12244897959183673469387755102
letra c)
O programa está fazendo algum tipo de arredondamento? O resultado obtido com valores float está correto?
Sim, o programa está fazendo arredondamento. O resultado obtido com float está correto, não há necessidade de mais casas decimais.

letra d)
Com base nos resultados obtidos, o que seria melhor para este programa? Usar float e economizar memória ou utilizar double e ter resultados mais precisos?
Depende do que o programa precisa. Nesse caso, float é suficiente.
*/

