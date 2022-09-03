#include "../include/Principal.h"

Principal::Principal() :
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
  Executar();
}

Principal::~Principal() {}

void Principal::Inicializa ( ) {
  InicializaUniversidades();
  InicializaDepartamentos();
  InicializaProfessores();
  InicializaDisciplinas();
}

void Principal::InicializaDepartamentos ( ) {
  // Registro do(s) nome(s) do(s) departamento(s)
  DAELN.setNome("Eletronica UTFPR");
  MatematicaUTFPR.setNome("Matematica UTFPR");
  FisicaUTFPR.setNome("Fisica UTFPR");
  MatematicaPrinceton.setNome("Matematica Princeton");
  FisicaPrinceton.setNome("Fisica Pirnceton");
  MatematicaCambridge.setNome("Matematica Cambridge");
  FisicaCambridge.setNome("Fisica Cambridge");
}

void Principal::InicializaUniversidades() {
  // Registro do(s) nome(s) da(s) universidade(s)
  UTFPR.setNome("UTFPR" );
  Princeton.setNome("Princeton");
  Cambridge.setNome("Cambridge");
}

void Principal::InicializaProfessores() {
  // Inicialização do(s) ojeto(s) da classe Professor
  Simao.Inicializa(3, 10, 1976, "Jean Simão");
  Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
  Newton.Inicializa(4, 1, 1643, "Isaac Newton");

  // "Filiação" a universidade
  Simao.setUnivFiliado(&UTFPR);
  Einstein.setUnivFiliado(&Princeton);
  Newton.setUnivFiliado(&Cambridge);

  // "Filiação" ao departamento.
  Simao.setDepartamento(&DAELN);
  Einstein.setDepartamento(&FisicaPrinceton);
  Newton.setDepartamento(&MatematicaCambridge);
}

void Principal::InicializaDisciplinas() {
  Computacao1_2006.setNome("Computacao I 2006");
  Introd_Alg_2007.setNome("Intro de Algde Programacao 2007");
  Computacao2_2007.setNome("Computao II");
  Metodos2_2007.setNome("Métodos II");

  Computacao1_2006.setDepartamento(&DAELN);
  Introd_Alg_2007.setDepartamento(&DAELN);
  Computacao2_2007.setDepartamento(&DAELN);
  Metodos2_2007.setDepartamento(&DAELN);
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

// void Principal::ListeDepPorUniv() {
//   printf ("\n");
// }

void Principal::Executar() {
  CalcIdadeProfs();
  UnivOndeProfsTrabalham();
  DepOndeProfsTrabalham();
  //ListeDepPorUniv();
  // Metodos2.listeAlunos();
  ListeDiscDeptos();
}