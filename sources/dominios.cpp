// BIBLIOTECAS
#include "dominios.h"

#include <algorithm>
#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
// CONSTANTES
const string letras_digitos = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string sinais_pontuacao = ".,;?!:-@#$%&";
const string sinais_acentuacao = "´~^`";
const string caracteres_validos = letras_digitos + sinais_pontuacao;

// FUNÇÕES AUXILIARES
void to_upper(string& str) {
    for (int i = 0; i < str.size(); i++) {
        if (isalpha(str[i]))
            str[i] = toupper(str[i]);
    }
}

bool ano_bissexto(const int& ano) {
    bool result = false;

    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0)
                result = true;
        } else
            result = true;
    }

    return result;
};

// IMPLEMENTAÇÃO DA MATRÍCULA
void Matricula::set_matricula(int nova_matricula) {
    validar_matricula(nova_matricula);
    this->matricula = nova_matricula;
}

int Matricula::get_matricula() {
    return matricula;
}

void Matricula::validar_matricula(const int& num_matricula) {
    string a = to_string(num_matricula);
    if (a.length() != 7) {
        throw invalid_argument("A matrícula deve conter 7 dígitos");
    }
    int fator = 8, soma = 0, digito_real;
    for (int i = 0; i < a.length() - 1; i++) {
        int valor = a[i] - '0';
        soma = soma + fator * valor;
        fator = fator - 1;
    }
    soma = soma % 10;
    if (soma != 0) {
        digito_real = 10 - soma;
    } else {
        digito_real = soma;
    }
    int digito_encontrado = a[6] - '0';
    if (digito_encontrado != digito_real) {
        throw invalid_argument("O dígito verificador está incorreto");
    }
}

// IMPLEMENTAÇÃO DO TELEFONE
void Telefone::set_telefone(string novo_telefone) {
    validar_telefone(novo_telefone);
    this->telefone = novo_telefone;
}

string Telefone::get_telefone() {
    return telefone;
}

void Telefone::validar_telefone(const string& num_telefone) {
    int tam = num_telefone.size();

    if (!(tam >= 8 && tam <= 16)) {
        throw invalid_argument("O telefone deve conter \"+\" seguido de 7 a 15 dígitos.");
    }

    for (int i = 0; i < tam; i++) {
        if (i == 0) {
            if (num_telefone[i] != '+')
                throw invalid_argument("O primeiro caractere deve ser \"+\".");
        } else {
            if (!isdigit(num_telefone[i]))
                throw invalid_argument("Número de telefone inválido.");
        }
    }
}

// IMPLEMENTAÇÃO DA SENHA
void Senha::set_senha(string nova_senha) {
    validar_senha(nova_senha);
    this->senha = nova_senha;
}
string Senha::get_senha() {
    return senha;
}

void Senha::validar_senha(const string& nova_senha) {
    if (nova_senha.size() != 6)
        throw invalid_argument("A senha deve conter 6 caracteres.");

    for (auto ch : nova_senha) {
        int cnt = count(nova_senha.begin(), nova_senha.end(), ch);
        if (cnt > 1)
            throw invalid_argument("A senha não pode conter caracteres repetidos.");
    }
}

// IMPLEMENTAÇÃO DO CÓDIGO
void Codigo::set_codigo(string novo_codigo) {
    validar_codigo(novo_codigo);
    this->codigo = novo_codigo;
}

string Codigo::get_codigo() {
    return codigo;
}

void Codigo::validar_codigo(const string& codigo) {
    int tam = codigo.size();

    if (tam != 6) {
        throw invalid_argument("Código deve conter 6 caracteres.");
    }

    for (int i = 0; i < 3; i++) {
        if (!isalpha(codigo[i])) {
            throw invalid_argument("Os três primeiros caracteres devem ser letras.");
        }
    }

    for (int i = 3; i < 6; i++) {
        if (!isdigit(codigo[i])) {
            throw invalid_argument("Os três últimos caracteres devem ser números.");
        }
    }
}

// IMPLEMENTAÇÃO DA DATA
void Data::set_data(string nova_data) {
    validar_data(nova_data);
    this->data = nova_data;
}

string Data::get_data() {
    return data;
}

vector<string> Data::extrair_data(const string& data) {
    vector<string> resultado;
    string parte;

    stringstream partes(data);
    while (getline(partes, parte, '/')) {
        resultado.push_back(parte);
    }

    return resultado;
}

void Data::validar_data(const string& data) {
    int tam = data.size();
    vector<string> meses = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};
    vector<int> dias = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (count(data.begin(), data.end(), '/') != 2)
        throw invalid_argument("Data inválida.");

    vector<string> partes = extrair_data(data);
    string str_dia = partes[0];
    string mes = partes[1];
    string str_ano = partes[2];

    try {
        int dia = stoi(str_dia);
        int ano = stoi(str_ano);

        to_upper(mes);

        if (ano < 2000 || ano > 2999)
            throw invalid_argument("Data informada deve estar entre 2000 e 2999.");

        if (find(meses.begin(), meses.end(), mes) == meses.end()) {
            throw invalid_argument("Mês inválido.");
        }

        if (mes == "FEV") {
            if (ano_bissexto(ano))
                dias[1]++;  // adiciona 1 dia em fevereiro
        }

        int pos = 0;
        for (int i = 0; i < meses.size(); i++) {
            if (meses[i] == mes) {
                pos = i;
                break;
            }
        }

        if (!(dia > 0 && dia <= dias[pos]))
            throw invalid_argument("Número de dias inválido.");

    } catch (invalid_argument& ex) {
        throw invalid_argument("Data Inválida.");
    }
};

// IMPLEMENTAÇÃO DO TEXTO
void Texto::set_texto(string novo_texto) {
    validar_texto(novo_texto);
    this->texto = novo_texto;
}

string Texto::get_texto() {
    return texto;
}

void Texto::validar_texto(const string& texto) {
    if (texto.size() < 10 || texto.size() > 20)
        throw invalid_argument("Texto deve conter de 10 e 20 caracteres.");

    for (auto ch : texto) {
        if (caracteres_validos.find(ch) == string::npos)
            throw invalid_argument("Texto contém caractere(s) inválido(s).");
    }

    if (texto.find("  ") != string::npos)
        throw invalid_argument("Texto contém espaço(s) em branco em sequência.");
}