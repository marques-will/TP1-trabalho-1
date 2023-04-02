#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
class desenvolvedor{
    private:
        desenvolvedor(){
            Matricula =  new matricula();
            Texto = new texto();
            Senha = new senha();
            Telefone = new telefone();
        }

    public:
};

class teste{
    private:
        teste(){
            Nome = new nome();
            Classe = new classe();
        }
    public:
};

class caso_teste{
    private:
        caso_teste(){
            Nome = new nome();
            Data = new data();
            Acao = new acao();
            Resposta = new resposta();
            Resultado = new resultado();
        }
    public:
};


#endif // ENTIDADES_H_INCLUDED
