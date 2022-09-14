#pragma once
#include <string.h>
#include <iostream>
// #include "lists/ListaDisciplinas.h"

using std::cin;
using std::cout;
using std::endl;

class Universidade;
class Disciplina;
class ListaDisciplinas;

class Departamento{
private:
    char nome[130];
    Universidade* pUniv;
    // Disciplina *pDisciplPrim;
    // Disciplina *pDisciplAtual;
    ListaDisciplinas* pObjLDisciplinas;

public:
    Departamento(const char* n = "");
    ~Departamento();

    void setNome(const char* n);
    char* getNome();

    void setUniversidade(Universidade* pu);
    Universidade* getUniversidade ( );
    
    void incluaDisciplina(Disciplina* pdi);
    void listeDisciplinas();
    void listeDisciplinas2();
};