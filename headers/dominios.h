#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

//---------------------------------------------------------------------
// CLASSE DOMINIOS

/**
 * @brief Padrão para representação da superclasse Dominios.
 * A classe Dominios é usada para representar um domínio genérico, definida por uma string 'valor'.
 * As classes derivadas devem implementar o método de validação de acordo com as regras de formato específicas do domínio.
 * Implementado por: 221020940.
 */
class Dominios {
   private:
    /**
     * @brief Valor do domínio.
     * Atributo privado do tipo string que armazena o valor do domínio,
     */
    string valor;

    /**
     * @brief Método para validação do valor a ser definido para o domínio.
     * Método do tipo abstrato puro que deve ser implementado por classes derivadas seguindo-se as regras de formato destas.
     * Se um valor não for válido, método deve lançar exceção.
     *
     * @param valor Passa por referência uma string contendo o valor a ser valido pelo método 'validar' de cada domínio.
     */
    virtual void validar(const string& valor) = 0;

   public:
    /**
     * @brief Define o valor do domínio.
     * Este método define o valor do domínio e valida-o usando o método 'validar'.
     * Se o valor não for válido, uma exceção é lançada.
     *
     * @param valor Valor a ser definido para o domínio.
     */
    void setValor(string valor);

    /**
     * @brief Retorna o valor do domínio.
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
 * @brief Padrão para representação da Data .
 * A classe Data é derivada da classe abstrata Dominios no modo public e é usada para representar uma data no formato DD/MMM/AAAA.
 * DD é um dia válido do mês, MMM é a sigla do mês (JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ), AAAA é o ano.
 * A validação do valor da data é realizada pelo método 'validar', que verifica se a data informada segue o formato correto.
 * Implementado por: 221020940.
 */
class Data : public Dominios {
   private:
    /**
     * @brief Valor da data.
     * Atributo privado do tipo string que armazena o valor de uma data no formato DD/MMM/AAAA.
     */
    string data;

    /**
     * @brief Extrai dia, mês e ano da string de data informada.
     * Método privado utilizado na validação para extrair os valores da string de data no formato DD/MMM/AAAA.
     *
     * @param data String passada por referência contendo valores a serem extraídos da data.
     *
     * @return Vetor que contém as strings correspondentes ao dia (DD), à sigla do mês (MMM) e ao ano (AAAA), respectivamente.
     */
    vector<string> extrair_data(const string& data);

    /**
     * @brief Método para validação do valor de uma data.
     *
     * Regras de formato:
     * - Data deve ter seguir o formato DD/MMM/AAAA;
     * - Ano (AAAA) deve ser valor entre 2000 e 2999;
     * - Mês (MMM) deve ser uma sigla válida (JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ);
     * - Dia (DD) deve ser valor válido para o mês considerando-se anos bissextos.
     *
     * @param data String passada por referência que contém a data a ser validada.
     *
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
     * @brief Método que verifica se o parâmetro é válido para a classe ou não.
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
 * @brief Padrão para representação da classe Senha.
 * A classe Senha é derivada da classe abstrata Dominios e é usada para representar uma senha no formato XXXXXX.
 * A validação do valor da senha é realizada pelo método 'validar', que verifica se X é caractere válido não repetido.
 * Implementado por: 221020940.
 */
class Senha : public Dominios {
   private:
    /**
     * @brief Valor da senha.
     * Atributo privado que armazena o valor de uma senha no formato XXXXXX.
     */
    string senha;

    /**
     * @brief Método para validação do valor de uma senha.
     * Regras de formato:
     * - Senha deve possuir 6 caracteres;
     * - Caracteres válidos são letras (A - Z, a - z), dígitos (0 - 9), @ , #, $ , % ou &;
     * - Não deve haver repetição de caracteres válidos.
     *
     * @param senha String passada por referência que contém a senha a ser validada.
     *
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
     * @brief Método que verifica se o parâmetro para a classe é válido ou não.
     *
     * @param telefone.
     */
    void validar(const string& telefone);
};

//---------------------------------------------------------------------
// DOMINIO TEXTO

/**
 * @brief Padrão para representação da classe Texto.
 * A classe Texto é derivada da classe abstrata Dominios e é usada para representar strings de texto em formato padronizado.
 * Valores de texto devem ser strings de 10 a 20 caracteres válidos que não contém acentuação ou espaço em brancos consecutivos.
 * Implementado por: 221020940.
 */
class Texto : public Dominios {
   private:
    /**
     * @brief Valor do texto.
     * Atributo privado que armazena o valor de uma string de texto com formato válido.
     */
    string texto;

    /**
     * @brief Método para validação do valor de um texto.
     *Regras de formato:
     * - Stringo de texto deve conter de 10 a 20 caracteres;
     * - Cada caractere X é letra (A - Z, a - z), dígito (0-9), sinal de pontuação ( . , ; ? ! : - ), @ , #, $ , % ou &;
     * - Não há espaços em brancos consecutivos;
     * - Não há letras acentuadas;
     *
     * @param texto String passada por referência que contém o texto a ser validado.
     *
     */
    void validar(const string& texto);
};

#endif  // DOMINIOS_H_INCLUDED