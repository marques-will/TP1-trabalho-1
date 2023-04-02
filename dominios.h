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
    void validar_matricula(int nova_matricula);

   public:
    void set_matricula(int nova_matricula);
    int get_matricula();
};

// CLASSE SENHA
class senha {
   private:
    string senha;
    void validar_senha(string nova_senha);

   public:
    void set_senha(string nova_senha);
    string get_senha();
};

// CLASSE TELEFONE
class telefone {
   private:
    string telefone;
    void validar_telefone(string novo_telefone);
    void validar_digitoverificador(string novo_telefone);

   public:
    void set_telefone(string novo_telefone);
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
    void validar_codigo(string novo_codigo);

   public:
    void set_codigo(string novo_codigo);
    string get_codigo();
};

// CLASSE TEXTO
class texto {
   private:
    string texto;
    void validar_texto(const string& novo_texto);

   public:
    void set_texto(string novo_texto);
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
    void validar_data(string nova_data);

   public:
    void set_data(string data);
    string get_data();
    vector<string> extrair_data(const string& nova_data);
    bool data::ano_bissexto(const int& ano);
};

// TESTES UNITÁRIOS

class teste_dominios {
   private:
    string nome_dominio;

    void teste_matricula();
    void teste_senha();
    void teste_telefone();
    void teste_resultado();
    void teste_codigo();
    void teste_texto();
    void teste_classe();
    void teste_data();

   public:
};

#endif
