#include <iostream>

#include "../headers/dominios.h"
#include "../headers/entidades.h"
#include "../headers/testes_dominios.h"
#include "../headers/testes_entidades.h"
#include "testes_dominios.cpp"
using namespace std;

int main() {
    TUTelefone teste;
    int resultado = teste.run();
    if(resultado == 0){
        cout << "deu certo" << endl;
    }
    if(resultado ==-1){
        cout <<"deu errado" << endl;
    }
    //switch (teste.run()) {
      //  case TUTelefone::SUCESSO:
        //    cout << "Dominios::Telefone - teste bem-sucedido" << endl;
          //  break;

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
    data.setValor("29/FEV/2020");
    cout << data.getValor() << endl;

    return 0;
    }
