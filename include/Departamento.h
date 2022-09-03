#pragma once
#include <string.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Universidade;
class Disciplina;

class Departamento{
private:
    char nome[130];
    Universidade* pUniv;
    Disciplina *pDisciplPrim;
    Disciplina *pDisciplAtual;

public:
    Departamento(const char* n = "");
    ~Departamento();

    void setNome(const char* n);
    char* getNome();
    void setUniversidade(Universidade* pu);
    Universidade* getUniversidade ( );
    
    void incluaDisciplina(Disciplina* pd);
    void listeDisciplinas();
    void listeDisciplinas2();
};