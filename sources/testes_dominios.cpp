#include "../headers/testes_dominios.h"
#include "../headers/dominios.h"
#include "../sources/dominios.cpp"
using namespace std;


// //IMPLEMENTAÇÃO DO TESTE DO TELEFONE
const int TUTelefone::SUCESSO;
const int TUTelefone::FALHA;
string TUTelefone::VALOR_VALIDO;
string TUTelefone::VALOR_INVALIDO;

 void TUTelefone::setUp(){
     telefone = new Telefone();
     estado = SUCESSO;
 }

 void TUTelefone::tearDown(){
     delete telefone;
 }

 void TUTelefone::testarCenarioSucesso(){
     try{
         telefone->setValor(VALOR_VALIDO);
         if (telefone->getValor() != VALOR_VALIDO)
             estado = FALHA;
     }
     catch(invalid_argument &excecao){
         estado = FALHA;
     }
 }

 void TUTelefone::testarCenarioFalha(){
     try{
         telefone->setValor(VALOR_INVALIDO);
         estado = FALHA;
     }
     catch(invalid_argument &excecao){
         if (telefone->getValor() == VALOR_INVALIDO)
             estado = FALHA;
     }
 }

 int TUTelefone::run(){
     setUp();
     testarCenarioSucesso();
     testarCenarioFalha();
     tearDown();
     return estado;
 }

// //IMPLEMENTAÇÃO DO TESTE DA SENHA
