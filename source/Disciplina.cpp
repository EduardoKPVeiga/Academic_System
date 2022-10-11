#include "../include/Disciplina.h"
#include <stdio.h>
#include <string.h>

Disciplina::Disciplina(int i, const char* ac) {
    id = i;
    pDeptoAssociado = NULL;
    strcpy (area_conhecimento, ac);
}

Disciplina::Disciplina() {
    pDeptoAssociado = NULL;
}

Disciplina::~Disciplina() {
    ObjLAlunos.limpar();
    pDeptoAssociado = NULL;
}

void Disciplina::setId(int i) {
    id = i;
}

int Disciplina::getId() {
    return id;
}

void Disciplina::setNome(const char* n) {
    strcpy (nome, n);
}

char* Disciplina::getNome() {
    return nome;
}

void Disciplina::setAreaConhecimento(const char* ac) {
    strcpy(area_conhecimento, ac);
}

char* Disciplina::getAreaConhecimento() {
    return area_conhecimento;
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

void Disciplina::setAluno ( Aluno* pa ) {
    ObjLAlunos.incluaInfo(pa);
}

void Disciplina::listeAlunos() {
    cout << "\n\nAlunos matriculados na disciplina: " << area_conhecimento << ": " << endl;
    ObjLAlunos.listeInfos();
}