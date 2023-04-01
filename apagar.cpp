#include <iostream>
#include <sstream>
#include <vector>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

vector<string> extrair_data(const string& data) {
    vector<string> resultado;
    string parte;

    stringstream partes(data);
    while (getline(partes, parte, '/')) {
        resultado.push_back(parte);
    }

    return resultado;
}

int main() {
    string data;
    cin >> data;
    vector<string> partes = extrair_data(data);
    string dia = partes[0];
    string mes = partes[1];
    string ano = partes[2];

    cout << "Dia: " << dia << endl;
    cout << "Mês: " << mes << endl;
    cout << "Ano: " << ano << endl;

    return 0;
};