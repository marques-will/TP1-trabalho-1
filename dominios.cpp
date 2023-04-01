#include "dominios.h"

#include <ctype.h>

#include <algorithm>
#include <iostream>
#include <vector>

// IMPLEMENTAÇÃO DA MATRÍCULA
void matricula::set_matricula(int matricula) {
    this->matricula = matricula;
}

int matricula::get_matricula() {
    return matricula;
}

void matricula::validar_matricula(int matricula) {
    string str = to_string(matricula);
    int tam = str.length();
    // if (tam <= 0)
}

// IMPLEMENTAÇÃO DO TELEFONE
void telefone::set_telefone(int telefone) {
    this->telefone = telefone;
}
int telefone::get_telefone() {
    return telefone;
}
void telefone::validar_telefone(int telefone) {
    string str = to_string(telefone);
    int tam = str.length();
    if (tam >= 7 && tam <= 15) {
        continue;
    } else {
        throw invalid_argument("Telefone inválido");
    }
}

// IMPLEMENTAÇÃO DA SENHA
void senha::set_senha(string senha) {
    this->senha = senha;
}
string senha::get_senha() {
    return senha;
}

// IMPLEMENTAÇÃO DO CÓDIGO
void codigo::set_codigo(string codigo) {
    this->codigo = codigo;
}

string codigo::get_codigo() {
    return codigo;
}

void codigo::validar_codigo(string codigo) {
    int tam = codigo.length();
    if (tam != 6) {
        throw invalid_argument("Código Inválido");
    }
    for (int i = 0; i < 3; i++) {
        if (!isalpha(codigo[i])) {
            throw invalid_argument("Código Inválido");
        }
    }
    for (int i = 4; i < 6; i++) {
        if (!isdigit(codigo[i])) {
            throw invalid_argument("Código Inválido");
        }
    }
}

// IMPLEMENTAÇÃO DA DATA
void data::set_data(string data) {
    this->data = data;
}

string data::get_data() {
    return data;
}

void data::validar_data(string data) {
    int tam = data.length();
    int dia, ano;
    string mes;
    int cnt = 0;
    for (int i = 0; i < tam; i++) {
        if (data[i] == '/')
            cnt++;
    }
    if (cnt != 2) {
        throw invalid_argument("Data Inválida");
    }
};

// IMPLEMENTAÇÃO DO TEXTO
void texto::set_texto(string texto) {
    this->texto = texto;
}
string texto::get_texto() {
    return texto;
}
