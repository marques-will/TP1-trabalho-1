#include <string>
#include "../headers/dominios.h"
using namespace std;

// Matrícula
class TUMatricula {
   private:
    string VALOR_VALIDO = "1234567";
    string VALOR_INVALIDO = "1234569";
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
    string VALOR_VALIDO = "+123456";
    string VALOR_INVALIDO = "+1234567";
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
    string VALOR_VALIDO = "10/JAN/2001";
    string VALOR_INVALIDO = "10/JAN/1999";
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
    //const static string VALOR_VALIDO;
    //const static string VALOR_INVALIDO;
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
    //const static string VALOR_VALIDO;
    //const static string VALOR_INVALIDO;
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