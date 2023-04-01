#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
using namespace std;

// CLASSE MATRICULA
class matricula {
   private:
    int matricula;

   public:
    void set_matricula(int matricula);
    int get_matricula();
    void validar_matricula(int matricula);
};

// CLASSE SENHA
class senha {
   private:
    string senha;

   public:
    void set_senha(string senha);
    string get_senha();
};

// CLASSE TELEFONE
class telefone {
   private:
    int telefone;

   public:
    void set_telefone(int telefone);
    int get_telefone();
    void validar_telefone(int telefone);
};

// CLASSE RESULTADO
class resultado {
   private:
    resultado();

   public:
    string get_resultado();
};

// CLASSE CODIGO
class codigo {
   private:
    string codigo;

   public:
    void set_codigo(string codigo);
    string get_codigo();
    void validar_codigo(string codigo);
};

// CLASSE TEXTO
class texto {
   private:
   public:
};

// CLASSE CLASSE
class classe {
   private:
   public:
};

// CLASSE DATA
class data {
   private:
   public:
};

// CLASSE TEXTO
class texto {
   private:
    string texto;

   public:
    void set_texto(string texto);
    string get_texto();
}
#endif