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
    virtual void validar(string& valor) = 0;  // método abstrado

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

// SUBCLASSE MATRICULA - 221006351
class Matricula : public Dominios {
   private:
    string matricula;
    void validar(string& matricula);
};

// SUBCLASSE SENHA - 221020940
class Senha : public Dominios {
   private:
    string senha;
    void validar(string& senha);
};

// SUBCLASSE TELEFONE - 221006351
class Telefone : public Dominios {
   private:
    string telefone;
    void validar(string& telefone);
};

// SUBCLASSE RESULTADO - 221006389
class Resultado {
   private:
    string resultado;
    void validar(const string& resultado);
};

// SUBCLASSE CODIGO - 221006351
class Codigo : public Dominios {
   private:
    string codigo;
    void validar(string& codigo);
};

// SUBCLASSE TEXTO - 221020940
class Texto : public Dominios {
   private:
    string texto;
    void validar(string& texto);
};

// SUBCLASSE CLASSE - 221006389
class Classe {
   private:
};

// SUBCLASSE DATA - 221020940
class Data : public Dominios {
   private:
    string data;
    vector<string> extrair_data(string& data);
    void validar(string& data);
};

#endif  // DOMINIOS_H_INCLUDED
