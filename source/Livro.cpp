#include "../include/Livro.h"

Livro::Livro(int i) {
    id = i;
    ano_impressao = -1;
}

Livro::~Livro() {}

void Livro::setNome(const char* n) {
    strcpy(nome, n);
}

char* Livro::getNome() {
    return nome;
}

void Livro::setAnoImpressao(int ai) {
    ano_impressao = ai;
}

int Livro::getAnoImpressao() {
    return ano_impressao;
}

void Livro::informaAntiguidade() {
    std::cout << "Ano de impressão: " << ano_impressao << "." << std::endl;
}