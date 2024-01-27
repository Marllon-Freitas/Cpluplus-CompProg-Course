/*
Considerando as declarações abaixo, responda dizendo qual o tipo da informação
que deve estar armazenada na variável:

*/

#include <iostream>
using namespace std;

enum direcao
{
  N,
  NE,
  E,
  SE,
  S,
  SW,
  W,
  NW
};
union identificador
{
  char codigo[5];
  int numero;
};

struct bola
{
  identificador id; // identificação da bola
  char marca[30];   // marca da bola
  int posX;         // posição no eixo X
  int posY;         // posição no eixo Y
  direcao dir;      // orientação no plano
  float vel;        // velocidade
  float acel;       // aceleração
};

int main()
{
  bola proVolley[10]; // declaração de variável

  return 0;
}

/*
a) proVolley
R: vetor de bolas
b) proVolley[4]
R: bola
c) proVolley[1].marca
R: vetor de char
d) proVolley[1].marca[2]
R: char
e) proVolley[0].dir
R: direcao
f) proVolley[4].id
R: identificador
g) proVolley[3].id.numero
R: int
h) proVolley[9].acel
R: float
*/