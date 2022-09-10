#include "../../include/lists/ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas(int nd, const char* n) {
    numero_disc = nd;
    cont_disc = 0;

    pElDisciplinaAtual = NULL;
    pElDisciplinaPrim = NULL;

    strcpy(nome, n);
}

ListaDisciplinas::~ListaDisciplinas() {
    ElDisciplina *paux1, *paux2;

    paux1 = pElDisciplinaPrim;
    paux2 = paux1;

    while (paux1 != NULL)
    {
        paux2 = paux1->pProx;
        delete(paux1);
        paux1 = paux2;
    }

    pElDisciplinaPrim = NULL;
    pElDisciplinaAtual = NULL;
}

void ListaDisciplinas::setNome(const char* n) {
    strcpy(nome, n);
}

void ListaDisciplinas::incluaDisciplina(Disciplina* pdi) {
    if(((cont_disc < numero_disc) && (pdi != NULL) || ((numero_disc == -1) && (pdi != NULL)))) {
        ElDisciplina *paux;
        paux = new ElDisciplina();
        paux->setDisciplina(pdi);

        if(pElDisciplinaPrim == NULL) {
            pElDisciplinaPrim = paux;
            pElDisciplinaAtual = paux;
        }

        else {
            pElDisciplinaAtual->pProx = paux;
            paux->pAnte = pElDisciplinaAtual;
            pElDisciplinaAtual = paux;
        }
        cont_disc++;
    }
    
    else {
        cout << "Disciplina nao incluida!" << endl;
        cout << numero_disc << " disciplinas já incluidas." << endl; 
    }
}

void ListaDisciplinas::listeDisciplinas() {
    ElDisciplina* paux;
    paux = pElDisciplinaPrim;

    while(paux != NULL) {
        cout << "Disciplina: " << paux->getNome() << ", do departamento: " << nome << "." << endl;
        paux = paux->pProx;
    }
}

void ListaDisciplinas::listeDisciplinas2() {
    ElDisciplina* paux;
    paux = pElDisciplinaAtual;

    while(paux != NULL) {
        cout << "Disciplina: " << paux->getNome() << ", do departamento: " << nome << "." << endl;
        paux = paux->pProx;
    }
}