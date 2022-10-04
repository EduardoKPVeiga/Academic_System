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

void ListaDisciplinas::graveDisciplinas() {
	ofstream GravacaoDisciplinas ("disciplinas.dat", ios::out);

	if (!GravacaoDisciplinas) {
		cerr << "Arquivo n�o pode ser aberto" << endl;
		fflush(stdin);
		getchar();
	}

    ElDisciplina* pauxElDisciplina = NULL;
	Disciplina * pauxDisciplina = NULL;

	pauxElDisciplina = pElDisciplinaPrim;

    while (pauxElDisciplina != NULL)
    {
		          
		 pauxDisciplina = pauxElDisciplina->getDisciplina();

		 GravacaoDisciplinas << pauxDisciplina->getId() << ' ' 
						<< pauxDisciplina->getNome() 
						<< endl;
         pauxElDisciplina = pauxElDisciplina->pProx;
    } 

	GravacaoDisciplinas.close();
}

void ListaDisciplinas::recupereDisciplinas() {
	ifstream RecuperacaoDisciplinas("disciplinas.dat", ios::in);

	if (!RecuperacaoDisciplinas) {
		cerr << "Arquivo n�o pode ser aberto" << endl;
		fflush(stdin);
		getchar();
	}

    limpaLista();

	while (!RecuperacaoDisciplinas.eof()) {
		Disciplina* pauxDisciplina;
         
		pauxDisciplina = new Disciplina();

		int id;
        char nome[150] ;

		RecuperacaoDisciplinas	>> id >> nome;

		if(0 != strcmp(nome, "")) {
			pauxDisciplina->setId(id);
			pauxDisciplina->setNome(nome);
		
			incluaDisciplina(pauxDisciplina);  
		}
    } 

	RecuperacaoDisciplinas.close();
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

void ListaDisciplinas::limpaLista() {
   ElDisciplina *paux1, *paux2;
   
   paux1 = pElDisciplinaPrim;
   paux2 = paux1;

   while (paux1 != NULL)  {
		paux2 = paux1->pProx;
	    delete (paux1);
        paux1 = paux2;		 
   }

   pElDisciplinaPrim  = NULL;
   pElDisciplinaAtual = NULL;
}