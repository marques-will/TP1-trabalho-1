#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

//---------------------------------------------------------------------
// ENTIDADE ENTIDADE
/**
 * @brief Padrão de representação para a superclasse Entidade.
 */
class Entidade {
   private:
   /**
    * @brief Atributo da classe Texto armazenado na classe.
    * 
    */
    Texto nome;

   public:
    void setNome(const Texto &);
    /**
     * @brief Armazena objeto da classe Texto.
     * 
     * @return  0.
     */

/**
 * @brief Retorna objeto da classe Texto.
 * 
 * @return Texto.
 */
    Texto getNome() const;
};

/**
 * @brief Implementação de Método inline para setNome.
 * 
 * @param nome 
 */
inline void Entidade::setNome(const Texto &nome) {
    this->nome = nome;
}
/**
 * @brief Implementação de Método inline para getNome.
 * 
 * @return nome 
 */
inline Texto Entidade::getNome() const {
    return nome;
}

//---------------------------------------------------------------------
// ENTIDADE DESENVOLVEDOR - 221006351
/**
 * @brief Padrão de representação para a classe Desenvolvedor.
 * 
 * Herda no modo public da classe Entidade.
 */
class Desenvolvedor : public Entidade {
   private:
   /**
    * @brief Atributo que é instância da classe Matricula.
    * 
    */
    Matricula matricula;
    /**
     * @brief Atributo que é instância da classe Senha.
     * 
     */
    Senha senha;
    /**
     * @brief Atributo que é instância da classe Telefone.
     * 
     */
    Telefone telefone;

   public:
   /**
    * @brief Método que armazena objeto da classe Matricula.
    * 
    */
    void setMatricula(const Matricula &);
    /**
     * @brief Método que retorna objeto da classe Matricula.
     * 
     * @return Matricula. 
     */
    Matricula getMatricula() const;
    /**
     * @brief Método que armazena objeto da classe Senha.
     * 
     */
    void setSenha(const Senha &);
    /**
     * @brief Retorna objeto da classe Senha.
     * 
     * @return Senha 
     */
    Senha getSenha() const;
    /**
     * @brief Método que armazena objeto da classe Telefone.
     * 
     */
    void setTelefone(const Telefone &);
    /**
     * @brief Retorna objeto da classe Telefone.
     * 
     * @return Telefone.
     */
    Telefone getTelefone() const;
};
/**
 * @brief Implementação de Método inline para setMatricula.
 * 
 * @param matricula 
 */
inline void Desenvolvedor::setMatricula(const Matricula &matricula) {
    this->matricula = matricula;
}
/**
 * @brief Implementação de Método inline para getMatricula.
 * 
 * @return Matricula 
 */
inline Matricula Desenvolvedor::getMatricula() const {
    return matricula;
}
/**
 * @brief Implementação de Método inline para setSenha.
 * 
 * @param senha 
 */
inline void Desenvolvedor::setSenha(const Senha &senha) {
    this->senha = senha;
}
/**
 * @brief Implementação de Método inline para getSenha.
 * 
 * @return Senha 
 */
inline Senha Desenvolvedor::getSenha() const {
    return senha;
}
/**
 * @brief Implementação de Método inline para setTelefone.
 * 
 * @param telefone 
 */
inline void Desenvolvedor::setTelefone(const Telefone &telefone) {
    this->telefone = telefone;
}
/**
 * @brief Implementação de Método inline para getTelefone.
 * 
 * @return Telefone 
 */
inline Telefone Desenvolvedor::getTelefone() const {
    return telefone;
}

// ENTIDADE TESTE - 221006389
//---------------------------------------------------------------------
/// class Teste
///{
// private:
// public:
// };

//---------------------------------------------------------------------
// ENTIDADE CASO DE TESTE
/**
 * @brief Padrão para representação da classe CasoDeTeste.
 * 
 * Herda no modo public da classe Entidade.
 */
class CasoDeTeste : public Entidade {
   private:
   /**
    * @brief Atributo que é instância da classe Codigo.
    * 
    */
    Codigo codigo;
    /**
     * @brief Atributo que é instância da classe Data.
     * 
     */
    Data data;
    /**
     * @brief Atributo que é instância da classe Texto.
     * 
     */
    Texto acao;
    /**
     * @brief Atributo que é instância da classe Texto.
     * 
     */
    Texto resposta;
    /**
     * @brief Atributo que é instância da classe Resultado.
     * 
     */
    Resultado resultado;

   public:
   /**
    * @brief Método que armazena objeto da classe Codigo.
    * 
    */
    void setCodigo(const Codigo &);
    /**
     * @brief Método que retorna objeto da classe Codigo.
     * 
     * @return Codigo.
     */
    Codigo getCodigo() const;
    /**
     * @brief Método que armazena objeto da classe Data.
     * 
     */
    void setData(const Data &);
    /**
     * @brief Método que retorna objeto da classe Data.
     * 
     * @return Data. 
     */
    Data getData() const;
    /**
     * @brief Método que armazena objeto acao da classe Texto.
     * 
     */
    void setAcao(const Texto &);
    /**
     * @brief Retorna o objeto acao da calsse Texto.
     * 
     * @return Texto.
     */
    Texto getAcao() const;
    /**
     * @brief Método que armazena objeto resposta da classe Texto.
     * 
     */
    void setResposta(const Texto &);
    /**
     * @brief Método que retorna objeto resposta da classe Texto.
     * 
     * @return Texto. 
     */
    Texto getResposta() const;
    /**
     * @brief Método que armazena objeto da classe Resultado.
     * 
     */
    void setResultado(const Resultado &);
    /**
     * @brief Método que retorna objeto da classe Resultado.
     * 
     * @return Resultado 
     */
    Resultado getResultado() const;
};
/**
 * @brief Implementação de Método inline para setCodigo.
 * 
 * @param codigo.
 */
inline void CasoDeTeste::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}
/**
 * @brief Implementação de Método inline para getCodigo.
 * 
 * @return Codigo.
 */
inline Codigo CasoDeTeste::getCodigo() const {
    return codigo;
}
/**
 * @brief Implementação de Método inline para setData.
 * 
 * @param data 
 */
inline void CasoDeTeste::setData(const Data &data) {
    this->data = data;
}
/**
 * @brief Implementação de Método inline para getData.
 * 
 * @return Data.
 */
inline Data CasoDeTeste::getData() const {
    return data;
}
/**
 * @brief Implementação de Método inline para setAcao.
 * 
 * @param acao. 
 */
inline void CasoDeTeste::setAcao(const Texto &acao) {
    this->acao = acao;
}
/**
 * @brief Implementação de Método inline para getAcao.
 * 
 * @return acao. 
 */
inline Texto CasoDeTeste::getAcao() const {
    return acao;
}
/**
 * @brief Implementação de Método inline para setResposta.
 * 
 * @param resposta.
 */
inline void CasoDeTeste::setResposta(const Texto &resposta) {
    this->resposta = resposta;
}
/**
 * @brief Implementação de Método inline para getResposta.
 * 
 * @return resposta.
 */
inline Texto CasoDeTeste::getResposta() const {
    return resposta;
}
/**
 * @brief Implementação de Método inline para setResultado.
 * 
 * @param resultado. 
 */
inline void CasoDeTeste::setResultado(const Resultado &resultado) {
    this->resultado = resultado;
}
/**
 * @brief Implementação de Método inline para getResultado.
 * 
 * @return Resultado.
 */
inline Resultado CasoDeTeste::getResultado() const {
    return resultado;
}

#endif  // ENTIDADES_H_INCLUDED

//---------------------------------------------------------------------