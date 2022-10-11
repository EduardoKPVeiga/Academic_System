#include "../../include/lists/ListaAlunos.h"

ListaAlunos::ListaAlunos() {
    // numero_alunos = nd;
    // cont_alunos = 0;
}

ListaAlunos::~ListaAlunos() {
    limpaLista();
}

void ListaAlunos::incluaAluno(Aluno* pal, const char* n) {
    if(NULL != pal) {
        LTAlunos.incluaInfo(pal);
    }

    else {
        cout << "Erro! Aluno não incluído!" << endl;
        cout << "Ponteiro Aluno inválido" << endl;
    }
}

void ListaAlunos::setNome(const char* n) {
    LTAlunos.setNome(n);
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

		 GravacaoAlunos << pauxAluno->getId() << ' ' << pauxAluno->getRA() << ' ' << pauxAluno->getNome() << endl;
         pauxElAluno = pauxElAluno->getProximo();
    } 

	GravacaoAlunos.close();
}

void ListaAlunos::recupereAlunos() {
	ifstream RecuperacaoAlunos("alunos.dat", std::ios::in);

	if (!RecuperacaoAlunos) {
		std::cerr << "Arquivo nao pode ser aberto" << endl;
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
		
			incluaAluno(pauxAluno, nome);  
		}
    } 

	RecuperacaoAlunos.close();
}

void ListaAlunos::listeAlunos() {
    Elemento<Aluno>* pElAux = NULL;
    Aluno* pAlAux = NULL;
    pElAux = LTAlunos.getpPrimeiro();

    while(NULL != pElAux) {
        pAlAux = pElAux->getInfo();
        cout << "Aluno: " << pAlAux->getNome() << ", com RA: " << pAlAux->getRA() << "." << endl;
        pElAux = pElAux->getProximo();
    }
}

void ListaAlunos::limpaLista() {
    LTAlunos.limpar();
}