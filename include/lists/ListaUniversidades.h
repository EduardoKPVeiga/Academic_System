#pragma once

#include "../Universidade.h"
#include "../elements/Elemento.h"
#include "Lista.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::ios;
using std::cerr;

#include <fstream>
using std::ofstream;
using std::ifstream;

class ListaUniversidades {
private:
	Lista<Universidade> LTUniversidades;

	// int  cont_univ;
	// int  numero_univ;
	// char nome[150];

	// ElUniversidade *pElUniversidadePrim;
    // ElUniversidade *pElUniversidadeAtual;
public:

	ListaUniversidades();
	~ListaUniversidades();

	void incluaUniversidade(Universidade* pu);

    void listeUniversidades();
    void listeUniversidades2();

	Universidade* localizar(char* n);

	void graveUniversidades();
	void recupereUniversidades();

	void limpaLista();
};

