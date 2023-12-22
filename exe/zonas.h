#ifndef ZONA_H
#define ZONA_H

#include <vector>
#include <unordered_map>
#include "Sensores.h"
#include "Processador.h"
#include "Aparelho.h"

class Zona {
public:
    Zona(int idZona);
    ~Zona();

    // Métodos para manipular sensores
    void adicionarSensor(const Sensores& sensor);
    void removerSensor(const std::string& idSensor);

    // Métodos para manipular processadores
    void adicionarProcessador(const Processador& processador);
    void removerProcessador(int idProcessador);

    // Métodos para manipular aparelhos
    void adicionarAparelho(const Aparelho& aparelho);
    void removerAparelho(int idAparelho);

    // Métodos para listar componentes da zona
    void listarSensores() const;
    void listarProcessadores() const;
    void listarAparelhos() const;

    // Métodos para manipular propriedades da zona
    void adicionarPropriedade(const std::string& chave, double valor);
    void removerPropriedade(const std::string& chave);
    void alterarValorPropriedade(const std::string& chave, double novoValor);
    void listarPropriedades() const;

private:
    int idZona;
    std::unordered_map<std::string, double> propriedades;
    std::vector<Sensores> sensores;
    std::vector<Processador> processadores;
    std::vector<Aparelho> aparelhos;
};

#endif // ZONA_H


