#include "../headers/testes_entidades.h"

using namespace std;

// TESTE DESENVOLVEDOR
const string TUDesenvolvedor::VALOR_VALIDO_TEXTO = "joaozinho123";
const string TUDesenvolvedor::VALOR_VALIDO_MATRICULA = "1234567";
const string TUDesenvolvedor::VALOR_VALIDO_SENHA = "abc123";
const string TUDesenvolvedor::VALOR_VALIDO_TELEFONE = "+1234567";

void TUDesenvolvedor::setUp() {
    desenvolvedor = new Desenvolvedor();
    estado = SUCESSO;
}

void TUDesenvolvedor::tearDown() {
    delete desenvolvedor;
}

void TUDesenvolvedor::testarCenarioSucesso() {
    Matricula matricula;
    matricula.setValor(VALOR_VALIDO_MATRICULA);
    desenvolvedor->setMatricula(matricula);
    if (desenvolvedor->getMatricula().getValor() != VALOR_VALIDO_MATRICULA)
        estado = FALHA;

    Texto nome;
    nome.setValor(VALOR_VALIDO_TEXTO);
    desenvolvedor->setNome(nome);nome.setValor(VALOR_VALIDO_TEXTO);
    if (desenvolvedor->getNome().getValor() != VALOR_VALIDO_TEXTO)
        estado = FALHA;

    Senha senha;
    senha.setValor(VALOR_VALIDO_SENHA);
    desenvolvedor->setSenha(senha);
    if (desenvolvedor->getSenha().getValor() != VALOR_VALIDO_SENHA)
        estado = FALHA;

    Telefone telefone;
    telefone.setValor(VALOR_VALIDO_TELEFONE);
    desenvolvedor->setTelefone(telefone);
    if (desenvolvedor->getTelefone().getValor() != VALOR_VALIDO_TELEFONE)
        estado = FALHA;
}

int TUDesenvolvedor::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}