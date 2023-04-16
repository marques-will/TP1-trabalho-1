#include <locale.h>

#include <iomanip>
#include <iostream>

#include "../headers/dominios.h"
#include "../headers/entidades.h"
#include "../headers/testes_dominios.h"
#include "../headers/testes_entidades.h"
#include "testes_dominios.cpp"

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string resultado;

    cout << "DOMINIOS" << endl;
    TUTelefone teste_telefone;
    resultado = (teste_telefone.run()) ? "\033[32mSUCESSO\033[0m" : "\033[31mFALHA\033[0m";
    cout << setw(14) << left << setfill('-') << "Telefone" << resultado << endl;

    TUData teste_data;
    resultado = (teste_data.run()) ? "\033[32mSUCESSO\033[0m" : "\033[31mFALHA\033[0m";
    cout << setw(14) << left << setfill('-') << "Data" << resultado << endl;

    TUSenha teste_senha;
    resultado = (teste_senha.run()) ? "\033[32mSUCESSO\033[0m" : "\033[31mFALHA\033[0m";
    cout << setw(14) << left << setfill('-') << "Senha" << resultado << endl;

    TUTexto teste_texto;
    resultado = (teste_texto.run()) ? "\033[32mSUCESSO\033[0m" : "\033[31mFALHA\033[0m";
    cout << setw(14) << left << setfill('-') << "Texto" << resultado << endl;

    return 0;
}
