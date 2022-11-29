#pragma once
#ifndef ELEVADOR_H

class Elevador {
private:
    int AndarAtual;
    int TotalAndares;
    int Capacidade;
    int PessoasPresentes;

public:
    Elevador();
    int inicializa(int capacidade, int total);
    void entra();
    void sai();
    void sobe();
    void desce();
    int getAndarAtual();
    int getTotalAndares();
    int getCapacidade();
    int getPessoasPresentes();
};

#endif
