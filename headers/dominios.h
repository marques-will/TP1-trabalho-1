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
    void setValor(string valor);
    string getValor() const;
};

inline void Dominios::setValor(string valor) {
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

   public:
    void setValor(string matricula);
    string getValor() const;
};

inline void Matricula::setValor(string matricula) {
    validar(matricula);
    Dominios::setValor(matricula);
};
inline string Matricula::getValor() const {
    return Dominios::getValor();
}

// SUBCLASSE SENHA - 221020940
class Senha : public Dominios {
   private:
    string senha;
    void validar(string& senha);

   public:
    void setValor(string senha);
    string getValor() const;
};

inline void Senha::setValor(string senha) {
    validar(senha);
    Dominios::setValor(senha);
};
inline string Senha::getValor() const {
    return Dominios::getValor();
}

// SUBCLASSE TELEFONE - 221006351
class Telefone : public Dominios {
   private:
    string telefone;
    void validar(string& telefone);

   public:
    void setValor(string telefone);
    string getValor() const;
};

inline void Telefone::setValor(string telefone) {
    validar(telefone);
    Dominios::setValor(telefone);
};
inline string Telefone::getValor() const {
    return Dominios::getValor();
}

// SUBCLASSE RESULTADO - 221006389
class Resultado {
   private:
    string resultado;
    void validar(const string& resultado);

   public:
    void setValor(string resultado);
    string getValor();
};

// SUBCLASSE CODIGO - 221006351
class Codigo : public Dominios {
   private:
    string codigo;
    void validar(string& codigo);

   public:
    void setValor(string codigo);
    string getValor() const;
};

inline void Codigo::setValor(string codigo) {
    validar(codigo);
    Dominios::setValor(codigo);
};
inline string Codigo::getValor() const {
    return Dominios::getValor();
}

// SUBCLASSE TEXTO - 221020940
class Texto : public Dominios {
   private:
    string texto;
    void validar(string& texto);

   public:
    void setValor(string texto);
    string getValor() const;
};

inline void Texto::setValor(string texto) {
    validar(texto);
    Dominios::setValor(texto);
};
inline string Texto::getValor() const {
    return Dominios::getValor();
}

// SUBCLASSE CLASSE - 221006389
class Classe {
   private:
   public:
};

// SUBCLASSE DATA - 221020940
class Data : public Dominios {
   private:
    string data;
    vector<string> extrair_data(string& data);
    bool bissexto(int& ano);
    void validar(string& data);

   public:
    void setValor(string data);
    string getValor() const;
};

inline void Data::setValor(string data) {
    validar(data);
    Dominios::setValor(data);
};
inline string Data::getValor() const {
    return Dominios::getValor();
}
#endif  // DOMINIOS_H_INCLUDED
