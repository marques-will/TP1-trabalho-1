#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>
using namespace std;

class Desenvolvedor {
   private:
    Matricula matricula;
    Texto nome;
    Telefone telefone;
    Senha senha;

   public:
    void setMatricula(const Matricula&);
    Matricula getMatricula() const;
    void setTexto(const Texto&) const;
    Texto getTexto() const;
    void setTelefone(const Telefone&);
    Telefone getTelefone() const;
    void setSenha(const Senha&) const;
    Senha getSenha() const;
};
//IMPLEMENTAÇÃO DOS MÉTODOS INLINE

//Matricula
//OBS: implementar o <PK> protected key
inline void Desenvolvedor::set_Matricula(const Matricula&){
    this-> matricula = matricula;
}
inline Matricula Desenvolvedor::getMatricula() const{
    return matricula;
}

//Nome
inline void Desenvolvedor::set_Texto(const Texto&) const{
    this->texto = nome;
}
inline Texto Desenvolvedor::get_Texto() const{
    return nome;
}

//Telefone
inline void Desenvolvedor::set_Telefone(const Telefone&){
    this-> telefone = telefone;
}
inline Telefone Desenvolvedor::get_Telefone() const{
    return telefone;
}

//Senha
inline void Desenvolvedor::set_Senha(const Senha&){
    this->senha = senha;
}
inline Senha Desenvolvedor::get_Senha() const{
    return senha;
}


class teste {
   private:
    teste() {
        Codigo *codigo = new Codigo();
        Texto *nome = new Texto();
        Classe *classe = new Classe();
    }

   public:
};

class caso_teste {
   private:
    caso_teste() {
        Codigo *codigo = new Codigo();
        Texto *nome = new Texto();
        Data *data = new Data();
        Texto *acao = new Texto();
        Texto *resposta = new Texto();
        Resultado *resultado = new Resultado();
    }

   public:
};

#endif  // ENTIDADES_H_INCLUDED
