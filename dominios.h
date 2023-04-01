#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

// CLASSE MATRICULA
class matricula {
   private:
    int matricula;
    void validar_matricula(int matricula);

   public:
    void set_matricula(int matricula);
    int get_matricula();
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
    string telefone;

   public:
    void set_telefone(string telefone);
    string get_telefone();
    void validar_telefone(string telefone);
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
    string texto;

   public:
    void set_texto(string texto);
    string get_texto();
    void validar_texto(const string& texto);
};

// CLASSE CLASSE
class classe {
   private:
   public:
};

// CLASSE DATA
class data {
   private:
    string data;

   public:
    void set_data(string data);
    string get_data();
    vector<string> extrair_data(const string& data);
    void validar_data(string data);
};

#endif