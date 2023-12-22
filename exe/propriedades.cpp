#include "Propriedade.h"

Propriedade::Propriedade(const std::string& nome, const std::string& unidade, double min, double max)
    : nome(nome), unidade(unidade), minimo(min), maximo(max) {}

Propriedade::~Propriedade() {}

std::string Propriedade::getNome() const {
    return nome;
}

std::string Propriedade::getUnidade() const {
    return unidade;
}

double Propriedade::getMinimo() const {
    return minimo;
}

double Propriedade::getMaximo() const {
    return maximo;
}