/*
Uma cor pode ser representada pela combinação de 4 valores de intensidade para
R (Red), G (Green), B (Blue) e A (Alpha). Esses valores podem ser guardados em
um registro com 4 inteiros de 8 bits (0-255) ou por um valor inteiro de 32 bits
codificado com os 4 valores. Construa uma união para armazenar uma cor. Em
seguida construa uma função para ler do usuário uma cor no formato RGBA e outra
para ler uma cor no formato inteiro de 32 bits. Ambas as funções devem receber o
endereço de uma variável do tipo cor e modificar a variável recebida, sem retornar
valor.

Digite uma cor no formato
RGBA : 38 38 38 0
Int32: 640034304

*/

#include <iostream>
using namespace std;

union Color
{
  struct
  {
    unsigned char a;
    unsigned char b;
    unsigned char g;
    unsigned char r;
  } rgba;

  unsigned coded;
};

void ReadRGBA(Color *pcolor);
void ReadInt32(Color *pcolor);
void ShowColor(Color *pcolor, bool type);

int main()
{
  cout << "Digite uma cor no formato\n";
  cout << "RGBA: ";
  Color frente;
  ReadRGBA(&frente);

  cout << "Int32: ";
  Color fundo;
  ReadInt32(&fundo);

  cout << "\nExibindo as cores em formatos invertidos:\n";
  ShowColor(&frente, false);
  ShowColor(&fundo, true);
}

void ReadRGBA(Color *pcolor)
{
  short r, g, b, a;
  cin >> r >> g >> b >> a;

  pcolor->rgba.r = unsigned char(r);
  pcolor->rgba.g = unsigned char(g);
  pcolor->rgba.b = unsigned char(b);
  pcolor->rgba.a = unsigned char(a);
}

void ReadInt32(Color *pcolor)
{
  cin >> pcolor->coded;
}

void ShowColor(Color *pcolor, bool type)
{
  if (type == true)
  {
    cout << "RGBA("
         << int(pcolor->rgba.r) << ","
         << int(pcolor->rgba.g) << ","
         << int(pcolor->rgba.b) << ","
         << int(pcolor->rgba.a) << ")"
         << endl;
  }
  else
  {
    cout << pcolor->coded << endl;
  }
}
