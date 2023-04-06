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
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        return true;
    }
    return false;
};

// IMPLEMENTAÇÃO DA MATRÍCULA
void Matricula::setValor(int nova_matricula) {
    validar(nova_matricula);
    this->matricula = nova_matricula;
}

int Matricula::getValor() {
    return matricula;
}

void Matricula::validar(const int& num_matricula) {
    string a = to_string(num_matricula);

    if (a.length() != 7) {
        throw invalid_argument("A matrícula deve conter 7 dígitos");
    }

    int fator = 1, soma = 0, digito_real;
    for (int i = 0; i < a.length() - 1; i++) {
        int valor = a[i] - '0';
        soma = soma + fator * valor;
        if(i % 2 == 0){
            fator = 2;
            continue;
        }
        else{
            fator = 1;
            continue;
        }
        
    }

    soma = soma % 10;
    if (soma != 0) {
        digito_real = 10 - soma;
    } else {
        digito_real = soma;
    }

    int digito_encontrado = a[6] - '0';
    if (digito_encontrado != digito_real) {
        throw invalid_argument("O dígito verificador está incorreto.");
    }
}

// IMPLEMENTAÇÃO DO TELEFONE
void Telefone::setValor(string novo_telefone) {
    validar(novo_telefone);
    this->telefone = novo_telefone;
}

string Telefone::getValor() {
    return telefone;
}

void Telefone::validar(const string& num_telefone) {
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
void Senha::setValor(string nova_senha) {
    validar(nova_senha);
    this->senha = nova_senha;
}
string Senha::getValor() {
    return senha;
}

void Senha::validar(const string& nova_senha) {
    if (nova_senha.size() != 6)
        throw invalid_argument("A senha deve conter 6 caracteres.");

    for (auto ch : nova_senha) {
        int cnt = count(nova_senha.begin(), nova_senha.end(), ch);
        if (cnt > 1)
            throw invalid_argument("A senha não pode conter caracteres repetidos.");
    }
}

// IMPLEMENTAÇÃO DO CÓDIGO
void Codigo::setValor(string novo_codigo) {
    validar(novo_codigo);
    this->codigo = novo_codigo;
}

string Codigo::getValor() {
    return codigo;
}

void Codigo::validar(const string& codigo) {
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
void Data::setValor(string nova_data) {
    validar(nova_data);
    this->data = nova_data;
}

string Data::getValor() {
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

void Data::validar(const string& data) {
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
void Texto::setValor(string novo_texto) {
    validar(novo_texto);
    this->texto = novo_texto;
}

string Texto::getValor() {
    return texto;
}

void Texto::validar(const string& texto) {
    if (texto.size() < 10 || texto.size() > 20)
        throw invalid_argument("Texto deve conter de 10 e 20 caracteres.");

    for (auto ch : texto) {
        if (caracteres_validos.find(ch) == string::npos)
            throw invalid_argument("Texto contém caractere(s) inválido(s).");
    }

    if (texto.find("  ") != string::npos)
        throw invalid_argument("Texto contém espaço(s) em branco em sequência.");
}