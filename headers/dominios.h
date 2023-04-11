#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

//
// CLASSE MATRICULA - 221006351
class Matricula {
   private:
    int matricula;
    void validar(const int& matricula);

   public:
    void setValor(int matricula);
    int getValor();
};

// CLASSE SENHA - 221020940
class Senha {
   private:
    string senha;
    void validar(const string& senha);

   public:
    void setValor(string senha);
    string getValor();
};

// CLASSE TELEFONE - 221006351
class Telefone {
   private:
    string telefone;
    void validar(const string& telefone);

   public:
    void setValor(string telefone);
    string getValor();
};

// CLASSE RESULTADO - 221006389
class Resultado {
   private:
   public:
};

// CLASSE CODIGO - 221006351
class Codigo {
   private:
    string codigo;
    void validar(const string& codigo);

   public:
    void setValor(string codigo);
    string getValor();
};

// CLASSE TEXTO - 221020940
class Texto {
   private:
    string texto;
    void validar(const string& texto);

   public:
    void setValor(string texto);
    string getValor();
};

// CLASSE CLASSE - 221006389
class Classe {
   private:
   public:
};

// CLASSE DATA - 221020940
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

#endif  // DOMINIOS_H_INCLUDED
