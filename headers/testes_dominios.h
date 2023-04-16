#ifndef TESTES_DOMINIOS_H_INCLUDED
#define TESTES_DOMINIOS_H_INCLUDED

#include <string>

#include "../headers/dominios.h"

using namespace std;

// Matrícula
// class TUMatricula {
//    private:
//     constexpr static char VALOR_VALIDO[];
//     constexpr static char VALOR_INVALIDO[];
//     Matricula *matricula;
//     int estado;

//     void setUp();
//     void tearDown();
//     void testarCenarioSucesso();
//     void testarCenarioFalha();

//    public:
//     constexpr static int SUCESSO = 0;
//     constexpr static int FALHA = -1;
//     int run();
// };

// Telefone
class TUTelefone {
   private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Telefone *telefone;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

   public:
    constexpr static int SUCESSO = 0;
    constexpr static int FALHA = -1;
    int run();
};

// Data
// class TUData {
//    private:
//     constexpr static char VALOR_VALIDO[];
//     constexpr static char VALOR_INVALIDO[];
//     Data *data;
//     int estado;
//     void setUp();
//     void tearDown();
//     void testarCenarioSucesso();
//     void testarCenarioFalha();

//    public:
//     constexpr static int SUCESSO = 0;
//     constexpr static int FALHA = -1;
//     int run();
// };

// // Senha
// class TUSenha {
//    private:
//     constexpr static char VALOR_VALIDO[];
//     constexpr static char VALOR_INVALIDO[];
//     Senha *senha;
//     int estado;
//     void setUp();
//     void tearDown();
//     void testarCenarioSucesso();
//     void testarCenarioFalha();

//    public:
//     constexpr static int SUCESSO = 0;
//     constexpr static int FALHA = -1;
//     int run();
// };

// // Texto
// class TUTexto {
//    private:
//     constexpr static char VALOR_VALIDO[];
//     constexpr static char VALOR_INVALIDO[];
//     Texto *texto;
//     int estado;
//     void setUp();
//     void tearDown();
//     void testarCenarioSucesso();
//     void testarCenarioFalha();

//    public:
//     constexpr static int SUCESSO = 0;
//     constexpr static int FALHA = -1;
//     int run();
// };

#endif  // TESTES_DOMINIOS_H_INCLUDED