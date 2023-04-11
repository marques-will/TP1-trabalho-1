// BIBLIOTECAS
#include "../headers/dominios.h"

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

// IMPLEMENTAÇÃO DA MATRÍCULA
void Matricula::setValor(string matricula) {
    validar(matricula);
    this->matricula = matricula;
}

string Matricula::getValor() {
    return matricula;
}

void Matricula::validar(const string& matricula) {
    if (matricula.size() != 7) {
        throw invalid_argument("A matrícula deve conter 7 dígitos");
    }

    int fator = 1, soma = 0, digito_real;
    for (int i = 0; i < matricula.size() - 1; i++) {
        int valor = matricula[i] - '0';
        soma = soma + fator * valor;
        if (i % 2 == 0) {
            fator = 2;
            continue;
        } else {
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

    int digito_encontrado = matricula[6] - '0';
    if (digito_encontrado != digito_real) {
        throw invalid_argument("O dígito verificador está incorreto.");
    }
}

// IMPLEMENTAÇÃO DO TELEFONE
void Telefone::setValor(string telefone) {
    validar(telefone);
    this->telefone = telefone;
}

string Telefone::getValor() {
    return telefone;
}

void Telefone::validar(const string& telefone) {
    int tam = telefone.size();

    if (!(tam >= 8 && tam <= 16)) {
        throw invalid_argument("O telefone deve conter \"+\" seguido de 7 a 15 dígitos.");
    }

    for (int i = 0; i < tam; i++) {
        if (i == 0) {
            if (telefone[i] != '+')
                throw invalid_argument("O primeiro caractere deve ser \"+\".");
        } else {
            if (!isdigit(telefone[i]))
                throw invalid_argument("Número de telefone inválido.");
        }
    }
}

// IMPLEMENTAÇÃO DA SENHA
void Senha::setValor(string senha) {
    validar(senha);
    this->senha = senha;
}
string Senha::getValor() {
    return senha;
}

void Senha::validar(const string& senha) {
    if (senha.size() != 6)
        throw invalid_argument("A senha deve conter 6 caracteres.");

    for (auto ch : senha) {
        int cnt = count(senha.begin(), senha.end(), ch);
        if (cnt > 1)
            throw invalid_argument("A senha não pode conter caracteres repetidos.");
    }
}

// IMPLEMENTAÇÃO DO CÓDIGO
void Codigo::setValor(string codigo) {
    validar(codigo);
    this->codigo = codigo;
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
void Data::setValor(string data) {
    validar(data);
    this->data = data;
}

string Data::getValor() {
    return data;
}

vector<string> Data::extrair_data(const string& data) {
    vector<string> result;
    string temp_str = "";

    for (int i = 0; i < data.size(); i++) {
        if (data[i] == '/' || i == data.size() - 1) {
            result.push_back(temp_str);
            temp_str = "";
        } else {
            temp_str = temp_str + data[i];
        }
    }

    return result;
}

bool Data::bissexto(const int& ano) {
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        return true;
    }
    return false;
};

void Data::validar(const string& data) {
    int tam = data.size();
    vector<string> meses = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};
    vector<int> dias = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (count(data.begin(), data.end(), '/') != 2)
        throw invalid_argument("Formato de data inválido.");

    vector<string> partes = extrair_data(data);

    try {
        int dia = stoi(partes[0]);
        string mes = partes[1];
        int ano = stoi(partes[2]);

        for (int i = 0; i < mes.size(); i++) {  // converte caracteres de MES para upper
            if (isalpha(mes[i]))
                mes[i] = toupper(mes[i]);
        }

        if (ano < 2000 || ano > 2999)
            throw invalid_argument("Data informada deve estar entre 2000 e 2999.");

        if (find(meses.begin(), meses.end(), mes) == meses.end()) {
            throw invalid_argument("Mês inválido.");
        }

        if (mes == "FEV") {
            if (bissexto(ano))
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
void Texto::setValor(string texto) {
    validar(texto);
    this->texto = texto;
}

string Texto::getValor() {
    return texto;
}

void Texto::validar(const string& texto) {
    const string letras_digitos = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string sinais_pontuacao = ".,;?!:-@#$%&";
    const string caracteres_validos = letras_digitos + sinais_pontuacao;

    if (texto.size() < 10 || texto.size() > 20)
        throw invalid_argument("Texto deve conter de 10 e 20 caracteres.");

    for (auto ch : texto) {
        if (caracteres_validos.find(ch) == string::npos)
            throw invalid_argument("Texto contém caractere(s) inválido(s).");
    }

    if (texto.find("  ") != string::npos)
        throw invalid_argument("Texto contém espaço(s) em branco em sequência.");
}