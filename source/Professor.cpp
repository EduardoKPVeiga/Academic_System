#include "../include/Professor.h"

Professor::Professor(int diaNa, int mesNa, int anoNa, const char* nome):
Pessoa(diaNa, mesNa, anoNa, nome) {
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

Professor::Professor(): Pessoa() {
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

Professor::~Professor() {
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

void Professor::setUnivFiliado(Universidade* pu) {
    pUnivFiliado = pu;
}

void Professor::setDepartamento(Departamento *pdpto) {
    pDptoFiliado = pdpto;
}

void Professor::OndeTrabalha() {
    cout << nomeP << " trabalha para a " << pUnivFiliado->getNome() << endl;
}

void Professor::QualDepartamentoTrabalha() {
    cout << nomeP << " trabalha para o " << pDptoFiliado->getNome() << ", " << pUnivFiliado->getNome() << endl;
}