#include "../../include/lists/ListaProfessores.h"

ListaProfessores::ListaProfessores() {}

ListaProfessores::~ListaProfessores() {
    limpaLista();
}

void ListaProfessores::incluaProfessor(Professor* pPr, const char* n) {
    if(NULL != pPr) {
        LTProfessores.incluaInfo(pPr);
    }

    else {
        cout << "Erro! Professor nao incluido!" << endl;
        cout << "Ponteiro Professor invalido" << endl;
    }
}

void ListaProfessores::setNome(const char* n) {
    LTProfessores.setNome(n);
}

char* ListaProfessores::getNome() {
    return LTProfessores.getNome();
}

void ListaProfessores::graveProfessores() {
    ofstream GravacaoProfessores ("professores.dat", std::ios::out);

	if (!GravacaoProfessores) {
		std::cerr << "Arquivo nao pode ser aberto" << endl;
		fflush(stdin);
		getchar();
	}

    Elemento<Professor>* pauxElProfessor = NULL;
	Professor* pauxProfessor = NULL;

	pauxElProfessor = LTProfessores.getpAtual();

    while (pauxElProfessor != NULL)
    {
		          
		 pauxProfessor = pauxElProfessor->getInfo();

		 GravacaoProfessores << pauxProfessor->getId() << ' ' << pauxProfessor->getNome() << endl;
         pauxElProfessor = pauxElProfessor->getProximo();
    } 

	GravacaoProfessores.close();
}

void ListaProfessores::recupereProfessores() {}