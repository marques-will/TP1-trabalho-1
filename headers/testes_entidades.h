#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED

#include <iomanip>
#include <iostream>

#include "entidades.h"
using namespace std;

class TUEntidades {
   private:
    virtual void setUp() = 0;
    virtual void tearDown() = 0;
    virtual void testarCenarioSucesso() = 0;

   protected:
    int estado;

   public:
    const static int SUCESSO = 0;
    const static int FALHA = 1;
    int run();
    void showResult(int, string);
};

inline int TUEntidades::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

inline void TUEntidades::showResult(int result, string nome_dominio) {
    string resultado[] = {"\033[32mSUCESSO\033[0m", "\033[31mFALHA\033[0m"};
    cout << setw(16) << left << setfill('.') << nome_dominio << resultado[result] << endl;
}

//---------------------------------------------------------------------
// Teste Unitário Desenvolvedor

class TUDesenvolvedor : public TUEntidades {
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

//---------------------------------------------------------------------
// Teste Unitário Teste
class TUTeste : public TUEntidades {
   private:
    const static string VALOR_VALIDO_CODIGO;
    const static string VALOR_VALIDO_NOME;
    const static string VALOR_VALIDO_CLASSE;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    Teste *teste;
};
//---------------------------------------------------------------------
// Teste Unitário CasoDeTeste

class TUCasoDeTeste : public TUEntidades {
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