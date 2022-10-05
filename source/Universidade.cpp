#include "../include/Universidade.h"

Universidade::Universidade(const char *n):
ObjLDepartamentos(-1, "") {
    strcpy(nome, n);
}

Universidade::~Universidade() { }

void Universidade::setNome(const char *n) {
    strcpy(nome, n);
}

char *Universidade::getNome() {
    return nome;
}

void Universidade::setId(int i) {
    id = i;
}

int Universidade::getId() {
    return id;
}

void Universidade::setDepartamento(Departamento* pdep) {
    ObjLDepartamentos.incluaDepto(pdep);
}

// void Universidade::imprimeDptos() {
//     for(int i = 0; i < 50; i++) {
//         if(pDptos[i] != NULL)
//             cout << pDptos[i]->getNome() << endl;
//     }
// }