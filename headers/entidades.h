#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
class dev {
   private:
    dev() {
        Matricula *matricula = new Matricula();
        Texto *texto = new Texto();
        Senha *senha = new Senha();
        Telefone *telefone = new Telefone();
    }

   public:
    void setMatricula(const Matricula &);
    Matricula getMatricula() const;
    void setTexto(const Texto &) const;
    Texto getTexto() const;
    void setTelefone(const Telefone &);
    Telefone getTelefone() const;
    void setSenha(const Senha &) const;
    Senha getSenha() const;
};
// IMPLEMENTAÇÃO DOS MÉTODOS INLINE

// Matricula
// OBS: implementar o <PK> protected key
inline void Desenvolvedor::set_Matricula(const Matricula &) {
    this->matricula = matricula;
}
inline Matricula Desenvolvedor::getMatricula() const {
    return matricula;
}

// Nome
inline void Desenvolvedor::set_Texto(const Texto &) const {
    this->texto = nome;
}
inline Texto Desenvolvedor::get_Texto() const {
    return nome;
}

// Telefone
inline void Desenvolvedor::set_Telefone(const Telefone &) {
    this->telefone = telefone;
}
inline Telefone Desenvolvedor::get_Telefone() const {
    return telefone;
}

// Senha
inline void Desenvolvedor::set_Senha(const Senha &) {
    this->senha = senha;
}
inline Senha Desenvolvedor::get_Senha() const {
    return senha;
}

class test {
   private:
    test() {
        Codigo *codigo = new Codigo();
        Texto *nome = new Texto();
        Classe *classe = new Classe();
    }

   public:
};

class testCase {
   private:
    testCase() {
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
