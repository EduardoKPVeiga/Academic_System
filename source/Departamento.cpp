#include "../include/Departamento.h"

Departamento::Departamento(char* n) {
    strcpy(nome, n);
}

Departamento::~Departamento() { }

void Departamento::setNome(char* n) {
    strcpy(nome, n);
}

char* Departamento::getNome() {
    return nome;
}