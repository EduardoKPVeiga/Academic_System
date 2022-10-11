#pragma once

#include "../Aluno.h"
#include "../elements/Elemento.h"
#include "Lista.h"

#include <fstream>
using std::ofstream;
using std::ifstream;

class ListaAlunos {
private:
    // int cont_alunos;
    // int numero_alunos;

    Lista<Aluno> LTAlunos;

public:
    ListaAlunos();
    ~ListaAlunos();

    void incluaAluno(Aluno* pal, const char* n);

    void setNome(const char* n);
    char* getNome();

    void graveAlunos();
	void recupereAlunos();

    void listeAlunos();

    void limpaLista();
};
