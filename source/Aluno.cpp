#include "Aluno.h";

Aluno::Aluno(int diaNa, int mesNa, int anoNa, char* nome) :
Pessoa(diaNa, mesNa, anoNa, nome) {}

Aluno::Aluno() {}

Aluno::~Aluno() {}

void Aluno::setRA(int i) {
    RA = i;
}

int Aluno::getRA() { return RA; }