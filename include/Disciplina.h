#pragma once
#include "Departamento.h"

class Disciplina {
private:
    int id;
    char nome[150];
    char area_conhecimento[150];
    Departamento* pDeptoAssociado;

public:
    Disciplina(const char* ac = "");
    ~Disciplina();

    Disciplina* pProx;
    Disciplina* pAnte;

    void setId(int n);
    int getId();

    void setNome(const char* n);
    char* getNome();

    void setDepartamento(Departamento* pdpto);
    Departamento* getDepartamento();
};