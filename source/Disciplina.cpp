#include "../include/Disciplina.h"
#include <stdio.h>
#include <string.h>

Disciplina::Disciplina(const char* ac) {
    pDeptoAssociado = NULL;
    pProx = NULL;
    pAnte = NULL;
    strcpy (area_conhecimento, ac);
}

Disciplina::~Disciplina() {
    pDeptoAssociado = NULL;
    pProx = NULL;
    pAnte = NULL;
}

void Disciplina::setId(int n) {
    id = n;
}

int Disciplina::getId() {
    return id;
}

void Disciplina::setNome(const char* n) {
    strcpy ( nome, n );
}

char* Disciplina::getNome() {
    return nome;
}

void Disciplina::setDepartamento(Departamento* pdpto) {
    pDeptoAssociado = pdpto;

/*
    Cada vez que um Departamento é associado a umaDisciplina,
    esta Disciplina passa a fazer parte da lista de disciplina 
    do Departamento, por meio do comando abaixo.
*/
    pdpto->incluaDisciplina ( this );
}

Departamento* Disciplina::getDepartamento() {
    return pDeptoAssociado;
}