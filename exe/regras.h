// Regras.h
#ifndef REGRAS_H
#define REGRAS_H

#include <vector>

class Regras {
public:
    enum class TipoRegra {
        IGUAL_A,
        MENOR_QUE,
        MAIOR_QUE,
        ENTRE,
        FORA
    };

    Regras(TipoRegra tipo, double valor1, double valor2);
    ~Regras();

    void setTipo(TipoRegra tipo);
    TipoRegra getTipo() const;

    void setValor1(double valor);
    double getValor1() const;

    void setValor2(double valor);
    double getValor2() const;

    bool avaliar(double valorSensor) const;

private:
    TipoRegra tipo;
    double valor1;
    double valor2;
};

#endif // REGRAS_H

