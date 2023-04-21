#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED

#include "entidades.h"

using namespace std;
class TUDesenvolvedor {
   private:
    const static string VALOR_VALIDO_NOME;
    const static string VALOR_VALIDO_MATRICULA;
    const static string VALOR_VALIDO_SENHA;
    const static string VALOR_VALIDO_TELEFONE;

    Desenvolvedor *desenvolvedor;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

   public:
    const static int SUCESSO = 0;
    const static int FALHA = 1;
    int run();
};

class TUCasoDeTeste{
    private:
        const static string VALOR_VALIDO_NOME;
        const static string VALOR_VALIDO_DATA;
        const static string VALOR_VALIDO_ACAO;
        const static string VALOR_VALIDO_RESPOSTA;
        const static string VALOR_VALIDO_RESULTADO;
        CasoDeTeste *casodeteste;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = 1;
        int run();
};
#endif  // TESTES_ENTIDADES_H_INCLUDED