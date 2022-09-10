#pragma once
#include "Professor.h"
#include "Universidade.h"
#include "Aluno.h"
#include "Disciplina.h"
#include <time.h>
#include <windows.h>

class Principal {
private:
  Pessoa Christiano, Diego;

  Professor Simao, Einstein, Newton;

  Universidade UTFPR, Princeton, Cambridge;

  Departamento MatematicaUTFPR, FisicaUTFPR, TecnologiaUTFPR, DAELN, FisicaPrinceton, MatematicaPrinceton, FisicaCambridge, MatematicaCambridge;

  Disciplina Computacao1_2006, Introd_Alg_2007, Computacao2_2007, Metodos2_2007;

  Aluno AAA, BBB, CCC, DDD, EEE;

  int diaAtual;
  int mesAtual;
  int anoAtual;

public:
  Principal();
  ~Principal();

// Inicializacoes
  void Inicializa();
  void InicializaUniversidades();
  void InicializaDepartamentos();
  void InicializaProfessores();
  void InicializaAlunos();
  void InicializaDisciplinas();

  void CalcIdadeProfs();
  void UnivOndeProfsTrabalham();
  void DepOndeProfsTrabalham();
  void ListeDiscDeptos();
  //void ListeDepPorUniv();

  void Executar();
};