#include <locale.h>

#include <iostream>

#include "../headers/dominios.h"
#include "dominios.cpp"
// #include "../headers/entidades.h"
// #include "../headers/testes_dominios.h"
// #include "../headers/testes_entidades.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    Codigo teste;
    teste.setValor("abc123");
    cout << teste.getValor() << endl;

    Telefone telefone;
    telefone.setValor("+12345678");
    cout << telefone.getValor() << endl;

    Matricula matricula;
    matricula.setValor("1234567");
    cout << matricula.getValor() << endl;

    Texto texto;
    texto.setValor("o joao eh broxa");
    cout << texto.getValor() << endl;

    Data data;
    data.setValor("29/FEV/2021");
    cout << data.getValor() << endl;

    return 0;
}
