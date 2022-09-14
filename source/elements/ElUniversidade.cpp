#include "../../include/elements/ElUniversidade.h"

ElUniversidade::ElUniversidade() {
	pProx = NULL;
    pAnte = NULL;
}

ElUniversidade::~ElUniversidade() {
	pProx = NULL;
    pAnte = NULL;
}

void ElUniversidade::setUniversidade(Universidade *pu)  {
   pUniversidade = pu; 
}

Universidade* ElUniversidade::getUniversidade()  {
   return pUniversidade; 
}

char* ElUniversidade::getNome()  {
    return pUniversidade->getNome(); 
}