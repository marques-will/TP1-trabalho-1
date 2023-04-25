#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

// CLASSE DOMINIOS - 221020940
class Dominios {
   private:
    string valor;
    virtual void validar(const string& valor) = 0;  // método abstrado

   public:
    void setValor(string valor);
    string getValor() const;
};

inline void Dominios::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}
inline string Dominios::getValor() const {
    return valor;
}

// DOMINIO CLASSE - 221006389
class Classe : public Dominios {
   private:
    string classe;
    void validar(const string& classe);
};

// DOMINIO CODIGO - 221006351
class Codigo : public Dominios {
   private:
    string codigo;
    void validar(const string& codigo);
};

// DOMINIO DATA - 221020940
class Data : public Dominios {
   private:
    string data;
    vector<string> extrair_data(const string& data);
    void validar(const string& data);
};

// DOMINIO MATRICULA - 221006351
class Matricula : public Dominios {
   private:
    string matricula;
    void validar(const string& matricula);
};

// DOMINIO RESULTADO - 221006389
class Resultado : public Dominios {
   private:
    string resultado;
    void validar(const string& resultado);
};

// DOMINIO SENHA - 221020940
class Senha : public Dominios {
   private:
    string senha;
    void validar(const string& senha);
};

// DOMINIO TELEFONE - 221006351
class Telefone : public Dominios {
   private:
    string telefone;
    void validar(const string& telefone);
};

// DOMINIO TEXTO - 221020940
class Texto : public Dominios {
   private:
    string texto;
    void validar(const string& texto);
};

#endif  // DOMINIOS_H_INCLUDED
