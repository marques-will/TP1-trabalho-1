#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
using namespace std;
// CLASSE MATRICULA
class matricula {
   public:
    void set_matricula(int matricula);
    int get_matricula();

   private:
    int matricula;
};

// CLASSE SENHA
class senha {
   public:
    void set_senha(string senha);
    string get_senha();

   private:
    string senha;
};

// CLASSE TELEFONE
class telefone {
   public:
    void set_telefone(int telefone);
    int get_telefone();

   private:
    int telefone;
};

// CLASSE RESULTADO
class resultado {
   public:
    string get_resultado();

   private:
    resultado();

};

// CLASSE DATA
class data {
   public:
    void set_data(string data);
    string get_data();

   private:
    string data;
};

// CLASSE CODIGO
class codigo {
   public:
    void set_codigo(string codigo);
    string get_codigo();

   private:
    string codigo;
};

// CLASS CLASSE
class classe {
   public:
   private:
};

// CLASSE TEXTO
class texto {
   public:
    void set_texto(string texto);
    string get_texto();

   private:
    string texto;
};

// IMPLEMENTAÇÃO DA MATRÍCULA
void
matricula::set_matricula(int matricula) {
    this->matricula = matricula;
}

int matricula::get_matricula() {
    return matricula;
};

// IMPLEMENTAÇÃO DO TELEFONE
void telefone::set_telefone(int telefone) {
    this->telefone = telefone;
}
int telefone::get_telefone() {
    return telefone;
};

// IMPLEMENTAÇÃO DA SENHA
void senha::set_senha(string senha) {
    this->senha = senha;
}
string senha::get_senha() {
    return senha;
};

// IMPLEMENTAÇÃO DO CÓDIGO
void codigo::set_codigo(string codigo) {
    this->codigo = codigo;
}
string codigo::get_codigo() {
    return codigo;
};

// IMPLEMENTAÇÃO DA DATA
void data::set_data(string data) {
    this->data = data;
}
string data::get_data() {
    return data;
};

// IMPLEMENTAÇÃO DO TEXTO
void texto::set_texto(string texto) {
    this->texto = texto;
}
string texto::get_texto() {
    return texto;
};

#endif