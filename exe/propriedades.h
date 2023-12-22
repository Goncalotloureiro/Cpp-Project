#ifndef TRABALHOPOO_PROPRIEDADE_H
#define TRABALHOPOO_PROPRIEDADE_H

#include <string>

class Propriedade {
public:
    Propriedade(const std::string& nome, const std::string& unidade, double min, double max);
    ~Propriedade();

    // Getters
    std::string getNome() const;
    std::string getUnidade() const;
    double getMinimo() const;
    double getMaximo() const;

private:
    std::string nome;
    std::string unidade;
    double minimo;
    double maximo;
};

#endif //TRABALHOPOO_PROPRIEDADE_H

