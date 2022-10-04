#include "../../include/lists/ListaAlunos.h"

ListaAlunos::ListaAlunos(int nd, const char* n) {
    numero_alunos = nd;
    cont_alunos = 0;

    // pElAlunoAtual = NULL;
    // pElAlunoPrim = NULL;

    strcpy(nome, n);
}

ListaAlunos::~ListaAlunos() {
    // Elemento<Aluno> *paux1, *paux2;

    // paux1 = pElAlunoPrim;
    // paux2 = paux1;

    // while (paux1 != NULL)
    // {
    //     paux2 = paux1->getProximo();
    //     delete(paux1);
    //     paux1 = paux2;
    // }

    // pElAlunoAtual = NULL;
    // pElAlunoPrim = NULL;

    limpaLista();
}

void ListaAlunos::setNome(const char* n) {
    strcpy(nome, n);
}

void ListaAlunos::incluaAluno(Aluno* pal) {
    // if(((cont_alunos < numero_alunos) && (pal != NULL) || ((numero_alunos == -1) && (pal != NULL)))) {
    //     Elemento<Aluno> *paux;
    //     paux = new Elemento<Aluno>();
    //     paux->getInfo(); // Corrigir

    //     if(pElAlunoPrim == NULL) {
    //         pElAlunoPrim = paux;
    //         pElAlunoAtual = paux;
    //     }

    //     else {
    //         pElAlunoAtual->pProx = paux;
    //         paux->pAnte = pElAlunoAtual;
    //         pElAlunoAtual = paux;
    //     }
    //     cont_alunos++;
    // }
    
    // else {
    //     cout << "Aluno nao incluida!" << endl;
    //     cout << numero_alunos << " alunos já incluidos." << endl; 
    // }

    if(NULL != pal) {
        LTAlunos.incluaInfo(pal);
    }

    else {
        cout << "Erro! Aluno não incluído!" << endl;
        cout << "Ponteiro Aluno inválido" << endl;

    }
}

void ListaAlunos::graveAlunos() {
	ofstream GravacaoAlunos ("alunos.dat", std::ios::out);

	if (!GravacaoAlunos) {
		std::cerr << "Arquivo n�o pode ser aberto" << endl;
		fflush(stdin);
		getchar();
	}

    Elemento<Aluno>* pauxElAluno = NULL;
	Aluno * pauxAluno = NULL;

	pauxElAluno = LTAlunos.getpAtual();

    while (pauxElAluno != NULL)
    {
		          
		 pauxAluno = pauxElAluno->getInfo();

		 GravacaoAlunos << pauxAluno->getId() << ' ' 
						<< pauxAluno->getRA() << ' ' 
						<< pauxAluno->getNome() 
						<< endl;
         pauxElAluno = pauxElAluno->getProximo();
    } 

	GravacaoAlunos.close();
}

void ListaAlunos::recupereAlunos() {
	ifstream RecuperacaoAlunos("alunos.dat", std::ios::in);

	if (!RecuperacaoAlunos) {
		std::cerr << "Arquivo n�o pode ser aberto" << endl;
		fflush(stdin);
		getchar();
	}

	limpaLista();

	while (!RecuperacaoAlunos.eof()) {
		Aluno * pauxAluno;
         
		pauxAluno = new Aluno(-1);

		int id;
	   	int RA;
        char nome[150] ;

		RecuperacaoAlunos	>> id >> RA >> nome;

		if(0 != strcmp(nome, "")) {
			pauxAluno->setId(id);
			pauxAluno->setRA(RA);
			pauxAluno->setNome(nome);
		
			incluaAluno(pauxAluno);  
		}
    } 

	RecuperacaoAlunos.close();
}

void ListaAlunos::listeAlunos() {
    // ElAluno* paux;
    // paux = pElAlunoPrim;

    // while(paux != NULL) {
    //     cout << "Aluno: " << paux->getNome() << ", do departamento: " << nome << "." << endl;
    //     paux = paux->pProx;
    // }

    Elemento<Aluno>* pElAux = NULL;
    Aluno* pAlAux = NULL;
    pElAux = LTAlunos.getpPrimeiro();

    while(NULL != pElAux) {
        pAlAux = pElAux->getInfo();
        cout << "Aluno: " << pAlAux->getNome() << ", com RA: " << pAlAux->getRA() << "." << endl;
        pElAux = pElAux->getProximo();
    }
}

void ListaAlunos::listeAlunos2() {
    // ElAluno* paux;
    // paux = pElAlunoAtual;

    // while(paux != NULL) {
    //     cout << "Aluno: " << paux->getNome() << ", do departamento: " << nome << "." << endl;
    //     paux = paux->pProx;
    // }

    Elemento<Aluno>* pElAux = NULL;
    Aluno* pAlAux = NULL;
    pElAux = LTAlunos.getpAtual();

    while(NULL != pElAux) {
        pAlAux = pElAux->getInfo();
        cout << "Aluno: " << pAlAux->getNome() << ", com RA: " << pAlAux->getRA() << "." << endl;
        pElAux = pElAux->getAnterior();
    }
}

void ListaAlunos::limpaLista() {
//    ElAluno *paux1, *paux2;
   
//    paux1 = pElAlunoPrim;
//    paux2 = paux1;

//    while (paux1 != NULL)  {
// 		paux2 = paux1->pProx;
// 	    delete (paux1);
//         paux1 = paux2;		 
//    }

//    pElAlunoPrim  = NULL;
//    pElAlunoAtual = NULL;

    LTAlunos.limpar();
}