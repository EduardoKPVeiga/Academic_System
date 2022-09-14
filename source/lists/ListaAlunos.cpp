#include "../../include/lists/ListaAlunos.h"

ListaAlunos::ListaAlunos(int nd, const char* n) {
    numero_alunos = nd;
    cont_alunos = 0;

    pElAlunosAtual = NULL;
    pElAlunosPrim = NULL;

    strcpy(nome, n);
}

ListaAlunos::~ListaAlunos() {
    ElAluno *paux1, *paux2;

    paux1 = pElAlunosPrim;
    paux2 = paux1;

    while (paux1 != NULL)
    {
        paux2 = paux1->pProx;
        delete(paux1);
        paux1 = paux2;
    }

    pElAlunosAtual = NULL;
    pElAlunosPrim = NULL;
}

void ListaAlunos::setNome(const char* n) {
    strcpy(nome, n);
}

void ListaAlunos::incluaAluno(Aluno* pal) {
    if(((cont_alunos < numero_alunos) && (pal != NULL) || ((numero_alunos == -1) && (pal != NULL)))) {
        ElAluno *paux;
        paux = new ElAluno();
        paux->setAluno(pal);

        if(pElAlunosPrim == NULL) {
            pElAlunosPrim = paux;
            pElAlunosAtual = paux;
        }

        else {
            pElAlunosAtual->pProx = paux;
            paux->pAnte = pElAlunosAtual;
            pElAlunosAtual = paux;
        }
        cont_alunos++;
    }
    
    else {
        cout << "Aluno nao incluida!" << endl;
        cout << numero_alunos << " alunos já incluidos." << endl; 
    }
}

void ListaAlunos::listeAlunos() {
    ElAluno* paux;
    paux = pElAlunosPrim;

    while(paux != NULL) {
        cout << "Aluno: " << paux->getNome() << ", do departamento: " << nome << "." << endl;
        paux = paux->pProx;
    }
}

void ListaAlunos::listeAlunos2() {
    ElAluno* paux;
    paux = pElAlunosAtual;

    while(paux != NULL) {
        cout << "Aluno: " << paux->getNome() << ", do departamento: " << nome << "." << endl;
        paux = paux->pProx;
    }
}