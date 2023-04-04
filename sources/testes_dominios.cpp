// #include "testes_dominios.h"

// //IMPLEMENTAÇÃO DO TESTE DO TELEFONE
// void TUTelefone::setUp(){
//     telefone = new Telefone();
//     estado = sucesso;
// }

// void TUTelefone::tearDown(){
//     delete telefone;
// }

// void TUTelefone::testarCenariosucesso(){
//     try{
//         telefone->setValor(valido);
//         if (telefone->getValor() != valido)
//             estado = falha;
//     }
//     catch(invalid_argument &excecao){
//         estado = falha;
//     }
// }

// void TUTelefone::testarCenariofalha(){
//     try{
//         telefone->setValor(invalido);
//         estado = falha;
//     }
//     catch(invalid_argument &excecao){
//         if (telefone->getValor() == invalido)
//             estado = falha;
//     }
// }

// int TUTelefone::run(){
//     setUp();
//     testarCenariosucesso();
//     testarCenariofalha();
//     tearDown();
//     return estado;
// }

// //IMPLEMENTAÇÃO DO TESTE DA SENHA
// void TUSenha::setUp(){
//     senha = new Senha();
//     estado = sucesso;
// }

// void TUSenha::tearDown(){
//     delete senha;
// }

// void TUSenha::testarCenariosucesso(){
//     try{
//         senha->setValor(valido);
//         if (senha->getValor() != valido)
//             estado = falha;
//     }
//     catch(invalid_argument &excecao){
//         estado = falha;
//     }
// }

// void TUSenha::testarCenariofalha(){
//     try{
//         senha->setValor(invalido);
//         estado = falha;
//     }
//     catch(invalid_argument &excecao){
//         if (senha->getValor() == invalido)
//             estado = falha;
//     }
// }

// int TUSenha::run(){
//     setUp();
//     testarCenariosucesso();
//     testarCenariofalha();
//     tearDown();
//     return estado;
// }