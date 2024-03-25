/*
Escreva uma função que receba um vetor e um valor inteiro. O vetor deve ser
recebido através de ponteiros que indicam início e fim de faixa. A função deve
colocar o valor inteiro em todas as posições da faixa. O valor inteiro deve ser lido
de um arquivo binário que contém apenas um número codificado como um inteiro
de 32 bits.

Nome do arquivo: valor.bin
Vetor preenchido com valor 15.

Dica: utilize o editor hexadecimal do Visual Studio para criar um arquivo binário
com um valor inteiro de 32 bits. Uma forma fácil de fazer isso é criando um arquivo
com a extensão .bin. Um dígito hexadecimal representa 4 bits. Dois dígitos
representam 1 byte. Processadores Intel e AMD x86 são little-endian, ou seja,
valores que ocupam vários bytes são organizados dos bytes menos significativos
para os mais significativos, sendo assim o valor inteiro 15 é “0F 00 00 00”.
*/

#include <iostream>
#include <fstream>

using namespace std;

void preencherVetor(int[], int[], int);

int main()
{
  ifstream fin;
  int valor = 0;
  int *inicio, *fim;

  fin.open("valor.bin", ios::binary);
  if (!fin.is_open())
  {
    cout << "Abertura do arquivo valor.bin falhou!" << endl;
    cout << "Programa encerrando.\n";
    exit(EXIT_FAILURE);
  }

  fin.read((char *)&valor, sizeof(valor));
  fin.close();

  int vetor[10] = {0};

  inicio = vetor;
  fim = vetor + 10;

  preencherVetor(inicio, fim, valor);

  cout << "Vetor preenchido com valor " << valor << "." << endl;

  return 0;
}

void preencherVetor(int inicio[], int fim[], int valor)
{
  for (int *i = inicio; i < fim; i++)
  {
    *i = valor;
  }
}