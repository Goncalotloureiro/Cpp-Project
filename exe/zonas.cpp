#include "Zona.h"
#include <iostream>

Zona::Zona(int idZona) : idZona(idZona), proximoIdAparelho(1), proximoIdProcessador(1) {}

Zona::~Zona() {}

void Zona::adicionarSensor(const Sensores& sensor) {
    sensores.push_back(sensor);
}

Sensores Zona::getSensorById(const std::string& idSensor) const {
    for (const auto& sensor : sensores) {
        if (sensor.getId() == idSensor) {
            return sensor;
        }
    }
    // Retornar um sensor vazio se não encontrado (pode-se alterar conforme necessidade)
    return Sensores("", SensorType::TEMPERATURA);
}

void Zona::removerSensor(const std::string& idSensor) {
    sensores.erase(
        std::remove_if(sensores.begin(), sensores.end(),
                       [&](const Sensores& sensor) { return sensor.getId() == idSensor; }),
        sensores.end());
}

void Zona::adicionarProcessador(const Processador& processador) {
    processador.setId("p" + std::to_string(proximoIdProcessador++));
    processadores.push_back(processador);
}

Processador Zona::getProcessadorById(const std::string& idProcessador) const {
    for (const auto& processador : processadores) {
        if (processador.getId() == idProcessador) {
            return processador;
        }
    }
    // Retornar um processador vazio se não encontrado (pode-se alterar conforme necessidade)
    return Processador("Comando Desconhecido");
}

void Zona::removerProcessador(const std::string& idProcessador) {
    processadores.erase(
        std::remove_if(processadores.begin(), processadores.end(),
                       [&](const Processador& processador) { return processador.getId() == idProcessador; }),
        processadores.end());
}

void Zona::adicionarAparelho(const Aparelho& aparelho) {
    aparelho.setId("a" + std::to_string(proximoIdAparelho++));
    aparelhos.push_back(aparelho);
}

Aparelho Zona::getAparelhoById(const std::string& idAparelho) const {
    for (const auto& aparelho : aparelhos) {
        if (aparelho.getId() == idAparelho) {
            return aparelho;
        }
    }
    // Retornar um aparelho vazio se não encontrado (pode-se alterar conforme necessidade)
    return Aparelho('a', "Aparelho Desconhecido");
}

void Zona::removerAparelho(const std::string& idAparelho) {
    aparelhos.erase(
        std::remove_if(aparelhos.begin(), aparelhos.end(),
                       [&](const Aparelho& aparelho) { return aparelho.getId() == idAparelho; }),
        aparelhos.end());
}

void Zona::listarSensores() const {
    std::cout << "Sensores na zona:\n";
    for (const auto& sensor : sensores) {
        std::cout << "ID: " << sensor.getId() << " | Tipo: " << sensor.getTipoAsString() << '\n';
    }
    std::cout << "-----------------\n";
}

void Zona::listarProcessadores() const {
    std::cout << "Processadores na zona:\n";
    for (const auto& processador : processadores) {
        std::cout << "ID: " << processador.getId() << " | Comando: " << processador.getComando() << '\n';
    }
    std::cout << "-----------------\n";
}

void Zona::listarAparelhos() const {
    std::cout << "Aparelhos na zona:\n";
    for (const auto& aparelho : aparelhos) {
        std::cout << "ID: " << aparelho.getId() << " | Nome: " << aparelho.getNome() << '\n';
    }
    std::cout << "-----------------\n";
}

void Zona::adicionarPropriedade(const std::string& chave, double valor) {
    propriedades[chave] = valor;
}

void Zona::removerPropriedade(const std::string& chave) {
    propriedades.erase(chave);
}

void Zona::alterarValorPropriedade(const std::string& chave, double novoValor) {
    if (propriedades.find(chave) != propriedades.end()) {
        propriedades[chave] = novoValor;
    }
}

void Zona::listarPropriedades() const {
    std::cout << "Propriedades da zona:\n";
    for (const auto& propriedade : propriedades) {
        std::cout << "Chave: " << propriedade.first << " | Valor: " << propriedade.second << '\n';
    }
    std::cout << "-----------------\n";
}

