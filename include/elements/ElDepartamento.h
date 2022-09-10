#pragma once

#include "../Departamento.h"

class ElDepartamento{
private:
    Departamento* pDepartamento;

public:
    ElDepartamento();
    ~ElDepartamento();

    ElDepartamento* pProx;
    ElDepartamento* pAnte;

    void setDepartamento(Departamento* pde);
    Departamento* getDepartamento();

    char* getNome();

};