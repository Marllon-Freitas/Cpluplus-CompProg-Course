/*
Escreva um programa que utilize um vetor de caracteres e um laço para ler uma
palavra por vez até que a palavra “pronto” seja encontrada. O programa deve então
mostrar o número de palavras digitadas (sem contar pronto). Um exemplo de
execução é mostrado abaixo.

Digite palavras (pronto para parar):
Aprender C++ é uma aventura
A linguagem acomoda vários paradigmas de programação
Você está pronto para aprendê-la?
Foram digitadas um total de 14 palavras.
Dica: inclua o arquivo de cabeçalho <cstring> e use a função strcmp() para
fazer o teste de comparação.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char palavra[50];
  int qtdPalavras = 0;
  cout << "Digite palavras (pronto para parar):" << endl;
  cin >> palavra;
  while (strcmp(palavra, "pronto") != 0)
  {
    qtdPalavras++;
    cin >> palavra;
  }
  cout << "Foram digitadas um total de " << qtdPalavras << " palavras." << endl;
  return 0;
}
