#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

//---------------------------------------------------------------------
// CLASSE DOMINIOS

/**
 * @brief Classe abstrata que representa um domínio genérico.

 * Essa classe é usada como padrão para representar um domínio genérico. 
 
 As classes derivadas devem implementar o método de validação de acordo com as regras de formato específicas do domínio.
 *
 *  Implementado por: 221020940.
 */
class Dominios {
   private:
    /**
     * @brief Valor do domínio.
     *
     * Atributo privado do tipo string que armazena o valor do domínio,
     */
    string valor;

   protected:
    /**
     * @brief Método para validação do valor a ser definido para o domínio.
     *
     * Este é um método abstrato puro que deve ser implementado pelas classes derivadas seguindo-se as regras de formato específicas do domínio.
     *
     * @param valor Valor a ser validado.
     *
     * @throw invalid_argument Caso o valor informado seja inválido.
     */
    virtual void validar(const string& valor) = 0;

   public:
    /**
     * @brief Define o valor do domínio.
     *
     * Este método define o valor do domínio armazenado na classe, caso o mesmo seja válido.
     *
     * @param valor Valor a ser definido para o domínio.
     *
     * @throw invalid_argument Caso o valor informado seja inválido.
     */
    void setValor(string valor);

    /**
     * @brief Retorna o valor do domínio.
     *
     * Este método retorna o valor do domínio atualmente armazenado na classe.
     *
     * @return Valor atual do domínio.
     */
    string getValor() const;
};

/**
 * @brief Implementação de método inline para setValor.
 * 
 * @param valor 
 */
inline void Dominios::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}
/**
 * @brief Implementação de método inline para getValor.
 * 
 * @return string 
 */
inline string Dominios::getValor() const {
    return valor;
}

//---------------------------------------------------------------------
// DOMINIO CLASSE
/**
 * @brief Padrão para representação da classe Classe;
 * 
 * Herda no modo public a classe Dominios.
 * 
 * Regras de formato:
 * -Strings com seis formatos possíveis.
 * -1° opção: UNIDADE.
 * -2° opção: INTEGRACAO.
 * -3° opção: FUMACA.
 * -4° opção: SISTEMA.
 * -5° opção: REGRESSAO.
 * -6° opção: ACEITACAO.
 * 
 * Implementado por 221006389.
 * 
 */
class Classe : public Dominios {
   private:
   /**
    * @brief Atributo do tipo string armazenado na classe.
    * 
    */
    string classe;
    /**
     * @brief Método para validação do valor de classe.
     * 
     * Validações executadas:
     * -Verifica se classe é um dos formatos válidos.
     * 
     * @param classe 
     * 
     * @throw invalid_argument se o formato for inválido.
     */
    void validar(const string& classe);
};

//---------------------------------------------------------------------
// DOMINIO CODIGO

/**
 * @brief Padrão para representação da classe Codigo.
 *
 * Herda no modo public a classe Dominios.
 *
 * Regras de formato:
 * - Strings de 6 caracteres.
 * - Os 3 primeiros caracteres são letras (maiúsculas ou minúsculas).
 * - Os 3 últimos caracteres são dígitos (de 0 a 9).
 *
 * Por 221006351
 */

class Codigo : public Dominios {
   private:
    /**
     * @brief Atributo do tipo string armazenado na classe.
     *
     */
    string codigo;

    /**
     * @brief Método que verifica se o parâmetro é válido para a classe ou não.
     *
     * Validações executadas:
     * -Verificar se o parâmetro é uma string de 6 caracteres.
     * -Verificar se os 3 primeiros caracteres são letras.
     * -Verififcar se os 3 últimos caracteres são dígitos.
     * 
     * @param codigo
     * 
     * @throw invalid_argument se o parâmetro for inválido.
     */
    void validar(const string& codigo);
};

//---------------------------------------------------------------------
// DOMINIO DATA

/**
 * @brief Classe que representa uma data padronizada.
 *
 * Padrão para representação de uma data:
 * - Formato: DD/MMM/AAAA.
 * - DD é um valor inteiro entre 1 e 31 (depende do mês e do ano).
 * - MMM é uma string correspondente à sigla do mês (JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ).
 * - AAAA é um valor inteiro entre 2000 e 2999 correspondente ao ano.
 *
 * Implementado por: 221020940.
 */
class Data : public Dominios {
   private:
    /**
     * @brief Valor da data.
     *
     * Atributo privado que armazena o valor de uma data válida  (vide método validar).
     */
    string data;

    /**
     * @brief Extrai dia, mês e ano da string de data informada.
     *
     * Método privado utilizado na validação para extrair os valores da string de data no formato DD/MMM/AAAA.
     *
     * @param data Valor de data cujo valores serão extraídos.
     *
     * @return Vetor que contém as strings correspondentes ao dia, à sigla do mês e ao ano, respectivamente.
     */
    vector<string> extrair_data(const string& data);

    /**
     * @brief Método para validação do valor de uma data.
     *
     * Validações executadas:
     * - Verificar se data segue formato DD/MMM/AAAA;
     * - Verificar se Dia (DD) é inteiro de 1 a 31 e é válido, considerando-se ano bissexto.;
     * - Verificar se Mês (MMM) é sigla válida (JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ;
     * - Verificar se Ano (AAAA) é inteiro de 2000 a 2999;
     *
     * @param data Valor de data a ser validado.
     *
     * @throw invalid_argument Caso valor de data possua formato inválido.
     */
    void validar(const string& data);
};

