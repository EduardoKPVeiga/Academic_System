#pragma once

#include "Departamento.h"
#include "Aluno.h"
#include "lists/Lista.h"

class Disciplina {
private:
    int id;
    char nome[150];
    char area_conhecimento[150];
    // int numero_alunos;
    // int cont_alunos;
    Departamento* pDeptoAssociado;
    Lista<Aluno> ObjLAlunos;
    // ElAluno *pAlunoPrim;
    // ElAluno *pAlunoAtual;

public:
    Disciplina(int i, const char* ac = "");
    Disciplina();
    ~Disciplina();

    // Disciplina* pProx;
    // Disciplina* pAnte;

    void setId(int i);
    int getId();

    void setNome(const char* n);
    char* getNome();

    void setAreaConhecimento(const char* ac);
    char* getAreaConhecimento();

    void setDepartamento(Departamento* pdpto);
    Departamento* getDepartamento();

    void setAluno(Aluno* pa);
    void listeAlunos();
};