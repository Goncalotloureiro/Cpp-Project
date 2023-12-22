#include "Habitacao.h"

Habitacao::Habitacao() {
    // Inicialização da grelha com dimensões mínimas (por exemplo, 2x2)
    grelha.resize(2, std::vector<Zona>(2));
}

Habitacao::~Habitacao() {}

bool Habitacao::adicionarZona(const Zona& zona, int x, int y) {
    if (x >= 0 && y >= 0 && x < grelha.size() && y < grelha[0].size()) {
        grelha[x][y] = zona;
        return true;
    }
    return false;
}

bool Habitacao::removerZona(int x, int y) {
    if (x >= 0 && y >= 0 && x < grelha.size() && y < grelha[0].size()) {
        grelha[x][y] = Zona(-1); // Substituir pela criação de uma zona vazia
        return true;
    }
    return false;
}

Zona* Habitacao::obterZona(int x, int y) const {
    if (x >= 0 && y >= 0 && x < grelha.size() && y < grelha[0].size()) {
        return &grelha[x][y];
    }
    return nullptr;
}

void Habitacao::listarZonas() const {
    for (size_t i = 0; i < grelha.size(); ++i) {
        for (size_t j = 0; j < grelha[i].size(); ++j) {
            Zona zona = grelha[i][j];
            std::cout << "Posição (" << i << ", " << j << "): ";
            if (zona.getId() != -1) { // Verifica se a zona não está vazia
                std::cout << "ID: " << zona.getId() << ", Tipo: " << zona.getTipoAsString() << std::endl;
            } else {
                std::cout << "Vazio" << std::endl;
            }
        }
    }
}
