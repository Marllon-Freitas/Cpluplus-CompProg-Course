
#include <iostream>
using namespace std;

#define black "\033[7;37;40m"
#define yellow "\033[1;33;44m"
#define green "\033[32m"
#define red "\033[4;31m"
#define foreg "\033[38;5;154m"
#define backg "\033[38;5;0;48;5;154m"
#define default "\033[m"

int main()
{
 cout << black << "Preto no Branco" << default << endl;
 cout << yellow << "Amarelo Intenso com Azul" << default << endl;
 cout << green << "Verde Normal" << default << endl;
 cout << red << "Vermelho Sublinhado" << default << endl;
 cout << foreg << "256 Cores" << default << endl;
 cout << backg << "256 Cores" << default << endl;
 return 0;
}

/*
O programa usa códigos de Escape definidos pela ANSI para mudar as cores do
terminal de comandos. Eles são válidos para todos os sistemas operacionais, e
definidos por um estilo, cor da letra e cor do fundo:
\033[ estilo; letra; fundo m
Estilo: 0 = normal, 1 = bold, 4 = underline, 7 = negative
Letra: 30=black, 31=red, 32=green, 33=yellow, 34=blue, 35=magenta, 36=cyan, 37=white
Fundo: 40=black, 41=red, 42=green, 43=yellow, 44=blue, 45=magenta, 46=cyan, 47=white
Um conjunto estendido (com 256 cores) é suportado por alguns terminais:
Letra: \033[38;5;{0-255}m
Fundo: \033[48;5;{0-255}m
*/