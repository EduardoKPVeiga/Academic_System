#pragma once

#include "../elements/ElDepartamento.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::ios;
using std::cerr;

#include <fstream>
using std::ofstream;
using std::ifstream;

class ListaDepartamentos {
private:
    int cont_depto;
    int numero_depto;
    char nome[150];

    ElDepartamento* pElDepartamentoPrim;
    ElDepartamento* pElDepartamentoAtual;

public:
    ListaDepartamentos(int nd = 1000, const char* n = "");
    ~ListaDepartamentos();

    void setNome(const char* n);
    void incluaDepto(Departamento* pde);

    void graveDepartamentos();
    void recupereDepartamentos();

    void listeDepto();
    void listeDepto2();

    void limpaLista();
};