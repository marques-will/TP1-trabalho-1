#include <locale.h>

#include <iostream>

#include "../headers/dominios.h"
#include "../headers/entidades.h"
#include "../headers/testes_dominios.h"
#include "../headers/testes_entidades.h"
#include "testes_dominios.cpp"

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    TUTelefone teste;
    string resultado = (teste.run()) ? "\033[32mSUCESSO\033[0m" : "\033[31mFALHA\033[0m";
    cout << "Telefone: " << resultado << endl;

    return 0;
}
