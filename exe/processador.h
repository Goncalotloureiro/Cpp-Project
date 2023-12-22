//
// Created by Bruno Correia on 26/11/2023.
//

#ifndef TRABALHOPOO_PROCESSADOR_H
#define TRABALHOPOO_PROCESSADOR_H


class Processador{
public:
    Processador();
    ~Processador();
    void adicionaRegra();
    void removerRegra();

private:
    std::string comando;
    int id;
};


#endif //TRABALHOPOO_PROCESSADOR_H
