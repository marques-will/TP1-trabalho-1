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
    void validar(const int& matricula);

   public:
    void setValor(int matricula);
    int getValor();
};

// CLASSE SENHA
class Senha {
   private:
    string senha;
    void validar(const string& senha);

   public:
    void setValor(string senha);
    string getValor();
};

// CLASSE TELEFONE
class Telefone {
   private:
    string telefone;
    void validar(const string& telefone);
    void validar_digitoverificador(const string& telefone);

   public:
    void setValor(string telefone);
    string getValor();
};

// CLASSE RESULTADO
class Resultado {
   private:
   public:
};

// CLASSE CODIGO
class Codigo {
   private:
    string codigo;
    void validar(const string& codigo);

   public:
    void setValor(string codigo);
    string getValor();
};

// CLASSE TEXTO
class Texto {
   private:
    string texto;
    void validar(const string& texto);

   public:
    void setValor(string texto);
    string getValor();
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
    vector<string> extrair_data(const string& data);
    bool Data::bissexto(const int& ano);
    void validar(const string& data);

   public:
    void setValor(string data);
    string getValor();
};

#endif
