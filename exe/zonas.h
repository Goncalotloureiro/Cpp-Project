#ifndef TRABALHOPOO_ZONAS_H
#define TRABALHOPOO_ZONAS_H

class Zonas {
    public:
        Zonas(string id, int linha, int coluna);

        ~Zonas();

        std::string getId() const;

        int getLinha() const;

        int getColuna() const;

    // Métodos para sensores
    void adicionarSensor(Sensor* sensor);

    void removerSensor(const std::string& id);

    void listarSensores() const;

    // Métodos para processadores de regras
    void adicionarProcessador(Regras* regras);

    void removerProcessador(const std::string& id);

    void listarProcessadores() const;

    // Métodos para aparelhos
    void adicionarAparelho(Aparelho* aparelho);

    void removerAparelho(const std::string& id);

    void listarAparelhos() const;

private:
    string id;

    int linha;

    int coluna;
};


#endif //TRABALHOPOO_ZONAS_H
