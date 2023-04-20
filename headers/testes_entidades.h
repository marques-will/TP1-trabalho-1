#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED
#include "dominios.h"
#include "entidades.h"
#include "../sources/dominios.cpp"
#include "../sources/entidades.cpp"
using namespace std;
class TUDesenvolvedor{
    private:
        Desenvolvedor *desenvolvedor;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();

};

#endif  // TESTES_ENTIDADES_H_INCLUDED