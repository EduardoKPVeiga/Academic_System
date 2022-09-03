#include "../include/Departamento.h"
#include "../include/Universidade.h"
#include "../include/Disciplina.h"

Departamento::Departamento(const char* n) {
    strcpy(nome, n);
    pDisciplPrim = NULL;
    pDisciplAtual = NULL;
}

Departamento::~Departamento() { }

void Departamento::setNome(const char* n) {
    strcpy(nome, n);
    pDisciplPrim = NULL;
    pDisciplAtual = NULL;
}

char* Departamento::getNome() {
    return nome;
}

void Departamento::setUniversidade(Universidade* pu ) {
    pUniv = pu;
}

Universidade* Departamento::getUniversidade() {
    return pUniv;
}

void Departamento::incluaDisciplina(Disciplina* pd) {
    if ( pDisciplPrim == NULL ) {
        pDisciplPrim = pd;
        pDisciplAtual = pd;
    }
    else {
        pDisciplAtual->pProx = pd;
        pd->pAnte = pDisciplAtual;
        pDisciplAtual = pd;
    }
}

void Departamento::listeDisciplinas() {
    Disciplina* pAux;
    pAux = pDisciplPrim;

    while ( pAux != NULL ) {
        cout << " A disciplina " << pAux->getNome() << "pertence ao Departamento" << nome << endl;
        pAux = pAux->pProx;
    }
}

void Departamento::listeDisciplinas2() {
    Disciplina* pAux;
    pAux = pDisciplAtual;

    while ( pAux != NULL ) {
        cout << " A disciplina " << pAux->getNome() << "pertence ao Departamento" << nome << endl;
        pAux = pAux->pAnte;
    }
}