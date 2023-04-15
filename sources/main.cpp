#include <iostream>

#include "../headers/dominios.h"
#include "../headers/entidades.h"
#include "../headers/testes_dominios.h"
// #include "testes_entidades.h"
using namespace std;

int main() {
    TUTelefone teste;
    switch (teste.run()) {
        case TUTelefone::SUCESSO:
            cout << "Dominios::Telefone - teste bem-sucedido" << endl;
            break;

        case TUTelefone::FALHA:
            cout << "Dominios::Telefone - teste falhou" << endl;
            break;
    }
    return 0;
}
