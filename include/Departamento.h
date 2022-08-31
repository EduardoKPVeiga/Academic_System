#pragma once
#include <string.h>

class Universidade;

class Departamento{
private:
    char nome[130];

public:
    Departamento(char* n = "");
    ~Departamento();

    void setNome(char* n);
    char* getNome();
};