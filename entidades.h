#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
class desenvolvedor {
   private:
    desenvolvedor() {
        Matricula *matricula = new Matricula();
        Texto *texto = new Texto();
        Senha *senha = new Senha();
        Telefone *telefone = new Telefone();
    }

   public:
};

class teste {
   private:
    teste() {
        Nome = new nome();
        Classe = new classe();
    }

   public:
};

class caso_teste {
   private:
    caso_teste() {
        Nome = new nome();
        Data = new data();
        Acao = new acao();
        Resposta = new resposta();
        Resultado = new resultado();
    }

   public:
};

#endif  // ENTIDADES_H_INCLUDED
