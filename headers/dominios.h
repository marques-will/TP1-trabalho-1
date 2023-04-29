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

 * Essa classe é usada como padrão para representar um domínio genérico, definido por uma string 'valor'. As classes derivadas devem implementar o método de validação de acordo com as regras de formato específicas do domínio.
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

inline void Dominios::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}

inline string Dominios::getValor() const {
    return valor;
}

//---------------------------------------------------------------------
// DOMINIO CLASSE

class Classe : public Dominios {
   private:
    string classe;
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
 *
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
     * @brief Método que valida se o parâmetro está no formato válido para a classe.
     *
     * @param codigo
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
 * A validação do valor da data é realizada pelo método herdado 'validar'.
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
     * Validações feitas:
     * - Data segue formato DD/MMM/AAAA;
     * - Dia (DD) é inteiro de 1 a 31 e é válido, considerando-se ano bissexto.;
     * - Mês (MMM) é sigla válida (JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ;
     * - Ano (AAAA) é inteiro de 2000 a 2999;
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
 *
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
     * @brief Método que o parâmetro é válido para a classe ou não.
     *
     * @param matricula.
     */
    void validar(const string& matricula);
};

//---------------------------------------------------------------------
// DOMINIO RESULTADO

class Resultado : public Dominios {
   private:
    string resultado;
    void validar(const string& resultado);
};

//---------------------------------------------------------------------
// DOMINIO SENHA

/**
 * @brief Classe que representa uma senha.
 *
 * Classe derivada da classe abstrata Dominios usada para representar uma senha de formato válido.
 *
 * Padrão de formatação de uma senha:
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
     * Validações feitas:
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
     * @brief Método que o parâmetro para a classe é válido ou não.
     *
     * @param telefone.
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
     * Validações feitas:
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