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
void showResult(int result, string class_name) {
    string resultado[] = {"\033[32mSUCESSO\033[0m", "\033[31mFALHA\033[0m"};
    cout << setw(16) << left << setfill('.') << class_name << resultado[result] << endl;
}

int main() {
    string resultado[] = {"\033[32mSUCESSO\033[0m", "\033[31mFALHA\033[0m"};
    setlocale(LC_ALL, "Portuguese");

    cout << "DOMINIOS" << endl;
    TUCodigo teste_codigo;
    // showResult(teste_codigo.run(), "Codigo");
    cout << setw(16) << left << setfill('.') << "Codigo" << resultado[teste_codigo.run()] << endl;

    TUData teste_data;
    // showResult(teste_data.run(), "Data");
    cout << setw(16) << left << setfill('.') << "Data" << resultado[teste_data.run()] << endl;

    TUMatricula teste_matricula;
    // showResult(teste_matricula.run(), "Matricula");
    cout << setw(16) << left << setfill('.') << "Matricula" << resultado[teste_matricula.run()] << endl;

    TUSenha teste_senha;
    // showResult(teste_senha.run(), "Senha");
    cout << setw(16) << left << setfill('.') << "Senha" << resultado[teste_senha.run()] << endl;

    TUTelefone teste_telefone;
    // showResult(teste_telefone.run(), "Telefone");
    cout << setw(16) << left << setfill('.') << "Telefone" << resultado[teste_telefone.run()] << endl;

    TUTexto teste_texto;
    // showResult(teste_texto.run(), "Texto");
    cout << setw(16) << left << setfill('.') << "Texto" << resultado[teste_texto.run()] << endl;

    cout << "\nENTIDADES" << endl;
    TUDesenvolvedor teste_desenvolvedor;
    // showResult(teste_desenvolvedor.run(), "Desenvolvedor");
    cout << setw(16) << left << setfill('.') << "Desenvolvedor" << resultado[teste_desenvolvedor.run()] << endl;

    TUCasoDeTeste teste_casodeteste;
    // showResult(teste_casodeteste.run(), "CasoDeTeste");
    cout << setw(16) << left << setfill('.') << "CasoDeTeste" << resultado[teste_casodeteste.run()] << endl;

    return 0;
}
