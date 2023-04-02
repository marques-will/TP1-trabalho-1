#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
class desenvolvedor{
    private:
        desenvolvedor(){
            matricula =  new matricula();
            texto = new texto();
            senha = new senha();
            telefone = new telefone();
        }

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

class caso_teste{
    private:
        caso_teste(){
            nome = new nome();
            data = new data();
            acao = new acao();
            resposta = new resposta();
            resultado = new resultado();
        }
    public:
};


#endif // ENTIDADES_H_INCLUDED
