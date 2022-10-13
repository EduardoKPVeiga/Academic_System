#include "../include/Professor.h"

Professor::Professor(int diaNa, int mesNa, int anoNa, const char* nome):
Pessoa(diaNa, mesNa, anoNa, nome) {
    inicializa();
}

Professor::Professor(): Pessoa() {
    inicializa();
}

Professor::~Professor() {
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

void Professor::inicializa() {
    salario = 0;
    bolsa_projeto = 0;
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

void Professor::setUnivFiliado(Universidade* pu) {
    pUnivFiliado = pu;
}

void Professor::setDepartamento(Departamento *pdpto) {
    pDptoFiliado = pdpto;
}

void Professor::setSalario(float s) {
    salario = s;
}

float Professor::getSalario() {
    return salario;
}

void Professor::setBolsaProjeto(float b) {
    bolsa_projeto = b;
}

float Professor::getBolsaProjeto() {
    return bolsa_projeto;
}

void Professor::informaProventos() {
    cout << "O valor dos proventos do prof. " << nomeP << " é " << (salario + bolsa_projeto) << endl;
}

void Professor::informaAntiguidade() {
    cout << "Idade do prof. " << nomeP << ": " << idadeP << endl;
}

void Professor::OndeTrabalha() {
    cout << nomeP << " trabalha para a " << pUnivFiliado->getNome() << endl;
}

void Professor::QualDepartamentoTrabalha() {
    cout << nomeP << " trabalha para o " << pDptoFiliado->getNome() << ", " << pUnivFiliado->getNome() << endl;
}