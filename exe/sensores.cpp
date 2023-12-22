#include "Sensores.h"

Sensores::Sensores(const std::string& id, SensorType tipo) : id(id), tipo(tipo) {}

Sensores::~Sensores() {}

std::string Sensores::getId() const {
    return id;
}

SensorType Sensores::getTipo() const {
    return tipo;
}

std::string Sensores::getTipoAsString() const {
    return propertyMap.at(tipo);
}

void Sensores::setId(const std::string& id) {
    this->id = id;
}

void Sensores::setTipo(SensorType tipo) {
    this->tipo = tipo;
}

