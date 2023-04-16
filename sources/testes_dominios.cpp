#include "../headers/testes_dominios.h"

#include "../headers/dominios.h"
#include "dominios.cpp"

// IMPLEMENTAÇÃO DO TESTE DO TELEFONE - 221020940
const string TUTelefone::VALOR_VALIDO = "+1234567";
const string TUTelefone::VALOR_INVALIDO = "1234567";

void TUTelefone::setUp() {
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown() {
    delete telefone;
}

void TUTelefone::testarCenarioSucesso() {
    try {
        telefone->setValor(VALOR_VALIDO);
        if (telefone->getValor() != VALOR_VALIDO)  // verifica funcionamente do setter e do getter
            estado = FALHA;
    } catch (invalid_argument &excecao) {  // verifica se o validador identificou como valor como válido
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha() {
    try {
        telefone->setValor(VALOR_INVALIDO);
        estado = FALHA;  // verifica se o validador setou valor inválido
    } catch (invalid_argument &excecao) {
        if (telefone->getValor() == VALOR_INVALIDO)  // verifica o setter
            estado = FALHA;
    }
}

bool TUTelefone::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}