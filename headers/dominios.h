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
    void validar(const int&);

   public:
    void setValor(int);
    int getValor();
};

// CLASSE SENHA
class Senha {
   private:
    string senha;
    void validar(const string&);

   public:
    void setValor(string);
    string getValor();
};

// CLASSE TELEFONE
class Telefone {
   private:
    string telefone;
    void validar(const string&);
    void validar_digitoverificador(const string&);

   public:
    void setValor(string);
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
    void validar(const string&);

   public:
    void setValor(string);
    string getValor();
};

// CLASSE TEXTO
class Texto {
   private:
    string texto;
    void validar(const string&);

   public:
    void setValor(string);
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
    void validar(const string&);
    vector<string> extrair_data(const string&);

   public:
    void setValor(string);
    string getValor();
};

#endif
