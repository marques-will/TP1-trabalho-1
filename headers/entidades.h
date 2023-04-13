#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "../headers/dominios.h"
class Desenvolvedor {
   private:
    Desenvolvedor() {
        Matricula *matricula = new Matricula();
        Texto *texto = new Texto();
        Senha *senha = new Senha();
        Telefone *telefone = new Telefone();
    }
};
//    public:
//     void setMatricula(const Matricula &);
//     Matricula getMatricula() const;
//     void setTexto(const Texto &) const;
//     Texto getTexto() const;
//     void setTelefone(const Telefone &);
//     Telefone getTelefone() const;
//     void setSenha(const Senha &) const;
//     Senha getSenha() const;
// };
// // IMPLEMENTAÇÃO DOS MÉTODOS INLINE

// // Matricula
// // OBS: implementar o <PK> protected key
// inline void Desenvolvedor::setMatricula(const Matricula &) {
//     this->matricula = matricula;
// }
// inline Matricula Desenvolvedor::getMatricula() const {
//     return matricula;
// }

// // Nome
// inline void Desenvolvedor::setTexto(const Texto &) const {
//     this->texto = nome;
// }
// inline Texto Desenvolvedor::getTexto() const {
//     return nome;
// }

// // Telefone
// inline void Desenvolvedor::setTelefone(const Telefone &) {
//     this->telefone = telefone;
// }
// inline Telefone Desenvolvedor::getTelefone() const {
//     return telefone;
// }

// // Senha
// inline void Desenvolvedor::setSenha(const senha &) {
//     this->senha = senha;
// }
// inline Senha Desenvolvedor::getSenha() const {
//     return senha;
// }

class Teste {
   private:
   public:
};

class CasoTeste {
   private:
   public:
};

#endif  // ENTIDADES_H_INCLUDED
