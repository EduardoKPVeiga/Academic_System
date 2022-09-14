#pragma once

#include "../elements/ElAluno.h"

class ListaAlunos {
private:
    int cont_alunos;
    int numero_alunos;
    char nome[150];

    ElAluno* pElAlunosPrim;
    ElAluno* pElAlunosAtual;

public:
    ListaAlunos(int na = 40, const char* n = "");
    ~ListaAlunos();

    void setNome(const char* n);
    void incluaAluno(Aluno* pal);

    void listeAlunos();
    void listeAlunos2();
};
