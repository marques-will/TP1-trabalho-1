#include "interfaces.h"
#include <stdexcept>
#include <iostream>
#include <typeinfo>
using namespace std;

class StubLNAutenticacao: public ILNAutenticacao{
    public:
    const string TRIGGER_FALHA = "1998";
    const string TRIGGER_SISTEMA = "1999";
    ResultadoAutenticacao Autenticar(const Matricula&, const Senha&) throw(runtime_error);
};