#include <locale.h>

#include <iostream>

#include "../headers/dominios.h"
#include "../headers/entidades.h"
#include "../headers/testes_dominios.h"
#include "../headers/testes_entidades.h"
#include "testes_dominios.cpp"
using namespace std;

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    TUTelefone teste;
    int resultado = teste.run();
    switch (resultado) {
        case TUTelefone::SUCESSO:
            cout << "Telefone - SUCESSO" << endl;
            break;

        case TUTelefone::FALHA:
            cout << "Telefone - FALHA" << endl;
            break;
    }

    return 0;
}
