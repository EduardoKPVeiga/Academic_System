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

    void setInfo(TIPO* pI);
    TIPO* getInfo();

    void setNome(const char* n);
    char* getNome();

};

template<class TIPO>
Elemento<TIPO>::Elemento() {
    pAnterior = NULL;
    pProximo = NULL;
    pInfo = NULL;
}

template<class TIPO>
Elemento<TIPO>::~Elemento() {
    pAnterior = NULL;
    pProximo = NULL;
    pInfo = NULL;
}

template<class TIPO>
void Elemento<TIPO>::setProximo(Elemento<TIPO>* pP) {
    pProximo = pP;
}

template<class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getProximo() {
    return pProximo;
}

template<class TIPO>
void Elemento<TIPO>::setAnterior(Elemento<TIPO>* pA) {
    pAnterior = pA;
}

template<class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getAnterior() {
    return pAnterior;
}

template<class TIPO>
void Elemento<TIPO>::setInfo(TIPO* pI) {
    pInfo = pI;
}

template<class TIPO>
TIPO* Elemento<TIPO>::getInfo() {
    return pInfo;
}

template<class TIPO>
void Elemento<TIPO>::setNome(const char* n) {
    strcpy(nome, n);
}

template<class TIPO>
char* Elemento<TIPO>::getNome() {
    return nome;
}

#endif