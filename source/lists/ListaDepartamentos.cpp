#include "../../include/lists/ListaDepartamentos.h"

ListaDepartamentos::ListaDepartamentos(int nd, const char* n) {
    numero_depto = nd;
    cont_depto = 0;

    pElDepartamentoPrim = NULL;
    pElDepartamentoAtual = NULL;

	strcpy (nome, n );
}
ListaDepartamentos::~ListaDepartamentos() {
       ElDepartamento *paux1, *paux2;
   
   paux1 = pElDepartamentoPrim;
   paux2 = paux1;

   while (paux1 != NULL)
   {
	     paux2 = paux1->pProx;
	     delete (paux1);
         paux1 = paux2;		 
   }

   pElDepartamentoPrim  = NULL;
   pElDepartamentoAtual = NULL;
}

void ListaDepartamentos::setNome(const char* n) {
    strcpy(nome, n);
}

void ListaDepartamentos::incluaDepto(Departamento* pde) {
        // Aqui � criado um ponteiro para LAluno
    ElDepartamento* paux;
    // Aqui � criado um objeto LAluno, sendo seu endere�o armazenado em aux
    paux = new ElDepartamento ( );

    // Aqui recebe uma c�pia do objeto interm.
    paux->setDepartamento ( pde );

    paux->pProx = NULL;
    paux->pAnte = NULL;

    if(((cont_depto < numero_depto) && (pde != NULL)) || ((numero_depto== -1)		 && (pde != NULL))) {
      if(pElDepartamentoPrim == NULL) {
         pElDepartamentoPrim   = paux;
         pElDepartamentoAtual  = paux;
      }

      else {
         pElDepartamentoAtual->pProx = paux;
         paux->pAnte            = pElDepartamentoAtual;
         pElDepartamentoAtual   = paux;
      }
      cont_depto++;

    }

    else {
	   cout << "Departamento nao incluido. Quantia de deps ja lotada em " << numero_depto << " departamentos." << endl;
    }
}

void ListaDepartamentos::graveDepartamentos() {
    ofstream GravacaoDepartamentos ("departamentos.dat", ios::out);

	if (!GravacaoDepartamentos) {
		cerr << "Arquivo n�o pode ser aberto" << endl;
		fflush(stdin);
		getchar();
	}

    ElDepartamento* pauxElDepartamento = NULL;
	Departamento * pauxDepartamento = NULL;

	pauxElDepartamento = pElDepartamentoPrim;

    while (pauxElDepartamento != NULL)
    {
		          
		 pauxDepartamento = pauxElDepartamento->getDepartamento();

		 GravacaoDepartamentos << pauxDepartamento->getId() << ' ' 
						<< pauxDepartamento->getNome() 
						<< endl;
         pauxElDepartamento = pauxElDepartamento->pProx;
    } 

	GravacaoDepartamentos.close();
}

void ListaDepartamentos::recupereDepartamentos() {
    ifstream RecuperacaoDepartamentos("departamentos.dat", ios::in);

	if (!RecuperacaoDepartamentos) {
		cerr << "Arquivo n�o pode ser aberto" << endl;
		fflush(stdin);
		getchar();
	}

    limpaLista();

	while (!RecuperacaoDepartamentos.eof()) {
		Departamento* pauxDepartamento;
         
		pauxDepartamento = new Departamento();

		int id;
        char nome[150] ;

		RecuperacaoDepartamentos	>> id >> nome;

		if(0 != strcmp(nome, "")) {
			pauxDepartamento->setId(id);
			pauxDepartamento->setNome(nome);
		
			incluaDepto(pauxDepartamento);  
		}
    } 

	RecuperacaoDepartamentos.close();
}

void ListaDepartamentos::listeDepto() {
    ElDepartamento* paux;
    paux = pElDepartamentoPrim;

    while (paux != NULL) {
        cout << " Departamento " << paux->getNome() << " da universidade " << nome << "." << endl;
        paux = paux->pProx;
    }
}

void ListaDepartamentos::listeDepto2() {
    ElDepartamento* paux;
    paux = pElDepartamentoAtual;

    while(paux != NULL) {
        cout << " Departamento " << paux->getNome() << " da Universidade" << nome << "." << endl;
        paux = paux->pAnte;
    }
}