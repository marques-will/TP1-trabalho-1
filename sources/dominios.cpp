// BIBLIOTECAS
#include "../headers/dominios.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// VALIDAÇÃO SETTER E GETTER
void Dominios::setValor(string valor) {
    this->valor = valor;
}

string Dominios::getValor() {
    return valor;
}

// VALIDAÇÃO DA MATRÍCULA
void Matricula::validar(const string& matricula) {
    if (matricula.size() != 7) {
        throw invalid_argument("A matrícula deve conter 7 dígitos");
    }
//ALGORITMO PARA O DÍGITO VERIFICADOR
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

// VALIDAÇÃO DO TELEFONE
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

// VALIDAÇÃO DA SENHA
void Senha::validar(const string& senha) {
    if (senha.size() != 6)
        throw invalid_argument("A senha deve conter 6 caracteres.");

    for (auto ch : senha) {
        int cnt = count(senha.begin(), senha.end(), ch);
        if (cnt > 1)
            throw invalid_argument("A senha não pode conter caracteres repetidos.");
    }
}

// VALIDAÇÃO DO CÓDIGO
void Codigo::validar(const string& codigo) {
    int tam = codigo.size();

    if (tam != 6) {
        throw invalid_argument("Código deve conter 6 caracteres.");
    }

    for (int i = 0; i < 6; i++) {
        if (i < 3) {
            if (!isalpha(codigo[i]))
                throw invalid_argument("Os três primeiros caracteres devem ser letras.");
        } else {
            if (!isdigit(codigo[i]))
                throw invalid_argument("Os três últimos caracteres devem ser números.");
        }
    }
}

// VALIDAÇÃO DA DATA
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

void Data::validar(string& data) {

    vector<string> meses = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};
    vector<int> dias = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (count(data.begin(), data.end(), '/') != 2)
        throw invalid_argument("Formato de data inválido.");

    vector<string> partes = extrair_data(data);

    int dia, ano;
    string mes;
    try {
        dia = stoi(dia_mes_ano[0]);
        mes = dia_mes_ano[1];
        ano = stoi(dia_mes_ano[2]);
    } catch (...) {
        throw invalid_argument("Data Inválida.");
    }


    for (int i = 0; i < mes.size(); i++) {  // converte caracteres de MES para upper
        if (isalpha(mes[i]))
            mes[i] = isalpha(mes[i]) ? toupper(mes[i]) : mes[i];
    }

    if (ano < 2000 || ano > 2999)  // verifica se o ano está entre 2000 e 2999
        throw invalid_argument("Data informada deve estar entre 2000 e 2999.");

    int pos;
    if (find(meses.begin(), meses.end(), mes) == meses.end())  // verifica se a sigla está no vetor
        throw invalid_argument("Sigla do mês inválida.");
    else
        pos = distance(meses.begin(), find(meses.begin(), meses.end(), mes));  // distancia do inicio até a ocorrencia

    if (mes == "FEV")
        if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))  // verifica se é ano bissexto
            dias[1]++;                                           // adiciona 1 dia em fevereiro

    if (dia < 1 || dia > dias[pos])
        throw invalid_argument("Número de dias inválido.");
};

// VALIDAÇÃO DO TEXTO
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
