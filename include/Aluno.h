#pragma once
#include "Pessoa.h"
#include "Departamento.h"

class Aluno : public Pessoa {
private:
    int id;
    int RA;
    Departamento*	DeptoAssociado;

public:
    Aluno(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Aluno(int i);
    Aluno();
    ~Aluno();

    void setRA(int ra = -1);
    int getRA();

    void setDepartamento(Departamento* d);
    Departamento* getDepartamento();

    void setId(int i);
    int getId();
};