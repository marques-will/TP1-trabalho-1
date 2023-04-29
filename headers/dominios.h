#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

//---------------------------------------------------------------------
// CLASSE DOMINIOS - 221020940
class Dominios {
   private:
    string valor;
    virtual void validar(const string& valor) = 0;  // método abstrato

   public:
    void setValor(string valor);
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
// DOMINIO CLASSE - 221006389
class Classe : public Dominios {
   private:
    string classe;
    void validar(const string& classe);
};

//---------------------------------------------------------------------
// DOMINIO CODIGO - 221006351
/**
 * @brief Padrão para representação da classe Código.
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
    * @brief O atributo do tipo string armazenado na classe.
    * 
    */
    string codigo;
    /**
     * @brief O método que valida se o parâmetro está no formato válido para a classe.
     * 
     * @param codigo 
     */
    void validar(const string& codigo);
};

//---------------------------------------------------------------------
// DOMINIO DATA - 221020940
class Data : public Dominios {
   private:
    string data;
    vector<string> extrair_data(const string& data);
    void validar(const string& data);
};

//---------------------------------------------------------------------
// DOMINIO MATRICULA - 221006351
/**
 * @brief Padrão para representação para a classe Matricula.
 * 
 * Herda no modo public da Classe Dominios.
 * 
 * Regras de formato:
 * 
 * -Strings de 7 caracteres.
 * -Os caracteres são números inteiros de 0 a 9
 * -O último dígito da string é o dígito verificador de módulo 10.
 * -O dígito verificador define se a string é válida ou não.
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
// DOMINIO RESULTADO - 221006389
class Resultado : public Dominios {
   private:
    string resultado;
    void validar(const string& resultado);
};

//---------------------------------------------------------------------
// DOMINIO SENHA - 221020940
class Senha : public Dominios {
   private:
    string senha;
    void validar(const string& senha);
};

//---------------------------------------------------------------------
// DOMINIO TELEFONE - 221006351
/**
 * @brief Padrão para representação da Classe Telefone.
 * 
 * Herda no modo public da Classe Dominios.
 * 
 * Regras de formato:
 * 
 * -Strings de 8 a 16 caracteres.
 * -O primeiro caractere sempre é "+".
 * -Os demais caracteres são dígitos.
 * -Podem haver de 7 a 15 dígitos.
 * -Cada dígito é um número inteiro de 0 a 9.
 * 
 * Por: 221006351.
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
// DOMINIO TEXTO - 221020940
class Texto : public Dominios {
   private:
    string texto;
    void validar(const string& texto);
};

#endif  // DOMINIOS_H_INCLUDED
