#include <locale.h>

#include <iomanip>
#include <iostream>

#include "../headers/dominios.h"
#include "../headers/entidades.h"
#include "../headers/testes_dominios.h"
#include "../headers/testes_entidades.h"
#include "dominios.cpp"
#include "entidades.cpp"
#include "testes_dominios.cpp"
#include "testes_entidades.cpp"

using namespace std;

int main() {
    string resultado[] = {"\033[32mSUCESSO\033[0m", "\033[31mFALHA\033[0m"};
    setlocale(LC_ALL, "Portuguese");

    cout << "DOMINIOS" << endl;
    TUCodigo teste_codigo;
    teste_codigo.showResult(teste_codigo.run(), "Codigo");

    TUData teste_data;
    teste_data.showResult(teste_data.run(), "Data");

    TUMatricula teste_matricula;
    teste_matricula.showResult(teste_matricula.run(),"Matricula");

    TUSenha teste_senha;
    teste_senha.showResult(teste_senha.run(),"Senha");

    TUTelefone teste_telefone;
    teste_telefone.showResult(teste_telefone.run(),"Telefone");

    TUTexto teste_texto;
    teste_texto.showResult(teste_texto.run(),"Texto");

    cout << "\nENTIDADES" << endl;
    TUDesenvolvedor teste_desenvolvedor;
    teste_desenvolvedor.showResult(teste_desenvolvedor.run(),"Desenvolvedor");

    TUCasoDeTeste teste_casodeteste;
    teste_casodeteste.showResult(teste_casodeteste.run(),"CasoDeTeste");

    return 0;
}
