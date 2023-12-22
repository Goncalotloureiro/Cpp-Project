#ifndef HABITACAO_H
#define HABITACAO_H

#include "Zona.h"
#include <vector>

class Habitacao {
public:
    Habitacao();
    ~Habitacao();

    bool adicionarZona(const Zona& zona, int x, int y);
    bool removerZona(int x, int y);
    Zona* obterZona(int x, int y) const;

    void listarZonas() const;

private:
    std::vector<std::vector<Zona>> grelha; // Matriz de zonas
};

#endif // HABITACAO_H
