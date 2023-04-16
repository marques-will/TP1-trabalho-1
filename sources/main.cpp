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

    string resultado = (teste.run()) ? "Telefone - SUCESSO " : " Telefone - FALHA ";
    cout << resultado << endl;

    return 0;
    }
