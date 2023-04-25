#ifndef TESTES_DOMINIOS_H_INCLUDED
#define TESTES_DOMINIOS_H_INCLUDED

#include <string>

#include "dominios.h"

using namespace std;

class TUDominios {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

   protected:
    int estado;

    virtual void setUp() = 0;
    virtual void tearDown() = 0;
    virtual void testarCenarioSucesso() = 0;
    virtual void testarCenarioFalha() = 0;

   public:
    const static int SUCESSO = 0;
    const static int FALHA = 1;
    void showResult(int result, string nome_dominio);
    int run();
};

//---------------------------------------------------------------------
// Teste Unitário Matricula
class TUMatricula : public TUDominios {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Matricula *matricula;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
};

//---------------------------------------------------------------------
// Teste Unitário Codigo - 221006351
class TUCodigo : public TUDominios {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Codigo *codigo;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
};

//---------------------------------------------------------------------};
// Teste Unitário Telefone
class TUTelefone : public TUDominios {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Telefone *telefone;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
};

//---------------------------------------------------------------------
// Teste Unitário Data
class TUData : public TUDominios {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Data *data;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
};

//---------------------------------------------------------------------
// Teste Unitário Senha
class TUSenha : public TUDominios {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Senha *senha;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
};

//---------------------------------------------------------------------
// Teste Unitário  Texto
class TUTexto : public TUDominios {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Texto *texto;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
};

#endif  // TESTES_DOMINIOS_H_INCLUDED