#pragma once

#include "Conhecimento.h"

#include <string.h>
#include <iostream>

class Livro: public Conhecimento {
private:

protected:
    char nome[150];
    int ano_impressao;

public:
    Livro(int i = 0);
    ~Livro();

    void setNome(const char* n);
    char* getNome();

    void setAnoImpressao(int a);
    int getAnoImpressao();

    void informaAntiguidade();
};