#ifndef _LISTA_H_
#define _LISTA_H_

#include "../elements/Elemento.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template<class TIPO>
class Lista {
private:
    Elemento<TIPO>* pPrim = NULL;
    Elemento<TIPO>* pAtual = NULL;

public:
    Lista();
    ~Lista();

    void inicializa();

    bool incluaElemento(Elemento<TIPO>* pElemento);
    bool incluaInfo(TIPO* pInfo, const char* nome = "");
    //bool incluaInfo(TIPO* pInfo);
    void listeInfos();

    void setNome(const char* n);
    char* getNome();

    TIPO* localizar(const char* n);

    Elemento<TIPO>* getpPrimeiro();
    Elemento<TIPO>* getpAtual();

    void limpar();
};

template<class TIPO>
Lista<TIPO>::Lista() {
    inicializa();
}

template<class TIPO>
Lista<TIPO>::~Lista() {
    limpar();
}

template<class TIPO>
void Lista<TIPO>::inicializa() {
    pAtual = NULL;
    pPrim = NULL;
}

template<class TIPO>
void Lista<TIPO>::limpar() {
    Elemento<TIPO>* paux1;
    Elemento<TIPO>* paux2;

    paux1 = pPrim;
    paux2 = paux1;

    while(paux1 != NULL) {
        paux2 = paux1->getProximo();
        delete(paux1);
        paux1 = paux2;
    }

    pPrim = NULL;
    pAtual = NULL;
}

template<class TIPO>
bool Lista<TIPO>::incluaElemento(Elemento<TIPO>* pElemento) {
    if(NULL != pElemento) {
        if(NULL == pPrim) {
            pPrim = pElemento;
            pPrim->setAnterior(NULL);
            pPrim->setProximo(NULL);
            pAtual = pPrim;
        }

        else {
            pElemento->setAnterior(pAtual);
            pElemento->setProximo(NULL);
            pAtual->setProximo(pElemento);
            pAtual = pAtual->getProximo();
        }

        return true;
    }

    else {
        cout << "Erro, elemento nulo na lista!" << endl;
        return false;
    }
}

template<class TIPO>
bool Lista<TIPO>::incluaInfo(TIPO *pInfo, const char* nome) {
    if(NULL != pInfo) {
        Elemento<TIPO>* pElemento = NULL;
        pElemento = new Elemento<TIPO>();
        pElemento->setNome(nome);
        pElemento->setInfo(pInfo);
        incluaElemento(pElemento);
        return true;
    }

    else {
        cout << "Erro, elemento nulo na lista!" << endl;
        return false;
    }
}

/*
template<class TIPO>
bool Lista<TIPO>::incluaInfo(TIPO *pInfo) {
    if(NULL != pInfo) {
        Elemento<TIPO>* pElemento = NULL;
        pElemento = new Elemento<TIPO>();
        pElemento->setInfo(pInfo);
        incluaElemento(pElemento);
        return true;
    }

    else {
        cout << "Erro, elemento nulo na lista!" << endl;
        return false;
    }
}
*/

template<class TIPO>
void Lista<TIPO>::listeInfos() {
    Elemento<TIPO>* paux;
    paux = pPrim;
    if(NULL != pPrim) {
        while(NULL != paux) {
            cout << "Elemento na lista: " << paux->getNome() << endl;
            paux = paux->getProximo();
        }
    }
}

template<class TIPO>
TIPO* Lista<TIPO>::localizar(const char* n) {
    Elemento<TIPO>* paux;
    paux = pPrim;
    while(paux != NULL) {
        if(0 == strcmp(n, paux->getNome())) {
            return paux->getInfo();
        }
        paux = paux->getProximo();
    }

    return NULL;
}

template<class TIPO>
Elemento<TIPO>* Lista<TIPO>::getpPrimeiro() {
    return pPrim;
}

template<class TIPO>
Elemento<TIPO>* Lista<TIPO>::getpAtual() {
    return pAtual;
}

#endif