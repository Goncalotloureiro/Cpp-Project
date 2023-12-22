// Processador.h
#ifndef PROCESSADOR_H
#define PROCESSADOR_H

#include <string>
#include <vector>
#include "Regras.h"

class Processador {
public:
    Processador(const std::string& comando);
    // Métodos para adicionar e remover regras
    void adicionarRegra(const Regras& regra);
    void removerRegra(size_t indice);
    // Getters e setters
    std::string getComando() const;
    void setComando(const std::string& comando);
    // Verificação de ativação
    bool verificarAtivacao(const std::vector<double>& valoresSensores) const;

private:
    std::string comando;
    std::vector<Regras> regras;
};

#endif // PROCESSADOR_H
