/*
Refaça a questão anterior usando ponteiros no lugar de referências e tente
observar as diferenças entre cada versão. Que vantagens a versão com referências
tem sobre a verão com ponteiros?
*/

#include <iostream>
using namespace std;

struct Caixa
{
  char marca[40];
  float altura;
  float largura;
  float comprimento;
  float volume;
};

// a. Escreva uma função que receba um ponteiro para um registro caixa e mostre o valor de cada membro.
void mostrar(const Caixa *caixaExemploPtr);

// b. Escreva uma função que receba um ponteiro para um registro caixa e modifique o membro volume para o produto das suas dimensões.
void calcularVolume(Caixa *caixaExemploPtr);

int main()
{
  Caixa caixaExemplo = {"Caixa da Amazon", 10, 20, 30, 0};
  mostrar(&caixaExemplo);
  calcularVolume(&caixaExemplo);
  mostrar(&caixaExemplo);
  return 0;
}

void mostrar(const Caixa *caixaExemploPtr)
{
  cout << "Marca: " << caixaExemploPtr->marca << endl;
  cout << "Altura: " << caixaExemploPtr->altura << endl;
  cout << "Largura: " << caixaExemploPtr->largura << endl;
  cout << "Comprimento: " << caixaExemploPtr->comprimento << endl;
  cout << "Volume: " << caixaExemploPtr->volume << endl;
}

void calcularVolume(Caixa *caixaExemploPtr)
{
  caixaExemploPtr->volume = caixaExemploPtr->altura * caixaExemploPtr->largura * caixaExemploPtr->comprimento;
}

/*
A versão com referências é mais segura, pois não permite que o ponteiro seja
alterado. Além disso, a sintaxe é mais limpa e mais próxima da sintaxe de
passagem por valor. A versão com ponteiros é mais flexível, pois permite que o
ponteiro seja alterado, mas é mais propensa a erros, pois o programador precisa
se preocupar em desreferenciar o ponteiro para acessar o valor do registro.
*/