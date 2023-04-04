#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

// CLASSE MATRICULA
class Matricula {
   private:
    int matricula;
    void validar_matricula(const int& nova_matricula);

   public:
    void set_matricula(int nova_matricula);
    int get_matricula();
};

// CLASSE SENHA
class Senha {
   private:
    string senha;
    void validar_senha(const string& nova_senha);

   public:
    void set_senha(string nova_senha);
    string get_senha();
};

// CLASSE TELEFONE
class Telefone {
   private:
    string telefone;
    void validar_telefone(const string& novo_telefone);
    void validar_digitoverificador(string novo_telefone);

   public:
    void set_telefone(string novo_telefone);
    string get_telefone();
};

// CLASSE RESULTADO
class Resultado {
   private:
   public:
    string get_resultado();
};

// CLASSE CODIGO
class Codigo {
   private:
    string codigo;
    void validar_codigo(const string& novo_codigo);

   public:
    void set_codigo(string novo_codigo);
    string get_codigo();
};

// CLASSE TEXTO
class Texto {
   private:
    string texto;
    void validar_texto(const string& novo_texto);

   public:
    void set_texto(string novo_texto);
    string get_texto();
};

// CLASSE CLASSE
class Classe {
   private:
   public:
};

// CLASSE DATA
class Data {
   private:
    string data;
    void validar_data(const string& nova_data);
    vector<string> extrair_data(const string& nova_data);

   public:
    void set_data(string data);
    string get_data();
};

#endif
