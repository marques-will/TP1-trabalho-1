#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes_dominios.h"
#include "testes_entidades.h"

using namespace std;

int main() {
    Codigo teste;
    teste.setValor("abc123");
    cout << teste.getValor();
    return 0;
}