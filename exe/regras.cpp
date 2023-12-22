// Regras.cpp
#include "Regras.h"

Regras::Regras(TipoRegra tipo, double valor1, double valor2) : tipo(tipo), valor1(valor1), valor2(valor2) {}

Regras::~Regras() {}

void Regras::setTipo(TipoRegra tipo) {
    this->tipo = tipo;
}

Regras::TipoRegra Regras::getTipo() const {
    return tipo;
}

void Regras::setValor1(double valor) {
    valor1 = valor;
}

double Regras::getValor1() const {
    return valor1;
}

void Regras::setValor2(double valor) {
    valor2 = valor;
}

double Regras::getValor2() const {
    return valor2;
}

bool Regras::avaliar(double valorSensor) const {
    switch (tipo) {
        case TipoRegra::IGUAL_A:
            return valorSensor == valor1;
        case TipoRegra::MENOR_QUE:
            return valorSensor < valor1;
        case TipoRegra::MAIOR_QUE:
            return valorSensor > valor1;
        case TipoRegra::ENTRE:
            return valorSensor >= valor1 && valorSensor <= valor2;
        case TipoRegra::FORA:
            return valorSensor < valor1 || valorSensor > valor2;
        default:
            return false;
    }
}

