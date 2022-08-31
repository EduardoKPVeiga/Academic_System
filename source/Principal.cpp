#include "../include/Principal.h"

Principal::Principal() :
Simao(),
Einstein(),
Newton()
{
  Christiano.Inicializa(17, 8, 1989, "Zé Maria");
  Diego.Inicializa(6, 10, 1989, "Diego");
  Simao.Inicializa(3, 10, 1976, "Jean Simao");
  Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
  Newton.Inicializa(4, 1, 1643, "Isaac Newton");

  SYSTEMTIME st;
  GetSystemTime(&st);

  diaAtual = st.wDay;
  mesAtual = st.wMonth;
  anoAtual = st.wYear;

  UTFPR.setNome("Universidade Tecnológica federal do Paraná");
  Princeton.setNome("University of Princeton");
  Cambridge.setNome("University of Cambridge");

  ModaUTFPR.setNome ( "Moda" );
  TecnologiaUTFPR.setNome ( "Tecnologia da UTFPR" );
  DAELN.setNome ( "Eletronica da UTFPR" );
  FisicaPrinceton.setNome ( "Fisica de Princenton" );
  MatematicaCambridge.setNome ( "Matematica de Cambridge" );

  UTFPR.setDepartamento ( &DAELN, 0 );
  UTFPR.setDepartamento ( &ModaUTFPR, 1 );
  UTFPR.setDepartamento ( &TecnologiaUTFPR, 2 );
  Princeton.setDepartamento ( &FisicaPrinceton, 0 );
  Cambridge.setDepartamento ( &MatematicaCambridge, 0 );

  //DAELN.setUniversidade ( &UTFPR );

  Christiano.setUniversidade ( &UTFPR );
  Diego.setUniversidade ( &UTFPR );
  Simao.setUniversidade(&UTFPR);
  Einstein.setUniversidade(&Princeton);
  Newton.setUniversidade(&Cambridge);

  Christiano.setDepartamento ( &ModaUTFPR);
  Diego.setDepartamento ( &TecnologiaUTFPR);
  Simao.setDepartamento ( &DAELN);
  Einstein.setDepartamento ( &FisicaPrinceton );
  Newton.setDepartamento ( &MatematicaCambridge );

  Executar();
}

Principal::~Principal() {}

void Principal::Executar() {
  Simao.Calc_Imprime_Idade(diaAtual, mesAtual, anoAtual);
  Einstein.Calc_Imprime_Idade(diaAtual, mesAtual, anoAtual);
  Newton.Calc_Imprime_Idade(diaAtual, mesAtual, anoAtual);

  Simao.OndeTrabalha();
  Einstein.OndeTrabalha();
  Newton.OndeTrabalha();
}