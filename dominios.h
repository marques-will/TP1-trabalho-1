#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

// CLASSE MATRICULA
class matricula {
   private:
    bool validar_matricula(int num_matricula);

   public:
    void set_matricula(int nova_matricula);
    int get_matricula();
};

// CLASSE SENHA
class senha {
   private:
    string senha;
    bool validar_senha(string senha);

   public:
    void set_senha(string novaSenha);
    string get_senha();
};

// CLASSE TELEFONE
class telefone {
   private:
    string telefone;
    bool validar_telefone(string telefone);

   public:
    void set_telefone(string telefone);
    string get_telefone();
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
    bool validar_codigo(string codigo);

   public:
    void set_codigo(string codigo);
    string get_codigo();
};

// CLASSE TEXTO
class texto {
   private:
    string texto;
    bool validar_texto(const string& texto);

   public:
    void set_texto(string texto);
    string get_texto();
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
    bool validar_data(string data);

   public:
    void set_data(string data);
    string get_data();
    vector<string> extrair_data(const string& data);
};

#endif
