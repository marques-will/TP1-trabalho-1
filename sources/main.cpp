#include <iostream>
#include "../headers/dominios.h"
#include "dominios.cpp"
//#include "../headers/entidades.h"
//#include "../headers/testes_dominios.h"
//#include "../headers/testes_entidades.h"

using namespace std;

int main() {
    Codigo teste;
    teste.setValor("abc123");
    cout << teste.getValor();
    return 0;
}