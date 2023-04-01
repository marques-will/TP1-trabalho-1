#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
class dev{
    private:
        dev(){
            matricula = new matricula();
            texto = new texto();
            senha = new senha();
            telefone = new telefone();
        }
        // matricula matricula;
        // texto nome;
        // senha senha;
        // telefone telefone;

    public:
};

class teste{
    private:
        teste(){
            nome = new nome();
            classe = new classe();
        }
    public:
};

class testCase{
    private:
        testCase(){
            nome = new nome();
            data = new data();
            acao = new acao();
            resposta = new resposta();
            resultado = new resultado();
        }
    public:
};


#endif // ENTIDADES_H_INCLUDED
