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

int TUTelefone::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// IMPLEMENTAÇÃO DO TESTE DO DATA - 221020940
const string TUData::VALOR_VALIDO = "29/FEV/2020";
const string TUData::VALOR_INVALIDO = "29/FEV/2021";

void TUData::setUp() {
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown() {
    delete data;
}

void TUData::testarCenarioSucesso() {
    try {
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO)  // verifica funcionamente do setter e do getter
            estado = FALHA;
    } catch (invalid_argument &excecao) {  // verifica se o validador identificou como valor como válido
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha() {
    try {
        data->setValor(VALOR_INVALIDO);
        estado = FALHA;  // verifica se o validador setou valor inválido
    } catch (invalid_argument &excecao) {
        if (data->getValor() == VALOR_INVALIDO)  // verifica o setter
            estado = FALHA;
    }
}

int TUData::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// IMPLEMENTAÇÃO DO TESTE DA SENHA - 221020940
const string TUSenha::VALOR_VALIDO = "w1Ly4n";
const string TUSenha::VALOR_INVALIDO = "minhasenha123";

void TUSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown() {
    delete senha;
}

void TUSenha::testarCenarioSucesso() {
    try {
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)  // verifica funcionamente do setter e do getter
            estado = FALHA;
    } catch (invalid_argument &excecao) {  // verifica se o validador identificou como valor como válido
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha() {
    try {
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;  // verifica se o validador setou valor inválido
    } catch (invalid_argument &excecao) {
        if (senha->getValor() == VALOR_INVALIDO)  // verifica o setter
            estado = FALHA;
    }
}

int TUSenha::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// IMPLEMENTAÇÃO DO TESTE DA TEXTO - 221020940
const string TUTexto::VALOR_VALIDO = "o joao eh broxa";
const string TUTexto::VALOR_INVALIDO = "abc123";

void TUTexto::setUp() {
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown() {
    delete texto;
}

void TUTexto::testarCenarioSucesso() {
    try {
        texto->setValor(VALOR_VALIDO);
        if (texto->getValor() != VALOR_VALIDO)  // verifica funcionamente do setter e do getter
            estado = FALHA;
    } catch (invalid_argument &excecao) {  // verifica se o validador identificou como valor como válido
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha() {
    try {
        texto->setValor(VALOR_INVALIDO);
        estado = FALHA;  // verifica se o validador setou valor inválido
    } catch (invalid_argument &excecao) {
        if (texto->getValor() == VALOR_INVALIDO)  // verifica o setter
            estado = FALHA;
    }
}

int TUTexto::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}