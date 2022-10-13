#include "../include/Principal.h"

Principal::Principal() :
cont_idAluno(0),
cont_idDepart(0),
cont_idDisc(0),

Simao(),
Einstein(),
Newton()
{

  // Christiano.Inicializa(17, 8, 1989, "Zé Maria");
  // Diego.Inicializa(6, 10, 1989, "Diego");
  // Simao.Inicializa(3, 10, 1976, "Jean Simao");
  // Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
  // Newton.Inicializa(4, 1, 1643, "Isaac Newton");

  SYSTEMTIME st;
  GetSystemTime(&st);

  diaAtual = st.wDay;
  mesAtual = st.wMonth;
  anoAtual = st.wYear;

  // UTFPR.setNome("Universidade Tecnológica federal do Paraná");
  // Princeton.setNome("University of Princeton");
  // Cambridge.setNome("University of Cambridge");

  // ModaUTFPR.setNome ( "Moda" );
  // TecnologiaUTFPR.setNome ( "Tecnologia da UTFPR" );
  // DAELN.setNome ( "Eletronica da UTFPR" );
  // FisicaPrinceton.setNome ( "Fisica de Princenton" );
  // MatematicaCambridge.setNome ( "Matematica de Cambridge" );

  // UTFPR.setDepartamento ( &DAELN, 0 );
  // UTFPR.setDepartamento ( &ModaUTFPR, 1 );
  // UTFPR.setDepartamento ( &TecnologiaUTFPR, 2 );
  // Princeton.setDepartamento ( &FisicaPrinceton, 0 );
  // Cambridge.setDepartamento ( &MatematicaCambridge, 0 );

  //DAELN.setUniversidade ( &UTFPR );

  // Christiano.setUniversidade ( &UTFPR );
  // Diego.setUniversidade ( &UTFPR );
  // Simao.setUniversidade(&UTFPR);
  // Einstein.setUniversidade(&Princeton);
  // Newton.setUniversidade(&Cambridge);

  // Christiano.setDepartamento ( &ModaUTFPR);
  // Diego.setDepartamento ( &TecnologiaUTFPR);
  // Simao.setDepartamento ( &DAELN);
  // Einstein.setDepartamento ( &FisicaPrinceton );
  // Newton.setDepartamento ( &MatematicaCambridge );

  Inicializa();
}

Principal::~Principal() {}

void Principal::Inicializa ( ) {
  InicializaAlunos();
  InicializaUniversidades();
  InicializaDepartamentos();
  InicializaProfessores();
  InicializaDisciplinas();
}

void Principal::InicializaAlunos() {
  Pessoa* ponteiroPessoa = NULL;
  Aluno* ponteiroAluno = NULL;

	AAA.setNome	("AAA");
  LAlunos.incluaAluno(&AAA, AAA.getNome());
  ponteiroAluno = &AAA;
  ponteiroPessoa = static_cast<Pessoa*>(ponteiroAluno);
  LPessoas.incluaPessoa(ponteiroPessoa);

	BBB.setNome	("BBB");
  LAlunos.incluaAluno(&BBB, BBB.getNome());
  ponteiroAluno = &BBB;
  ponteiroPessoa = static_cast<Pessoa*>(ponteiroAluno);
  LPessoas.incluaPessoa(ponteiroPessoa);

	CCC.setNome	("CCC");
  LAlunos.incluaAluno(&CCC, CCC.getNome());
  ponteiroAluno = &CCC;
  ponteiroPessoa = static_cast<Pessoa*>(ponteiroAluno);
  LPessoas.incluaPessoa(ponteiroPessoa);

	DDD.setNome	("DDD");
  LAlunos.incluaAluno(&DDD, DDD.getNome());
  ponteiroAluno = &DDD;
  ponteiroPessoa = static_cast<Pessoa*>(ponteiroAluno);
  LPessoas.incluaPessoa(ponteiroPessoa);

	EEE.setNome	("EEE");
  LAlunos.incluaAluno(&EEE, EEE.getNome());
  ponteiroAluno = &EEE;
  ponteiroPessoa = static_cast<Pessoa*>(ponteiroAluno);
  LPessoas.incluaPessoa(ponteiroPessoa);
}

