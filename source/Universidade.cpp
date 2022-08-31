#include "../include/Universidade.h"

Universidade::Universidade(char *n) {
    strcpy(nome, n);
    for(int i = 0; i < 50; i++) { pDptos[i] = NULL; }
}

Universidade::~Universidade() {}

void Universidade::setNome(char *n) {
    strcpy(nome, n);
}

char *Universidade::getNome() {
    return nome;
}

void Universidade::setDepartamento(Departamento* pdep, int ctd) {
    pDptos[ctd] = pdep;
}

void Universidade::imprimeDptos() {
    for(int i = 0; i < 50; i++) {
        if(pDptos[i] != NULL)
            cout << pDptos[i]->getNome() << endl;
    }
}