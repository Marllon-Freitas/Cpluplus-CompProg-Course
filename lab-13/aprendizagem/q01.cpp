/*
Considerando as declarações abaixo, responda dizendo qual o tipo da informação
que deve ser armazenada na variável:
*/
enum trave
{
  LEsq,
  LDir,
  CantoEsq,
  CantoDir,
  Centro
};
union jogador
{
  char nome[25];
  int numero;
};
struct gol
{
  jogador jog;   // identificação do jogador
  float x, y, z; // posição da bola nas coordenadas
  trave local;   // onde a bola entrou
  float velo;    // velocidade da bola
  float acel;    // aceleração da bola
};
gol estatistica[10]; // estatísticas para até 10 gols

/*
i) estatistica
R: array de 10 posições do tipo gol
j) estatistica[4]
R: variável do tipo gol
k) estatistica[1].jog
R: variável do tipo jogador(união)
l) estatistica->jog.numero
R: não é possível acessar a variável estatistica dessa forma, pois ela é um array,
    e não um ponteiro, mas se fosse possível, seria uma variável do tipo int
m) (estatistica + 9)->local
R: variável do tipo trave(enum)
n) estatistica[2].velo
R: variável do tipo float
o) (estatistica + 1)->jog.nome[0]
R: variável do tipo char
p) estatistica[6].acel
R: variável do tipo float
*/