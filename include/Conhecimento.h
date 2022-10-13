#pragma once

#include <string.h>
#include <iostream>

class Conhecimento {
private:

protected:
    int id;
    char dominio[150];

public:
    Conhecimento(int i = 0);
    ~Conhecimento();

    char* getDominio();
    void setDominio(const char* d);

    virtual void informaAntiguidade() = 0; // função virtual pura
};
