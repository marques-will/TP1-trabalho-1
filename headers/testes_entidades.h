#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED

#include "entidades.h"

using namespace std;

class TU{
    private:
        virtual void setUp() = 0;
        virtual void tearDown() = 0;
        virtual void testarCenarioSucesso() = 0;
    public:
        const static int SUCESSO = 0;
        const static int FALHA = 1;
        int run();
        int estado;
};

inline int TU::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

class TUDesenvolvedor: public TU {
   private:
    const static string VALOR_VALIDO_NOME;
    const static string VALOR_VALIDO_MATRICULA;
    const static string VALOR_VALIDO_SENHA;
    const static string VALOR_VALIDO_TELEFONE;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    Desenvolvedor *desenvolvedor;
};

class TUCasoDeTeste: public TU{
    private:
        const static string VALOR_VALIDO_NOME;
        const static string VALOR_VALIDO_DATA;
        const static string VALOR_VALIDO_ACAO;
        const static string VALOR_VALIDO_RESPOSTA;
        const static string VALOR_VALIDO_RESULTADO;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        CasoDeTeste *casodeteste;
};
#endif  // TESTES_ENTIDADES_H_INCLUDED