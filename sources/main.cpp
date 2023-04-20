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
    setlocale(LC_ALL, "Portuguese");

    string resultado[] = {"\033[32mSUCESSO\033[0m", "\033[31mFALHA\033[0m"};

    cout << "DOMINIOS" << endl;
    TUTelefone teste_telefone;
    cout << setw(14) << left << setfill('-') << "Telefone" << resultado[teste_telefone.run()] << endl;  // alinhado à esquerda de 14 por causa de "Desenvolvedor"

    TUData teste_data;
    cout << setw(14) << left << setfill('-') << "Data" << resultado[teste_data.run()] << endl;

    TUSenha teste_senha;
    cout << setw(14) << left << setfill('-') << "Senha" << resultado[teste_senha.run()] << endl;

    TUTexto teste_texto;
    cout << setw(14) << left << setfill('-') << "Texto" << resultado[teste_texto.run()] << endl;

    TUMatricula teste_matricula;
    cout << setw(14) << left << setfill('-') << "Matricula" << resultado[teste_matricula.run()] << endl;

    TUCodigo teste_codigo;
    cout << setw(14) << left << setfill('-') << "Codigo" << resultado[teste_codigo.run()] << endl;

    cout << "\nENTIDADES" << endl;
    TUDesenvolvedor teste_desenvolvedor;
    cout << setw(14) << left << setfill('-') << "Desenvolvedor" << resultado[teste_desenvolvedor.run()] << endl;

    return 0;
}
