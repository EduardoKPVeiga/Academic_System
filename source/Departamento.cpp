#include "../include/Departamento.h"
#include "../include/Universidade.h"
#include "../include/Disciplina.h"
#include "lists/ListaDisciplinas.h"     

Departamento::Departamento(const char* n) {
    strcpy(nome, n);
    pObjLDisciplinas = new ListaDisciplinas(-1, "");
    pObjLDisciplinas->setNome(n);
    
    // pDisciplPrim = NULL;
    // pDisciplAtual = NULL;
}

Departamento::~Departamento() {
    if(pObjLDisciplinas) {
        delete pObjLDisciplinas;
    }
}

void Departamento::setNome(const char* n) {
    strcpy(nome, n);
    pObjLDisciplinas->setNome(n);
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

void Departamento::incluaDisciplina(Disciplina* pdi) {
    pObjLDisciplinas->incluaDisciplina(pdi);

    // if ( pDisciplPrim == NULL ) {
    //     pDisciplPrim = pd;
    //     pDisciplAtual = pd;
    // }
    // else {
    //     pDisciplAtual->pProx = pd;
    //     pd->pAnte = pDisciplAtual;
    //     pDisciplAtual = pd;
    // }
}

void Departamento::listeDisciplinas() {
    pObjLDisciplinas->listeDisciplinas();

    // Disciplina* pAux;
    // pAux = pDisciplPrim;

    // while ( pAux != NULL ) {
    //     cout << " A disciplina " << pAux->getNome() << "pertence ao Departamento" << nome << endl;
    //     pAux = pAux->pProx;
    // }
}

void Departamento::listeDisciplinas2() {
    pObjLDisciplinas->listeDisciplinas2();

    // Disciplina* pAux;
    // pAux = pDisciplAtual;

    // while ( pAux != NULL ) {
    //     cout << " A disciplina " << pAux->getNome() << "pertence ao Departamento" << nome << endl;
    //     pAux = pAux->pAnte;
    // }
}