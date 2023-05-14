#include "dominios.h"
#include "entidades.h"
using namespace std;
/**
 * @brief Padrão de representação da classe IDAutenticacao.
 * 
 * Tem por objetivo ser uma interface para serviço de autenticação na camada de apresentação.
 * 
 */
class IDAutenticacao{
    public:
    /**
     * @brief Método virtual puro resposável por solicitar serviço de autenticação.
     * 
     * @return ResultadoAutenticacao 
     */
    virtual ResultadoAutenticacao autenticar()
    throw(runtime_error) = 0;
    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;
    /**
     * @brief Declaração de método destrutor virtual para objeto da classe IDAutenticacao
     * 
     */
    virtual ~IDAutenticacao(){}

};

class ILNAutenticacao{
    public:
    virtual ResultadoAutenticacao Autenticar(const Matricula&, const Senha&) throw(runtime_error) = 0;
    virtual ~ILNAutenticacao(){}

};

class IDesenvolvedor
{
    public:
    virtual void Cadastrar() throw(runtime_error) = 0;
    virtual void Descadastrar(Desenvolvedor) throw(runtime_error) = 0;
    virtual void Visualizar(Desenvolvedor) throw(runtime_error) = 0;
    virtual void Editar(Desenvolvedor) throw(runtime_error) = 0;
    virtual ~IDesenvolvedor(){}
};