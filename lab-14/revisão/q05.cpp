/*
Descubra o que acontece ao tentarmos acessar um ponteiro que contém um
endereço inválido. Para isso tente mostrar o conteúdo apontado por um ponteiro
recém-criado:

int * ptr = (int*) 0x01;
cout << *ptr;

*/

#include <iostream>
using namespace std;

int main()
{
  int *ptr = (int *)0x01;
  cout << *ptr;

  return 0;
}

// O programa compila e executa, mas ao tentar acessar o conteúdo do ponteiro, o programa é encerrado com um erro de segmentação. Isso ocorre porque o endereço 0x01 não é um endereço válido para o programa acessar. O sistema operacional não permite que o programa acesse endereços inválidos, e por isso encerra o programa.