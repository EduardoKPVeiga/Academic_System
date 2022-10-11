#pragma once

#include "../Professor.h"
#include "Lista.h"
#include "../elements/Elemento.h"

#include <fstream>
using std::ofstream;
using std::ifstream;

class ListaProfessores {
private:
    Lista<Professor> LTProfessores;

public:
    ListaProfessores();
    ~ListaProfessores();

    void incluaProfessor(Professor* pPr, const char* n);

    void setNome(const char* n);
    char* getNome();

    void graveProfessores();
	void recupereProfessores();

    void listeProfessores();

    void limpaLista();
};