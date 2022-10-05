#pragma once

#include "../elements/ElAluno.h"
#include "../elements/Elemento.h"
#include "Lista.h"

#include <fstream>
using std::ofstream;
using std::ifstream;

class ListaAlunos {
private:
    int cont_alunos;
    int numero_alunos;
    // char nome[150];

    // Elemento<Aluno>* pElAlunoPrim;
    // Elemento<Aluno>* pElAlunoAtual;

    Lista<Aluno> LTAlunos;

public:
    ListaAlunos(int na = 40);
    ~ListaAlunos();

    // void setNome(const char* n);
    void incluaAluno(Aluno* pal);

    void graveAlunos();
	void recupereAlunos();

    void listeAlunos();
    void listeAlunos2();

    void limpaLista();
};
