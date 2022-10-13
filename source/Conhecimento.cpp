#include "../include/Conhecimento.h"

Conhecimento::Conhecimento(int i) {
    id = i;
}

Conhecimento::~Conhecimento() {}

char* Conhecimento::getDominio() {
    return dominio;
}

void Conhecimento::setDominio(const char* d) {
    strcpy(dominio, d);
}