void Principal::InicializaUniversidades() {
  // Registro do(s) nome(s) da(s) universidade(s)
  UTFPR.setNome("UTFPR" );
  LUniversidades.incluaUniversidade( &UTFPR );

  Princeton.setNome("Princeton");
  LUniversidades.incluaUniversidade( &Princeton );

  Cambridge.setNome("Cambridge");
  LUniversidades.incluaUniversidade( &Cambridge );
}

void Principal::InicializaEstagiarios() {
  Pessoa* pPessoa;
  Aluno* pAluno;
  Estagiario* pEstagiario;

  Fulano.setNome("Fulano");
  Fulano.setBolsaEstudo(800);
  pEstagiario = &Fulano;

  pAluno = static_cast<Aluno*>(pEstagiario);
  LAlunos.incluaAluno(pAluno, pAluno->getNome());

  pPessoa = static_cast<Pessoa*>(pAluno);
  LPessoas.incluaPessoa(pAluno);

  Ciclano.setNome	("Ciclano");
	Ciclano.setBolsaEstudo(801);
	pEstagiario	= &Ciclano;

	pAluno  = static_cast<Aluno*>(pEstagiario);
	LAlunos.incluaAluno(pAluno, pAluno->getNome());

	pPessoa = static_cast<Pessoa*>(pAluno);
	LPessoas.incluaPessoa(pPessoa);
}

void Principal::InicializaDepartamentos ( ) {
  // Registro do(s) nome(s) do(s) departamento(s)
  EletronicaUTFPR.setNome("Eletronica UTFPR");
  MatematicaUTFPR.setNome("Matematica UTFPR");
  FisicaUTFPR.setNome("Fisica UTFPR");
  MatematicaPrinceton.setNome("Matematica Princeton");
  FisicaPrinceton.setNome("Fisica Pirnceton");
  MatematicaCambridge.setNome("Matematica Cambridge");
  FisicaCambridge.setNome("Fisica Cambridge");

  LDepartamentos.incluaDepto(&EletronicaUTFPR);
	LDepartamentos.incluaDepto(&MatematicaUTFPR);
	LDepartamentos.incluaDepto(&FisicaUTFPR);
	LDepartamentos.incluaDepto(&MatematicaPrinceton);
	LDepartamentos.incluaDepto(&FisicaPrinceton);
	LDepartamentos.incluaDepto(&MatematicaCambridge);
	LDepartamentos.incluaDepto(&FisicaCambridge);
     
  // "Agrega��o" do(s) Departamento(s) a(s) Universidade(s).
  UTFPR.setDepartamento(&EletronicaUTFPR);
  UTFPR.setDepartamento(&MatematicaUTFPR);
  UTFPR.setDepartamento(&FisicaUTFPR);

  Princeton.setDepartamento(&MatematicaPrinceton);
  Princeton.setDepartamento(&FisicaPrinceton);

  Cambridge.setDepartamento(&MatematicaCambridge);
  Cambridge.setDepartamento(&FisicaCambridge);

}

void Principal::InicializaProfessores() {
  Pessoa* pPessoa;
  Professor* pProfessor;

  // Inicialização do(s) ojeto(s) da classe Professor
  Simao.Inicializa(3, 10, 1976, "Jean Simão");
  Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
  Newton.Inicializa(4, 1, 1643, "Isaac Newton");

  Simao.setBolsaProjeto(1000);
  Simao.setSalario(4000);

  Einstein.setSalario(25000);

  Newton.setSalario(25000);

  // "Filiação" a universidade
  Simao.setUnivFiliado(&UTFPR);
  Einstein.setUnivFiliado(&Princeton);
  Newton.setUnivFiliado(&Cambridge);

  // "Filiação" ao departamento.
  Simao.setDepartamento(&EletronicaUTFPR);
  Einstein.setDepartamento(&FisicaPrinceton);
  Newton.setDepartamento(&MatematicaCambridge);

  pProfessor = &Simao;
  pPessoa = static_cast<Pessoa*>(pProfessor);
  LPessoas.incluaPessoa(pPessoa);

  pProfessor = &Einstein;
  pPessoa = static_cast<Pessoa*>(pProfessor);
  LPessoas.incluaPessoa(pPessoa);

  pProfessor = &Newton;
  pPessoa = static_cast<Pessoa*>(pProfessor);
  LPessoas.incluaPessoa(pPessoa);

  Simao.setDominio("Computação");
  Einstein.setDominio("Física");
  Newton.setDominio("Matemática-Física");
}

