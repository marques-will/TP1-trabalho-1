#include "dominios.h"
using namespace std;
//Protótipo testes domínios

//Matrícula
class TUMatricula{
    private:
        Matricula *matricula;
        int estado;
        void setUp();                           
        void tearDown();                        
        void testarCenarioSucesso();            
        void testarCenarioFalha();
    public:
        const static int sucesso = 0;
        const static int falha = -1;
        int run(); 
}

//Senha
class TUSenha{
    private:
        Senha *senha;
        int estado;
        void setUp();                           
        void tearDown();                        
        void testarCenarioSucesso();            
        void testarCenarioFalha();
    public:
        const static int sucesso = 0;
        const static int falha = -1;
        int run(); 
}

//Telefone
class TUTelefone{
    private:
        Telefone *telefone;
        int estado;
        void setUp();                           
        void tearDown();                        
        void testarCenarioSucesso();            
        void testarCenarioFalha();
    public:
        const static int sucesso = 0;
        const static int falha = -1;
        int run(); 
}

//class TUResultado{
    // 
///} implementar classe

//Código
class TUCodigo{
    private:
        Codigo *codigo;
        int estado;
        void setUp();                           
        void tearDown();                        
        void testarCenarioSucesso();            
        void testarCenarioFalha();
    public:
        const static int sucesso = 0;
        const static int falha = -1;
        int run(); 
}

//Texto
class TUTexto{
    private:
        Texto *texto;
        int estado;
        void setUp();                           
        void tearDown();                        
        void testarCenarioSucesso();            
        void testarCenarioFalha();
    public:
        const static int sucesso = 0;
        const static int falha = -1;
        int run(); 
}

//Data
class TUData{
    private:
        Data *data;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int sucesso = 0;
        const static int falha = -1;
        int run();
}
