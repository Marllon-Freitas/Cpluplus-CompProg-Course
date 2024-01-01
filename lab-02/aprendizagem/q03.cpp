/*
Construa um programa que exiba o texto abaixo usando os recursos de
alinhamento do cout, demonstrados na questão 4 dos exercícios de fixação.
Produto    Preço/Kg  Pedido (Kg) Total Parcial
---------- --------- ----------- ---------------
Alface     R$ 1,25/   Kg 3,2Kg    R$ 4,00
Beterraba  R$ 0,65/   Kg 6,0Kg    R$ 3,90
Cenoura    R$ 0,90/   Kg 10Kg     R$ 9,00
*/

#include <iostream>
using namespace std;

int main() {
    system("chcp 1252 > nul");

    cout << left; cout.width(12); cout << "Produto";
    cout << right; cout.width(12); cout << "Preço/Kg";
    cout.width(12); cout << "Pedido (Kg)";
    cout.width(15); cout << "Total Parcial" << endl;

    cout << left; cout.width(12); cout << "----------";
    cout << right; cout.width(8); cout << "----------";
    cout.width(10); cout << "-----------";
    cout.width(15); cout << "--------------" << endl;

    cout << left; cout.width(12); cout << "Alface";
    cout << right; cout.width(8); cout << "R$ 1,25/Kg";
    cout.width(10); cout << "3,2Kg";
    cout.width(15); cout << "R$ 4,00" << endl;

    cout << left; cout.width(12); cout << "Beterraba";
    cout << right; cout.width(8); cout << "R$ 0,65/Kg";
    cout.width(10); cout << "6,0Kg";
    cout.width(15); cout << "R$ 3,90" << endl;

    cout << left; cout.width(12); cout << "Cenoura";
    cout << right; cout.width(8); cout << "R$ 0,90/Kg";
    cout.width(10); cout << "10Kg";
    cout.width(15); cout << "R$ 9,00" << endl;

    return 0;
}