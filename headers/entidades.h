#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
class dev {
   private:
    dev() {
        Matricula *matricula = new Matricula();
        Texto *texto = new Texto();
        Senha *senha = new Senha();
        Telefone *telefone = new Telefone();
    }

   public:
};

class test {
   private:
    test() {
        Codigo *codigo = new Codigo();
        Texto *nome = new Texto();
        Classe *classe = new Classe();
    }

   public:
};

class testCase {
   private:
    testCase() {
        Codigo *codigo = new Codigo();
        Texto *nome = new Texto();
        Data *data = new Data();
        Texto *acao = new Texto();
        Texto *resposta = new Texto();
        Resultado *resultado = new Resultado();
    }

   public:
};

#endif  // ENTIDADES_H_INCLUDED
