// BIBLIOTECAS
#include "dominios.h"

#include <algorithm>
#include <cctype>
#include <iostream>
#include <sstream>
#include <vector>

// CONSTANTES
const string letras_digitos = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string sinais_pontuacao = ".,;?!:-@#$%&";
const string caracteres_validos = letras_digitos + sinais_pontuacao;

// FUNÇÕES AUXILIARES
template <typename T>

bool inVector(const T& elemento, const vector<T>& vetor) {
    auto encontrado = find(vetor.begin(), vetor.end(), elemento);  // itera no vetor comparando cada elemento com str
    return encontrado != vetor.end();
}

void toupper(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i]))
            str[i] = toupper(str[i]);
    }
};

// IMPLEMENTAÇÃO DA MATRÍCULA
void matricula::set_matricula(int novaMatricula) {
    this->matricula = novaMatricula;
}

int matricula::get_matricula() {
    return matricula;
}

void matricula::validar_matricula(int numMatricula) {
    if (numMatricula < 1000000 || numMatricula > 9999999) {
        throw invalid_argument("A matrícula deve conter 7 dígitos.");
    }
}

// IMPLEMENTAÇÃO DO TELEFONE
void telefone::set_telefone(string novoTelefone) {
    this->telefone = novoTelefone;
}

string telefone::get_telefone() {
    return telefone;
}

void telefone::validar_telefone(string numTelefone) {
    int tam = numTelefone.size();

    if (tam != 8 || tam != 16) {
        throw invalid_argument("O telefone deve conter \"+\" seguido de 7 ou 15 dígitos.");
    }

    for (int i = 1; i < tam; i++) {
        if (!isdigit(numTelefone[i]))
            throw invalid_argument("O telefone deve conter \"+\" seguido de 7 ou 15 dígitos.");
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
    int tam = codigo.size();

    if (tam != 6) {
        throw invalid_argument("Código deve conter 6 caracteres.");
    }

    for (int i = 0; i < 3; i++) {
        if (!isalpha(codigo[i])) {
            throw invalid_argument("Os três primeiros caracteres devem ser letras.");
        }
    }

    for (int i = 4; i < 6; i++) {
        if (!isdigit(codigo[i])) {
            throw invalid_argument("Os três últimos caracteres devem ser números.");
        }
    }
}

// IMPLEMENTAÇÃO DA DATA
void data::set_data(string novaData) {
    this->data = novaData;
}

string data::get_data() {
    return data;
}

vector<string> data::extrair_data(const string& data) {
    vector<string> resultado;
    string parte;

    stringstream partes(data);
    while (getline(partes, parte, '/')) {
        resultado.push_back(parte);
    }

    return resultado;
}

bool ehBissexto(const int& ano) {
    bool result = false;

    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400)
                result = true;
        } else
            result = true;
    }

    return result;
};

void data::validar_data(string data) {
    int tam = data.size();
    vector<string> meses = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};
    vector<int> dias = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cnt = 0;

    for (int i = 0; i < tam; i++) {
        if (data[i] == '/')
            cnt++;
    }

    if (cnt != 2)
        throw invalid_argument("Data inválida.");

    vector<string> partes = extrair_data(data);
    string str_dia = partes[0];
    string mes = partes[1];
    string str_ano = partes[2];

    try {
        int dia = stoi(str_dia);
        int ano = stoi(str_ano);
        toupper(mes);

        if (ano < 2000 || ano > 2999)
            throw invalid_argument("Data informada deve estar entre 2000 e 2999.");

        if (!inVector(mes, meses)) {
            throw invalid_argument("Mês inválido.");
        }

        if (mes == "FEV") {
            if (ehBissexto(ano))
                dias[1]++;  // adiciona 1 dia em fevereiro
        }

        int pos = 0;
        for (int i = 0; i < meses.size(); i++) {
            if (meses[i] == mes) {
                pos = i;
                break;
            }
        }

        if (!(dia > 0 && dia < dias[pos]))
            throw invalid_argument("Número de dias inválido.");

    } catch (invalid_argument& ex) {
        throw invalid_argument("Data Inválida.");
    }
};

// IMPLEMENTAÇÃO DO TEXTO
void texto::set_texto(string texto) {
    this->texto = texto;
}

string texto::get_texto() {
    return texto;
}

void texto::validar_texto(const string& texto) {
    if (texto.size() < 10 || texto.size() > 20)
        throw invalid_argument("Texto deve conter de 10 e 20 caracteres.");
    for (auto ch : texto) {
        if (caracteres_validos.find(ch) == -1 || ch == ' ')
            throw invalid_argument("Texto contém caractere(s) inválido(s).");
    }
}