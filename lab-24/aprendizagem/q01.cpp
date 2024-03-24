/*
Crie um programa que grave os 100 primeiros números naturais ao mesmo
tempo em um arquivo texto e em um arquivo binário. Compare os tamanhos
dos arquivos e explique como os tipos escolhidos para guardar os números
podem tornar o arquivo binário menor ou maior que o arquivo texto.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream arquivoTexto("numeros.txt");
  ofstream arquivoBinario("numeros.bin", ios::binary);

  for (int i = 1; i <= 100; i++)
  {
    arquivoTexto << i << endl;
    arquivoBinario.write((char *)&i, sizeof(i));
  }

  arquivoTexto.close();
  arquivoBinario.close();

  ifstream arquivoTextoLeitura("numeros.txt");
  ifstream arquivoBinarioLeitura("numeros.bin", ios::binary);

  arquivoTextoLeitura.seekg(0, ios::end);
  arquivoBinarioLeitura.seekg(0, ios::end);

  cout << "Tamanho do arquivo texto: " << arquivoTextoLeitura.tellg() << " bytes" << endl;
  cout << "Tamanho do arquivo binário: " << arquivoBinarioLeitura.tellg() << " bytes" << endl;

  arquivoTextoLeitura.close();
  arquivoBinarioLeitura.close();

  return 0;
}

/*
O arquivo binário é menor que o arquivo texto. Isso ocorre porque o arquivo texto
salva os números como texto, ou seja, como caracteres. Cada número é salvo como
uma sequência de caracteres, ocupando mais espaço. Já o arquivo binário salva os
números como inteiros, ocupando menos espaço.
*/
