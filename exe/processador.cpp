// Processador.cpp
#include "Processador.h"

Processador::Processador(const std::string& comando) : comando(comando) {}

void Processador::adicionarRegra(const Regras& regra) {
    regras.push_back(regra);
}

void Processador::removerRegra(size_t indice) {
    if (indice < regras.size()) {
        regras.erase(regras.begin() + indice);
    }
}

std::string Processador::getComando() const {
    return comando;
}

void Processador::setComando(const std::string& comando) {
    this->comando = comando;
}

bool Processador::verificarAtivacao(const std::vector<double>& valoresSensores) const {
    for (const auto& regra : regras) {
        if (!regra.avaliar(valoresSensores)) {
            return false;
        }
    }
    return true;
}
