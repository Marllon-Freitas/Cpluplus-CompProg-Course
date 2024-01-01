/*
Crie um programa que receba 3 argumentos pela linha de comando e exiba apenas
o primeiro e o último dentro de uma mensagem.
*/

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Uso: " << argv[0] << " <arg1> <arg2> <arg3>" << std::endl;
        return 1;
    }

    std::string primeiroArgumento = argv[1];
    std::string ultimoArgumento = argv[3];

    std::cout << "Estou aprendendo " << primeiroArgumento << "/" << ultimoArgumento << "!" << std::endl;

    return 0;
}