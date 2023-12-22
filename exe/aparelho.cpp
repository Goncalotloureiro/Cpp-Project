#include "Aparelho.h"

Aparelho::Aparelho(char letra, const std::string& nome)
    : letra(letra), nome(nome), estado(Estado::DESLIGADO),
      ligadoRecentemente(false), instantesLigado(0), instanteUltimoDesligar(0) {}

Aparelho::~Aparelho() {}

char Aparelho::getLetra() const {
    return letra;
}

std::string Aparelho::getNome() const {
    return nome;
}

Estado Aparelho::getEstado() const {
    return estado;
}

void Aparelho::liga() {
    estado = Estado::LIGADO;
    aplicarEfeitoLigado();
    ligadoRecentemente = true;
}

void Aparelho::desliga() {
    estado = Estado::DESLIGADO;
    aplicarEfeitoDesligar();
    ligadoRecentemente = false;
    instanteUltimoDesligar = instantesLigado;
}

void Aparelho::aplicarEfeitoLigado() {
    if (letra == 'a') { // Aquecedor
        zona->aumentarTemperatura(1); // Adiciona 1 grau celsius
        zona->adicionarRuido(5); // Adiciona 5 db de ruído
    } else if (letra == 's') { // Aspersor
        zona->aumentarHumidade(50); // Adiciona 50% de humidade relativa
        zona->adicionarVibracao(100); // Adiciona vibração de 100 Hz
        if (instantesLigado == 2) {
            zona->alterarFumo(0); // Coloca o fumo a 0 no segundo instante
        }
    } else if (letra == 'r') { // Refrigerador
        zona->diminuirTemperatura(1); // Remove 1 grau celsius
        zona->adicionarRuido(20); // Adiciona 20 db de ruído no primeiro instante
    } else if (letra == 'l') { // Lâmpada
        zona->adicionarLumens(900); // Adiciona 900 lúmens
    }
}

void Aparelho::aplicarEfeitoDesligar() {
    if (letra == 'a') { // Aquecedor
        zona->removerRuido(5); // Remove 5 db de ruído
    } else if (letra == 's') { // Aspersor
        if (instanteUltimoDesligar == 1) {
            zona->removerFumo(0); // Remove 100 Hz de vibração
        }
    } else if (letra == 'r') { // Refrigerador
        zona->removerRuido(20); // Remove 20 db de ruído
    } else if (letra == 'l') { // Lâmpada
        zona->removerLumens(900); // Remove 900 lúmens
    }
}