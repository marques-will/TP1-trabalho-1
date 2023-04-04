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
    data exemplo;
    exemplo.set_data("12/BURRO/2099");
    cout << exemplo.get_data() << endl;
};