//---------------------------------------------------------------------
// DOMINIO MATRICULA

/**
 * @brief Padrão para representação para a classe Matricula.
 *
 * Herda no modo public da Classe Dominios.
 *
 * Regras de formato:
 * - Strings de 7 caracteres.
 * - Os caracteres são números inteiros de 0 a 9
 * - O último dígito da string é o dígito verificador de módulo 10.
 * - O dígito verificador define se a string é válida ou não.
 */
class Matricula : public Dominios {
   private:
    /**
     * @brief Atributo do tipo string armazenado na classe.
     *
     */
    string matricula;
    /**
     * @brief Método que verifica se o parâmetro é válido para a classe ou não.
     * 
     * Validações executadas:
     * -Verificar se o parâmetro é uma string de 7 caracteres.
     * -Verificar se todos os caracteres da string são números inteiros de 0 a 9.
     * -Verificar se o último caractere da string é o dígito verificador correto.
     * 
     * @param matricula.
     * 
     * @throw invalid_argument se a matrícula for inválida.
     */
    void validar(const string& matricula);
};

//---------------------------------------------------------------------
// DOMINIO RESULTADO
/**
 * @brief Padrão de representação para a classe Resultado.
 * 
 * Herda no modo public a classe Dominios.
 * 
 * Regras de formato:
 * -String com dois formatos possíveis.
 * -1° opção: APROVADO.
 * -2° opção: REPROVADO.
 * 
 * Implementado por 221006389.
 */
class Resultado : public Dominios {
   private:
   /**
    * @brief Atributo do tipo string armazenado na classe.
    * 
    */
    string resultado;
    /**
     * @brief Método para validação do valor de um resultado.
     * 
     * Validações executadas:
     * -Verifica se o parâmetro é 'APROVADO' ou 'REPROVADO'.
     * 
     * @param resultado 
     * 
     * @throw invalid_argument se o resultado for inválido.
     */
    void validar(const string& resultado);
};

//---------------------------------------------------------------------
// DOMINIO SENHA

/**
 * @brief Padrão de representação para a classe.
 *
 * Classe derivada da classe abstrata Dominios usada para representar uma senha de formato válido.
 *
 * Regras de formato:
 * - Formato: XXXXX.
 * - X é um caractere válido que não se repete (vide validar).
 *
 * Implementado por: 221020940.
 */
class Senha : public Dominios {
   private:
    /**
     * @brief Valor da senha.
     *
     * Atributo privado que armazena o valor de uma senha válida (vide método validar).
     */
    string senha;

    /**
     * @brief Método para validação do valor de uma senha.
     *
     * Validações executadas:
     * - Senha possui 6 caracteres;
     * - Caracteres válidos são letras (A - Z, a - z), dígitos (0 - 9), @ , #, $ , % ou &;
     * - Não deve haver repetição de caracteres válidos.
     *
     * @param senha Valor de senha a ser validado.
     *
     * @throw Caso valor de senha possua formato inválido.
     */
    void validar(const string& senha);
};

//---------------------------------------------------------------------
// DOMINIO TELEFONE

/**
 * @brief Padrão para representação da Classe Telefone.
 *
 * Herda no modo public da Classe Dominios.
 *
 * Regras de formato:
 *
 * - Valor do telefone deve possui de 8 a 16 caracteres;
 * - O primeiro caractere sempre é "+";
 * - Os demais caracteres são dígitos;
 * - Podem haver de 7 a 15 dígitos;
 * - Cada dígito é um número inteiro de 0 a 9.
 *
 * Implementado por: 221006351.
 *
 */
class Telefone : public Dominios {
   private:
    /**
     * @brief Atributo do tipo string armazenado na classe.
     *
     */

    string telefone;
    /**
     * @brief Método que verifica se o parâmetro é válido ou não para ser um objeto da classe.
     * 
     * Validações executadas:
     * -'+' está na posição telefone[0].
     * -Todas as posições, com exceção de telefone[0], devem ser dígitos.
     * - O telefone deve conter de 7 a 15 dígitos.
     * @param telefone.
     * 
     * @throw caso o parâmetro telefone seja inválido.
     */
    void validar(const string& telefone);
};

//---------------------------------------------------------------------
// DOMINIO TEXTO

/**
 * @brief Classe que representa texto padronizado.
 *
 * Padrão de representação de um texto:
 * - Possuem de 10 a 20 caracteres;
 * - Não há acentuação;
 * - Não há espaços brancos consecutivos.
 *
 * A validação do valor do texto é realizada pelo método herdado 'validar'.
 *
 * Implementado por: 221020940.
 */
class Texto : public Dominios {
   private:
    /**
     * @brief Valor do texto.
     *
     * Atributo privado que armazena o valor de um texto válido (vide métdo validar).
     */
    string texto;

    /**
     * @brief Método para validação do valor de um texto.
     *
     * Validações executadas:
     * - String de texto contém de 10 a 20 caracteres;
     * - Cada caractere X é letra (A - Z, a - z), dígito (0-9), sinal de pontuação ( . , ; ? ! : - ), @ , #, $ , % ou &;
     * - Não há acentuação;
     * - Não há espaços em brancos consecutivos.
     *
     * @param texto Valor de texto a ser validado.
     *
     * @throw invalid_argument Caso valor de texto possua formato inválido.
     *
     */
    void validar(const string& texto);
};

#endif  // DOMINIOS_H_INCLUDED