// Aparelho.h
#ifndef APARELHO_H
#define APARELHO_H

#include <string>
#include <iostream>
#include "Regras.h"

enum class Estado {
    LIGADO,
    DESLIGADO
};

class Aparelho {
public:
    Aparelho(char letra, const std::string& nome);
    ~Aparelho();

    char getLetra() const;
    std::string getNome() const;
    Estado getEstado() const;

    void liga();
    void desliga();
    std::string executaComando(const std::string& comando);

private:
    char letra;
    std::string nome;
    Estado estado;
    bool ligadoRecentemente;
    int instantesLigado;
    int instanteUltimoDesligar;

    void resetLigadoRecentemente();
    void aplicarEfeitoLigado();
    void aplicarEfeitoDesligar();
    void adicionarHumidade(int& humidade);
    void adicionarRuido(int& ruido);
    void adicionarVibracao(int& vibracao);
    void adicionarFumo(int& fumo);
    void removerHumidade(int& humidade);
    void removerRuido(int& ruido);
    void removerLumens(int& lumens);
};

#endif // APARELHO_H
