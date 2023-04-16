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

      //  case TUTelefone::FALHA:
        //    cout << "Dominios::Telefone - teste falhou" << endl;
          //  break;

    return 0;
    }
