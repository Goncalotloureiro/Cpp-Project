#ifndef TRABALHOPOO_HABITAÇÃO_H
#define TRABALHOPOO_HABITAÇÃO_H

    class Habitacao {
    public:
        Habitacao(int numLinhas, int numColunas);
        ~Habitacao();

        void adicionarZona(Zona zona);
        void removerZona(string idZona);

        void listarZonas() const;

    private:
        int numLinhas;
        int numColunas;

        bool posicaoValida(int linha, int coluna) const;
    };

#endif //TRABALHOPOO_HABITAÇÃO_H
