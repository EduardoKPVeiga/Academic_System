#include "../../include/lists/ListaUniversidades.h"

ListaUniversidades::ListaUniversidades() {
}

ListaUniversidades::~ListaUniversidades() {
   limpaLista();
}

void ListaUniversidades::incluaUniversidade ( Universidade* pu ) {
    if(NULL != pu) {
        LTUniversidades.incluaInfo(pu);
    }

    else {
        cout << "Erro! Universidade nao incluida. Ponteiro Universidade invalido." << endl;
    }

}

void ListaUniversidades::listeUniversidades() {
    Elemento<Universidade>* pElAux = NULL;
    Universidade* pUnivAux = NULL;
    pElAux = LTUniversidades.getpPrimeiro();

    while(pElAux != NULL) {
        pUnivAux = pElAux->getInfo();
        cout << "Universidade: " << pUnivAux->getNome() << "." << endl;
        pElAux = pElAux->getProximo();
    }
}

void ListaUniversidades::listeUniversidades2() {
    Elemento<Universidade>* pElAux = NULL;
    Universidade* pUnivAux = NULL;
    pElAux = LTUniversidades.getpAtual();

    while(pElAux != NULL) {
        pUnivAux = pElAux->getInfo();
        cout << "Universidade: " << pUnivAux->getNome() << "." << endl;
        pElAux = pElAux->getAnterior();
    }

}

Universidade* ListaUniversidades::localizar(char* n) {
	// ElUniversidade* paux;
    // paux = pElUniversidadePrim;
    // while (paux != NULL)
    // {
	// 	if (0 == strcmp(n, paux->getNome()))
	// 	{
	// 		return paux->getUniversidade();
	// 	}
    //     paux = paux->pProx;
    // }
	// return NULL;

    Elemento<Universidade>* pElUnivAux = NULL;
    pElUnivAux = LTUniversidades.getpPrimeiro();
    while(pElUnivAux != NULL) {
        if(0 == strcmp(n, pElUnivAux->getInfo()->getNome())) {
            return pElUnivAux->getInfo();
        }

        pElUnivAux = pElUnivAux->getProximo();
    }

    return NULL;
}

void ListaUniversidades::graveUniversidades() {
    ofstream GravacaoUniversidades("Universidades.dat", ios::out);
    if(!GravacaoUniversidades) {
        cerr << "Arquivo nao pode ser aberto!" << endl;
        fflush(stdin);
        getchar();
    }

    Elemento<Universidade>* pElUnivAux = NULL;
    pElUnivAux = LTUniversidades.getpPrimeiro();

    while (pElUnivAux != NULL) {
        Universidade* pUnivAux = NULL;
        pUnivAux = pElUnivAux->getInfo();

        GravacaoUniversidades << pUnivAux->getId() << ' ' << pUnivAux->getNome() << endl;
        pElUnivAux = pElUnivAux->getProximo();
    }
    
    GravacaoUniversidades.close();
}

void ListaUniversidades::recupereUniversidades() {
    ifstream RecuperacaoUniversidades ("universidades.dat", ios::in);

	if (!RecuperacaoUniversidades)
	{
		cerr << "Arquivo nao pode ser aberto" << endl;
		fflush(stdin);
		getchar();
	}

	limpaLista();

	while (!RecuperacaoUniversidades.eof())
    {
		Universidade* pUnivAux;
         
		pUnivAux = new Universidade();

		int id;
        char nome[150] ;

		RecuperacaoUniversidades	>> id >> nome;

		if (0 != strcmp(nome, ""))
		{
			pUnivAux->setId(id);
			pUnivAux->setNome(nome);
		
			incluaUniversidade(pUnivAux);
		}
    } 

	RecuperacaoUniversidades.close();
}

void ListaUniversidades::limpaLista() {
    LTUniversidades.limpar();
}