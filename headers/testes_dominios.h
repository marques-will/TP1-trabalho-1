#ifndef TESTES_DOMINIOS_H_INCLUDED
#define TESTES_DOMINIOS_H_INCLUDED

#include <iomanip>
#include <iostream>
#include <string>

#include "dominios.h"

using namespace std;

//---------------------------------------------------------------------
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
    int run();
    void showResult(int result, string nome_dominio);
};

inline int TUDominios::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

inline void TUDominios::showResult(int result, string nome_dominio) {
    string resultado[] = {"\033[32mSUCESSO\033[0m", "\033[31mFALHA\033[0m"};
    cout << setw(16) << left << setfill('.') << nome_dominio << resultado[result] << endl;
}

//---------------------------------------------------------------------
// Teste Unitário  Classe
class TUClasse : public TUDominios {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Classe *classe;

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
// Teste Unitário  Resultado
class TUResultado : public TUDominios {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    Resultado *resultado;

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
