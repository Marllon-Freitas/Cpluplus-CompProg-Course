/*
Crie um programa que receba o nome de um aplicativo do sistema pela linha de
comando e abra o aplicativo. 
Use as linhas de comando abaixo para testar seu
programa. 
Ele deve abrir a calculadora (calc), o bloco de notas (notepad) e o
programa de pintura (mspaint).
*/

#include <iostream>
#include <windows.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Uso: " << argv[0] << " <nome_do_aplicativo>" << std::endl;
        return 1;
    }

    std::string appName = argv[1];

    // Verificar qual aplicativo foi solicitado
    if (appName == "calc") {
        system("start calc");
    }
    else if (appName == "notepad") {
        system("start notepad");
    }
    else if (appName == "mspaint") {
        system("start mspaint");
    }
    else {
        std::cerr << "Aplicativo desconhecido: " << appName << std::endl;
        return 1;
    }

    return 0;
}