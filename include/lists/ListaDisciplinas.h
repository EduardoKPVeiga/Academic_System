#pragma once

#include "../elements/ElDisciplina.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::ios;
using std::cerr;

#include <fstream>
using std::ofstream;
using std::ifstream;

class ListaDisciplinas {
private:
    int cont_disc;
    int numero_disc;
    char nome[150];

    ElDisciplina* pElDisciplinaPrim;
    ElDisciplina* pElDisciplinaAtual;

public:
    ListaDisciplinas(int  nd = 1000, const char* n = "");
    ~ListaDisciplinas();
    
    void setNome(const char* n);
    void incluaDisciplina(Disciplina* pdi);

    void graveDisciplinas();
    void recupereDisciplinas();

    void listeDisciplinas();
    void listeDisciplinas2();

    void limpaLista();
};