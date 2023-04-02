#include "dominios.h"
#include <string>
using namespace std;
//Protótipo testes domínios

//Matrícula
class TUMatricula{
    private:
        const static int invalido = 
        const static int valido = 
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
        const static string invalido =   
        const static string valido =  
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
        const static int invalido = 123456;
        const static int valido = 1234567;
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
        const static int invalido = 
        const static int valido = 
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
        const static int invalido = 
        const static int valido = 
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
        const static int invalido = 
        const static int valido = 
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
