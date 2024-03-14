/*
Defina um registro ASCII que armazena um caractere e um valor inteiro associado.
Crie uma função que recebe um valor inteiro e um caractere, e retorna o endereço
de um elemento do tipo ASCII, alocado dinamicamente na memória. O programa
principal deve chamar a função passando valores lidos do usuário, receber o
retorno em um ponteiro, exibir os valores de retorno e deletar a memória que foi
alocada dentro da função.

*/

#include <iostream>
using namespace std;

struct ASCII
{
  char caractere;
  int valor;
};

ASCII* alocaASCII(int valor, char caractere);

int main()
{
  int valor;
  char caractere;
  cout << "Digite um valor inteiro: ";
  cin >> valor;
  cout << "Digite um caractere: ";
  cin >> caractere;
  ASCII* ptDentroDaMain = alocaASCII(valor, caractere);
  cout << "Valor: " << ptDentroDaMain->valor << endl;
  cout << "Caractere: " << ptDentroDaMain->caractere << endl;
  delete ptDentroDaMain;
  return 0;
}

ASCII* alocaASCII(int valor, char caractere)
{
  ASCII* ptDentroDaFuncao = new ASCII;
  ptDentroDaFuncao->valor = valor;
  ptDentroDaFuncao->caractere = caractere;
  return ptDentroDaFuncao;
}