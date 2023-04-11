#include <iostream>
#include "../headers/dominios.h"
#include "dominios.cpp"
#include <locale.h>
//#include "../headers/entidades.h"
//#include "../headers/testes_dominios.h"
//#include "../headers/testes_entidades.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    Codigo teste;
    teste.setValor("ab123");
    cout << teste.getValor();
    return 0;
}