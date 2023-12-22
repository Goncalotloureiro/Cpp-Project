#ifndef TRABALHOPOO_REGRAS_H
#define TRABALHOPOO_REGRAS_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Regras {
public:
    Regras(string& tipo, double valor1, double valor2);
    ~Regras();
private:
    string tipo;
    double valor1;
    double valor2;
};

#endif //TRABALHOPOO_REGRAS_H
