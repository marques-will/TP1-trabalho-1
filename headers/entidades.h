#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "../headers/dominios.h"
#include "../sources/dominios.cpp"
// ENTIDADE ENTIDADE
class Entidade {
   private:
    Texto nome;

   public:
    void setTexto(const Texto &);
    Texto getTexto() const;
};

inline void Entidade::setTexto(const Texto &nome) {
    this->nome = nome;
}
inline Texto Entidade::getTexto() const {
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

class Caso_de_Teste : public Entidade  // 221006351
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

inline void Caso_de_Teste::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}
inline Codigo Caso_de_Teste::getCodigo() const {
    return codigo;
}

inline void Caso_de_Teste::setData(const Data &data) {
    this->data = data;
}
inline Data Caso_de_Teste::getData() const {
    return data;
}

inline void Caso_de_Teste::setAcao(const Texto &acao) {
    this->acao = acao;
}
inline Texto Caso_de_Teste::getAcao() const {
    return acao;
}

inline void Caso_de_Teste::setResposta(const Texto &resposta) {
    this->resposta = resposta;
}
inline Texto Caso_de_Teste::getResposta() const {
    return resposta;
}

inline void Caso_de_Teste::setResultado(const Resultado &resultado) {
    this->resultado = resultado;
}
inline Resultado Caso_de_Teste::getResultado() const {
    return resultado;
}

// ENTIDADE TESTE - 221006389
/// class Teste
///{
// private:
// public:
// };

#endif  // ENTIDADES_H_INCLUDED