void Principal::InicializaDisciplinas() {
  Computacao1_2006.setNome("Computacao I 2006");
  Introd_Alg_2007.setNome("Intro de Algde Programacao 2007");
  Computacao2_2007.setNome("Computao II");
  Metodos2_2007.setNome("Métodos II");

  LDisciplinas.incluaDisciplina(&Computacao1_2006);
	LDisciplinas.incluaDisciplina(&Introd_Alg_2007);
	LDisciplinas.incluaDisciplina(&Computacao2_2007);
	LDisciplinas.incluaDisciplina(&Metodos2_2007);

  Computacao1_2006.setDepartamento(&EletronicaUTFPR);
  Introd_Alg_2007.setDepartamento(&EletronicaUTFPR);
  Computacao2_2007.setDepartamento(&EletronicaUTFPR);
  Metodos2_2007.setDepartamento(&EletronicaUTFPR);

  Metodos2_2007.setAluno(&AAA);
  Metodos2_2007.setAluno(&BBB);
  Metodos2_2007.setAluno(&CCC);
  Metodos2_2007.setAluno(&DDD);
  Metodos2_2007.setAluno(&EEE);

	Computacao2_2007.setAluno(&AAA);
  Computacao2_2007.setAluno(&EEE);
  Computacao2_2007.setAluno(&DDD);
}

void Principal::CalcIdadeProfs() {
  // Cálculo da idade.
  Simao.Calc_Idade ( diaAtual, mesAtual, anoAtual );
  Einstein.Calc_Idade ( diaAtual, mesAtual, anoAtual );
  Newton.Calc_Idade ( diaAtual, mesAtual, anoAtual );
  printf ("\n");
}

void Principal::UnivOndeProfsTrabalham ( ) {
  // Universidade que a Pessoa trabalha.
  Simao.OndeTrabalha();
  Einstein.OndeTrabalha();
  Newton.OndeTrabalha();
  printf ("\n");
}

void Principal::DepOndeProfsTrabalham() {
  // Departamento que a Pessoa trabalha.
  Simao.QualDepartamentoTrabalha();
  Einstein.QualDepartamentoTrabalha();
  Newton.QualDepartamentoTrabalha();
  printf ( "\n" );
}

void Principal::ListeDiscDeptos() {
  MatematicaUTFPR.listeDisciplinas();
  printf ("\n");
}

void Principal::ListeAlunosDisc() {
  Metodos2_2007.listeAlunos();
  cout << endl;

  Computacao2_2007.listeAlunos();  
  cout << endl;

	//Metodos2_2007.listeAlunos2();
    //cout << endl;
}

// void Principal::ListeDepPorUniv() {
//   printf ("\n");
// }

void Principal::ListeProventosPessoas() {
  LPessoas. listaProventos();
}

void Principal::ConhecProfs() {
  cout << "Simão: " << Simao.getDominio() << endl;
  cout << "Einstein: " << Einstein.getDominio() << endl;
  cout << "Newton: " << Newton.getDominio() << endl << endl;
}

void Principal::Executar() {
  // CalcIdadeProfs();
  // UnivOndeProfsTrabalham();
  // DepOndeProfsTrabalham();
  // ListeDepPorUniv();
  // Metodos2.listeAlunos();
  // ListeDiscDeptos();
  Menu();
}

void Principal::CadDisciplina() {

}

