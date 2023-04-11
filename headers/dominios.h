#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

// CLASSE DOMINIOS
class Dominios {
   private:
    string valor;

   public:
    void setValor(string);
    string getValor();
};

// SUBCLASSE MATRICULA - 221006351
class Matricula : public Dominios {
   private:
    string matricula;
    void validar(const string& matricula);

   public:
    void setValor(string matricula) {
        validar(matricula);
        Dominios::setValor(matricula);
    };
    string getValor() {
        return Dominios::getValor();
    }
};

// SUBCLASSE SENHA - 221020940
class Senha : public Dominios {
   private:
    string senha;
    void validar(const string& senha);

   public:
    void setValor(string senha) {
        validar(senha);
        Dominios::setValor(senha);
    };
    string getValor() {
        return Dominios::getValor();
    }
};

// SUBCLASSE TELEFONE - 221006351
class Telefone : public Dominios {
   private:
    string telefone;
    void validar(const string& telefone);

   public:
    void setValor(string telefone) {
        validar(telefone);
        Dominios::setValor(telefone);
    };
    string getValor() {
        return Dominios::getValor();
    }
};

// SUBCLASSE RESULTADO - 221006389
class Resultado : public Dominios {
   private:
   public:
};

// SUBCLASSE CODIGO - 221006351
class Codigo : public Dominios {
   private:
    string codigo;
    void validar(const string& codigo);

   public:
    void setValor(string codigo) {
        validar(codigo);
        Dominios::setValor(codigo);
    };
    string getValor() {
        return Dominios::getValor();
    }
};

// SUBCLASSE TEXTO - 221020940
class Texto : public Dominios {
   private:
    string texto;
    void validar(const string& texto);

   public:
    void setValor(string texto) {
        validar(texto);
        Dominios::setValor(texto);
    };
    string getValor() {
        return Dominios::getValor();
    }
};

// SUBCLASSE CLASSE - 221006389
class Classe {
   private:
   public:
};

// SUBCLASSE DATA - 221020940
class Data : public Dominios {
   private:
    string data;
    vector<string> extrair_data(const string& data);
    bool bissexto(const int& ano);
    void validar(const string& data);

   public:
    void setValor(string data) {
        validar(data);
        Dominios::setValor(data);
    };
    string getValor() {
        return Dominios::getValor();
    }
};

#endif  // DOMINIOS_H_INCLUDED
