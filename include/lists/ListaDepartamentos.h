#pragma once

#include "../elements/ElDepartamento.h"

class ListaDepartamentos {
private:
    int cont_depto;
    int numero_depto;
    char nome[150];

    ElDepartamento* pElDepartamentoPrim;
    ElDepartamento* pElDepartamentoAtual;

public:
    ListaDepartamentos();
    ~ListaDepartamentos();

    void setNome(const char* n);
    void incluaDepto(Departamento* pde);

    void listeDepto();
    void listeDepto2();

};