void Principal::CadDepartamento() {
  char nomeUniversidade[150];
	char nomeDepartamento[150];
	Universidade* univ;
	Departamento* depart;

	cout << "Qual o nome da universidade do departamento" << endl;
	cin  >> nomeUniversidade;

	univ = LUniversidades.localizar(nomeUniversidade);
	
	if(univ != NULL) {
		cout << "Qual o nome do departamento" << endl;
		cin >> nomeDepartamento;
    depart = new Departamento();
		depart->setNome(nomeDepartamento);
		LDepartamentos.incluaDepto(depart);
		LUniversidades.incluaUniversidade(univ);
	}

	else {
		cout << "Universidade inexistente." << endl;
	}
}

void Principal::CadUniversidade() {
  char nomeUniversidade[150];
	Universidade* univ;

	cout << "Qual o nome da universidade" << endl;
	cin  >> nomeUniversidade;

  univ = new Universidade();
	univ->setNome(nomeUniversidade);

	LUniversidades.incluaUniversidade(univ);
}

void Principal::CadAluno() {
  char nomeAluno[150];
	int ra;
	Aluno* pAluno;
  Pessoa* pPessoa;

	cout << "Qual o nome do aluno. " << endl;
	cin  >> nomeAluno;

	cout << "Qual o RA do aluno."	<< endl;
	cin  >> ra;

  pAluno = new Aluno(cont_idAluno++);
	pAluno->setNome(nomeAluno);
	pAluno->setRA(ra);

	LAlunos.incluaAluno(pAluno, pAluno->getNome());

  pPessoa = static_cast<Pessoa*>(pAluno);
  LPessoas.incluaPessoa(pPessoa);
}

void Principal::GravarTudo() {
  GravarAlunos();
  GravarDepartamentos();
  GravarDisciplinas();
  GravarProfessores();
  GravarUniversidades();
}

void Principal::GravarUniversidades() {
  LUniversidades.graveUniversidades();
}

void Principal::GravarDepartamentos() {
  LDepartamentos.graveDepartamentos();
}

void Principal::GravarDisciplinas() {
  LDisciplinas.graveDisciplinas();
}

void Principal::GravarAlunos() {
	LAlunos.graveAlunos();
}

void Principal::GravarProfessores() {}

void Principal::RecuperarTudo() {
  RecuperarAlunos();
  RecuperarDepartamentos();
  RecuperarDisciplinas();
  RecuperarProfessores();
  RecuperarUniversidades();
}

void Principal::RecuperarUniversidades() {
  LUniversidades.recupereUniversidades();
}

void Principal::RecuperarDepartamentos() {
  LDepartamentos.recupereDepartamentos();
}

void Principal::RecuperarDisciplinas() {
  LDisciplinas.recupereDisciplinas();
}

void Principal::RecuperarAlunos() {
	LAlunos.recupereAlunos();
}

void Principal::RecuperarProfessores() {}

void Principal::MenuCad() {
  int op = -1;

  while(op != 4) {
    system("cls");
    cout << "  Informe sua opcao:    "			<< endl;
    cout << "  1 - Cadastrar Disciplina.  "		<< endl;
    cout << "  2 - Cadastrar Departamentos. "	<< endl;
    cout << "  3 - Cadastrar Universidade. "	<< endl;
    cout << "  4 - Sair. "						<< endl;
    cin >> op;

    switch(op) {
      case 1 :{ CadDisciplina ();	 }
      break;

      case 2: { CadDepartamento(); }
      break;

      case 3:	{ CadUniversidade(); }
      break;

      case 4:	{ cout << " FIM " << endl; }
      break;

      default:{                      
        cout << "Opcao Invalida - Pressione uma tecla." << endl;
        getchar();
      }
    }
  }
}

