/*
Escreva uma função que receba um código numérico, tal como 65, e exiba na tela o
caractere correspondente da tabela ASCII. No programa principal use essa função
várias vezes para exibir os caracteres correspondentes aos números 80, 114, 111,
103, 67, 111, 109, 112.

*/

#include <iostream>
using namespace std;

void ascii(int num){
    cout << (char)num << endl;
}

int main(){
    ascii(80);
    ascii(114);
    ascii(111);
    ascii(103);
    ascii(67);
    ascii(111);
    ascii(109);
    ascii(112);
    return 0;
}
