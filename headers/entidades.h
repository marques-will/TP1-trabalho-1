#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
// ENTIDADE ENTIDADE
class Entidade {
   private:
    Texto nome;

   public:
    void setNome(const Texto &);
    Texto getNome() const;
};

inline void Entidade::setNome(const Texto &nome) {
    this->nome = nome;
}
inline Texto Entidade::getNome() const {
    return nome;
}

// ENTIDADE DESENVOLVEDOR - 221006351
class Desenvolvedor : public Entidade {
   private:
    Matricula matricula;
    Senha senha;
    Telefone telefone;

   public:
    void setMatricula(const Matricula &);
    Matricula getMatricula() const;
    void setSenha(const Senha &);
    Senha getSenha() const;
    void setTelefone(const Telefone &);
    Telefone getTelefone() const;
};

inline void Desenvolvedor::setMatricula(const Matricula &matricula) {
    this->matricula = matricula;
}
inline Matricula Desenvolvedor::getMatricula() const {
    return matricula;
}

inline void Desenvolvedor::setSenha(const Senha &senha) {
    this->senha = senha;
}
inline Senha Desenvolvedor::getSenha() const {
    return senha;
}

inline void Desenvolvedor::setTelefone(const Telefone &telefone) {
    this->telefone = telefone;
}
inline Telefone Desenvolvedor::getTelefone() const {
    return telefone;
}

class CasoDeTeste : public Entidade  // 221006351
{
   private:
    Codigo codigo;
    Data data;
    Texto acao;
    Texto resposta;
    Resultado resultado;

   public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
    void setData(const Data &);
    Data getData() const;
    void setAcao(const Texto &);
    Texto getAcao() const;
    void setResposta(const Texto &);
    Texto getResposta() const;
    void setResultado(const Resultado &);
    Resultado getResultado() const;
};

inline void CasoDeTeste::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}
inline Codigo CasoDeTeste::getCodigo() const {
    return codigo;
}

inline void CasoDeTeste::setData(const Data &data) {
    this->data = data;
}
inline Data CasoDeTeste::getData() const {
    return data;
}

inline void CasoDeTeste::setAcao(const Texto &acao) {
    this->acao = acao;
}
inline Texto CasoDeTeste::getAcao() const {
    return acao;
}

inline void CasoDeTeste::setResposta(const Texto &resposta) {
    this->resposta = resposta;
}
inline Texto CasoDeTeste::getResposta() const {
    return resposta;
}

inline void CasoDeTeste::setResultado(const Resultado &resultado) {
    this->resultado = resultado;
}
inline Resultado CasoDeTeste::getResultado() const {
    return resultado;
}

// ENTIDADE TESTE - 221006389
/// class Teste
///{
// private:
// public:
// };

#endif  // ENTIDADES_H_INCLUDED