void Principal::MenuExe() {
  int op = -1;

  while(op != 7) {
		system("cls");
    cout << "  Informe sua opcao:"	<< endl;
    cout << "  1 - Listar Disciplinas."	<< endl;
    cout << "  2 - Listar Departamentos."	<< endl;
    cout << "  3 - Listar Universidade."	<< endl;
    cout << "  4 - Listar Alunos." << endl;
    cout << "  5 - Listar Professores." << endl;
    cout << "  6 - Listar Pessoas." << endl;
    cout << "  7 - Listar Proventos." << endl;
    cout << "  8 - Sair." << endl;
    cin >> op;

    switch(op) {
			case 1:  { 
        // LDisciplinas.listeDisciplinas();
        // fflush(stdin);
        // getchar();

        LDisciplinas.listeDisciplinas();
        system("Pause");
      }
      break;

			case 2:  { 
        LDepartamentos.listeDepto();
        system("Pause");
      }
      break;

			case 3:  { 
        LUniversidades.listeUniversidades(); 
        system("Pause");
      }
      break;

      case 4:  {
        LAlunos.listeAlunos();
        system("Pause");
      }
      break;

      case 5:  {
        DepOndeProfsTrabalham();
        system("Pause");
      }
      break;

      case 6:  {
        LPessoas.listePessoas();
        system("Pause");
      }
      break;

      case 7:  {
        ListeProventosPessoas();
        system("Pause");
      }
      break;

      case 8: {
        cout << "FIM." << endl;
      }
      break;

      default: { 
        cout << "Opcao Invalida! Pressione uma tecla." << endl;
        getchar(); 
      }
    }
  }
}

void Principal::MenuGravar() {
	int op = -1; 
  while (op != 6) {
		system("cls");
    cout << "  Informe sua op��o:			"	<< endl;
		cout << "  0 - Gravar Tudo.				"	<< endl;
    cout << "  1 - Gravar Universidades.	"	<< endl;
    cout << "  2 - Gravar Departamentos.	"	<< endl;
		cout << "  3 - Gravar Disciplinas.		"	<< endl;
		cout << "  4 - Gravar Alunos.			"	<< endl;
		cout << "  5 - Gravar Professores.		"	<< endl;
    cout << "  6 � Sair.					"	<< endl;
    cin >> op;

    switch (op) {
			case 0: {	GravarTudo(); }
        break;

      case 1: {	GravarUniversidades(); }
        break;

      case 2: {	GravarDepartamentos(); }
				break;

			case 3: {	GravarDisciplinas(); }
				break;

			case 4: {	GravarAlunos(); }
        break;

			case 5: {	GravarProfessores(); }
				break;

			case 6: {	cout << " FIM " << endl; }
        break;

      default: {
        cout << "Op��o Inv�lida - Pressione uma tecla." << endl;
        getchar(); 
      }
    }
  }	
}

void Principal::MenuRecuperar() {
	int op = -1;
    
  while (op != 6) {
		system("cls");

    cout << "  Informe sua op��o:			"	<< endl;
		cout << "  0 - Recuperar Tudo.			"	<< endl;
    cout << "  1 - Recuperar Universidades.	"	<< endl;
    cout << "  2 - Recuperar Departamentos.	"	<< endl;
		cout << "  3 - Recuperar Disciplinas.	"	<< endl;
		cout << "  4 - Recuperar Alunos.		"	<< endl;
		cout << "  5 - Recuperar Professores.	"	<< endl;
    cout << "  6 � Sair.					"	<< endl;
    cin >> op;

    switch (op) {
			case 0: {	RecuperarTudo(); }
        break;

      case 1: {	RecuperarUniversidades(); }
        break;

      case 2: {	RecuperarDepartamentos(); }
				break;

			case 3: {	RecuperarDisciplinas(); }
				break;

			case 4: {	RecuperarAlunos(); }
				break;

			case 5: {	RecuperarProfessores(); }
				break;

			case 6: {	cout << " FIM " << endl; }
        break;

      default: {
        cout << "Op��o Inv�lida - Pressione uma tecla." << endl;
        getchar();
      }
    }
  }	
}

void Principal::Menu() {
	int op = -1;
    
  while(op != 3) {
    system("cls");
    cout << "  Informe sua op��o:"	<< endl;
    cout << "  1 - Cadastrar.	 "	<< endl;
    cout << "  2 - Executar.	 "	<< endl;
    cout << "  3 � Sair.		 "	<< endl;
    cin >> op;

    switch(op) {
      case 1: { MenuCad(); }
      break;

      case 2: { MenuExe(); }
      break;

			case 3: { cout << " FIM " << endl; }
      break;

      default: {
        cout << "Op��o Inv�lida - Pressione uma tecla." << endl;
        getchar();
      }
    }
  }	
}