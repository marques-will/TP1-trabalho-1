#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
using namespace std;
//Implementação das Classes

//CLASSE MATRICULA
class matricula{
    public:
        void validar_matricula(int matricula);
        void set_matricula(int matricula);
        int get_matricula();
    private:
        int matricula;
}

//CLASSE SENHA
class senha{
    public:
        void validar_senha(string senha);
        void set_senha(string senha);
        string get_senha();
    private:
        string senha;
}

//CLASSE TELEFONE
class telefone{
    public:
        void validar_telefone(int telefone);
        void set_telefone(int telefone);
        int get_telefone();
    private:
        int telefone;
}

//CLASSE RESULTADO
class resultado{
    public:
        
        string get_resultado();
    private:
        resultado();

}

//CLASSE DATA
class data{
    public:
        void validar_data(string data);
        void set_data(string data);
        string get_data();
    private:
        string data;
}

//CLASSE CODIGO
class codigo{
    public:
        void validar_codigo(string codigo);
        void set_codigo(string codigo);
        string get_codigo();
    private:
        string codigo;
}

//CLASS CLASSE
class classe{
    public:
    private:
}

//CLASSE TEXTO
class texto{
    public:
        void validar_texto(string texto);
        void set_texto(string texto);
        string get_texto();
    private:
        string texto;
}

//IMPLEMENTAÇÃO DA MATRÍCULA
void matricula::validar_matricula(int matricula){
    string str = to_string(matricula);
    int tamanho = str.length();
    if (tamanho <=)
}

void matricula::set_matricula(int matricula){
    this->matricula = matricula;
}

int matricula::get_matricula(){
    return matricula;
}

//IMPLEMENTAÇÃO DO TELEFONE
void telefone::validar_telefone(int telefone){
    string str = to_string(telefone);
    int tamanho = str.length();
    if (tamanho >= 7 && tamanho <= 15){
        continue;
    }
    else{
        throw invalid_argument("Telefone inválido");
    }
}
void telefone::set_telefone(int telefone){
    this->telefone = telefone;
}
int telefone::get_telefone(){
    return telefone;
}

//IMPLEMENTAÇÃO DA SENHA
void senha::set_senha(string senha){
    this-> senha = senha;
}
string senha::get_senha(){
    return senha;
}

//IMPLEMENTAÇÃO DO CÓDIGO
void codigo::validar_codigo(string codigo){
    int tamanho = codigo.length();
    if (tamanho < 6){
        throw invalid_argument("Código Inválido");
    }
    for(i=0;i<3;i++){
        if (!isalpha(codigo[i])){
            throw invalid_argument("Código Inválido");
        }
    }
    for(i=4;i<6;i++){
        if(!isdigit(codigo[i])){
            throw invalid_argument("Código Inválido");
        }
    }

}
void codigo::set_codigo(string codigo){
    this->codigo = codigo;
}
string codigo::get_codigo(){
    return codigo;
}

//IMPLEMENTAÇÃO DA DATA
void data::validar_data()
void data::set_data(string data){
    this->data = data;
}
string data::get_data(){
    return data;
}

//IMPLEMENTAÇÃO DO TEXTO
void texto::set_texto(string texto){
    this->texto = texto;
}
string texto::get_texto(){
    return texto;
}

#endif
