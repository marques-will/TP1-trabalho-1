#include "../headers/entidades.h"
#include "../headers/dominios.h"
#include "../headers/testes_entidades.h"
#include "dominios.cpp"
#include "entidades.cpp"
using namespace std;

//TESTE DESENVOLVEDOR
void TUDesenvolvedor::setUp(){
    Matricula matricula;
    matricula.setValor("1234567");
    desenvolvedor->setMatricula(matricula);
    Texto nome;
    nome.setValor("joazinho");
    desenvolvedor->setTexto(nome);
    Senha senha;
    senha.setValor("abc123");
    desenvolvedor->setSenha(senha);
    Telefone telefone;
    telefone.setValor("+1234567");
    desenvolvedor->setTelefone(telefone);
}

