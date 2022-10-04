#ifndef _ELEMENTO_H_
#define _ELEMENTO_H_

template<class TIPO>
class Elemento {
private:
    Elemento<TIPO>* pProximo;
    Elemento<TIPO>* pAnterior;
    TIPO* pInfo;
    char nome[150];

public:
    Elemento();
    ~Elemento();

    void setProximo(Elemento<TIPO>* pP);
    Elemento<TIPO>* getProximo();

    void setAnterior(Elemento<TIPO>* pA);
    Elemento<TIPO>* getAnterior();

    void setInfo(Elemento<TIPO>* pI);
    TIPO* getInfo();

};

template<class TIPO>
Elemento<TIPO>::Elemento() {
    pAnterior = NULL;
    pProximo = NULL;
    pInfo = NULL;
}

template<class TIPO>
Elemento<class TIPO>::~Elemento() {
    pAnterior = NULL;
    pProximo = NULL;
    pInfo = NULL;
}

template<class TIPO>
void Elemento<class TIPO>::setProximo(Elemento<class TIPO>* pP) {
    pProximo = pP;
}

template<class TIPO>
Elemento<class TIPO>* Elemento<class TIPO>::getProximo() {
    return pProximo;
}

template<class TIPO>
void Elemento<class TIPO>::setAnterior(Elemento<class TIPO>* pA) {
    pAnterior = pA;
}

Elemento<class TIPO>* Elemento<class TIPO>::getAnterior() {
    return pAnterior;
}

template<class TIPO>
void Elemento<TIPO>::setInfo(Elemento<TIPO>* pI) {
    pInfo = pI;
}

template<class TIPO>
TIPO* Elemento<TIPO>::getInfo() {
    return pInfo;
}

#endif