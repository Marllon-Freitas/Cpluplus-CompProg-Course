/*
Construa um programa que leia do usuário uma sequência de números inteiros,
até que o número zero seja lido. Os números devem ser armazenados em um
arquivo binário chamado “vet.dat”. O primeiro número do arquivo deve ser a
quantidade de números digitados. Na entrada do programa verifique se o arquivo
existe e, caso positivo, exiba os valores do vetor.

Exemplo 1:
Digite números (zero para encerrar):
50 82 45 31 94 22 0
6 números foram armazenados em vet.dat.

Exemplo 2:
O arquivo vet.dat contém:
50 82 45 31 94 22
Digite números (zero para encerrar):
83 40 29 0
3 números foram armazenados em vet.dat.

Dica: como não sabemos de antemão quantos números serão digitados, podemos
gravar o número zero como primeiro número do arquivo, gravar cada número
digitado pelo usuário e depois retornar ao início do arquivo, com a função seekp( )
para sobrescrever o zero com o valor correto.

O comando abaixo posiciona o ponteiro de escrita do arquivo (put) na posição 0 a
partir do seu início (ios_base::beg).

fout.seekp(0, ios_base::beg);
*/

/*
Construa um programa que leia do usuário uma sequência de números inteiros,
até que o número zero seja lido. Os números devem ser armazenados em um
arquivo binário chamado “vet.dat”. O primeiro número do arquivo deve ser a
quantidade de números digitados. Na entrada do programa verifique se o arquivo
existe e, caso positivo, exiba os valores do vetor.

Exemplo 1:
Digite números (zero para encerrar):
50 82 45 31 94 22 0
6 números foram armazenados em vet.dat.

Exemplo 2:
O arquivo vet.dat contém:
50 82 45 31 94 22
Digite números (zero para encerrar):
83 40 29 0
3 números foram armazenados em vet.dat.

Dica: como não sabemos de antemão quantos números serão digitados, podemos
gravar o número zero como primeiro número do arquivo, gravar cada número
digitado pelo usuário e depois retornar ao início do arquivo, com a função seekp( )
para sobrescrever o zero com o valor correto.

O comando abaixo posiciona o ponteiro de escrita do arquivo (put) na posição 0 a
partir do seu início (ios_base::beg).

fout.seekp(0, ios_base::beg);
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  fstream file("vet.dat", ios::in | ios::out | ios::binary);
  int numbers[100];
  int count = 0;

  if (file.is_open())
  {
    file.read((char *)&count, sizeof(count));

    cout << "O arquivo vet.dat contém:\n";
    for (int i = 0; i < count; i++)
    {
      file.read((char *)&numbers[i], sizeof(numbers[i]));
      cout << numbers[i] << " ";
    }
    cout << "\n";
  }
  else
  {
    file.clear();
    file.open("vet.dat", ios::out | ios::binary);
  }

  cout << "Digite números (zero para encerrar):\n";
  int num;
  count = 0;
  while (cin >> num && num != 0)
  {
    numbers[count++] = num;
  }

  file.seekp(0, ios::beg);
  file.write((char *)&count, sizeof(count));
  for (int i = 0; i < count; i++)
  {
    file.write((char *)&numbers[i], sizeof(numbers[i]));
  }

  cout << count << " números foram armazenados em vet.dat.\n";

  file.close();
  return 0;
}
