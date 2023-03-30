#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
using namespace std;
//Implementação das Classes

//CLASSE MATRICULA
class matricula{
    public:
        void validar_matricula(int matricula);
        void set_matricula(int matricula);
        int get_matricula();
    private:
        int matricula;
}

//CLASSE SENHA
class senha{
    public:
        void validar_senha(string senha);
        void set_senha(string senha);
        string get_senha();
    private:
        string senha;
}

//CLASSE TELEFONE
class telefone{
    public:
        void validar_telefone(int telefone);
        void set_telefone(int telefone);
        int get_telefone();
    private:
        int telefone;
}

//CLASSE RESULTADO
class resultado{
    public:
        
        string get_resultado();
    private:
        resultado();

}

//CLASSE DATA
class data{
    public:
        void validar_data(string data);
        void set_data(string data);
        string get_data();
    private:
        string data;
}

//CLASSE CODIGO
class codigo{
    public:
        void validar_codigo(string codigo);
        void set_codigo(string codigo);
        string get_codigo();
    private:
        string codigo;
}

//CLASS CLASSE
class classe{
    public:
    private:
}

//CLASSE TEXTO
class texto{
    public:
        void validar_texto(string texto);
        void set_texto(string texto);
        string get_texto();
    private:
        string texto;
}
#endif
