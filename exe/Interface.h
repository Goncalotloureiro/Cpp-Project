#ifndef TRABALHOPOO_INTERFACE_H
#define TRABALHOPOO_INTERFACE_H

#include "terminal.h"

using std::string;
using term::Window;
class Interface {
public:
    static void startInt();
    static void validaComando(const string& comando,Window& d);
    static bool leFicheiro(const string& nomeFicheiro,Window& d);
};

#endif //TRABALHOPOO_INTERFACE_H
