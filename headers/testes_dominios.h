#include <string>

#include "dominios.h"
using namespace std;

// Matrícula
class TUMatricula {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Matricula *matricula;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

// Telefone
class TUTelefone {
   private:
    const static int VALOR_VALIDO = +123456;
    const static int VALOR_INVALIDO = +1234567;
    Telefone *telefone;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

// Data
class TUData {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

// Senha
class TUSenha {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

// Texto
class TUTexto {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Texto *texto;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};