#pragma once
#include "Professor.h"
#include "Estagiario.h"
#include "lists/ListaDepartamentos.h"
#include "lists/ListaDisciplinas.h"
#include "lists/ListaUniversidades.h"
#include "lists/ListaAlunos.h"
#include "lists/ListaPessoas.h"
#include "lists/Lista.h"
#include "elements/Elemento.h"
#include <time.h>
#include <windows.h>

class Principal {
private:

  int cont_idDisc;
  int cont_idDepart;
  int cont_idAluno;

  Universidade UTFPR, Princeton, Cambridge;

  Pessoa Christiano, Diego;

  Departamento MatematicaUTFPR, FisicaUTFPR, TecnologiaUTFPR, EletronicaUTFPR, FisicaPrinceton, MatematicaPrinceton, FisicaCambridge, MatematicaCambridge;

  Professor Simao, Einstein, Newton;

  Disciplina Computacao1_2006, Introd_Alg_2007, Computacao2_2007, Metodos2_2007;

  Aluno AAA, BBB, CCC, DDD, EEE;

  Estagiario Fulano, Ciclano;

  ListaUniversidades LUniversidades;
  ListaDepartamentos LDepartamentos;
  ListaDisciplinas LDisciplinas;
  ListaAlunos LAlunos;
  ListaPessoas LPessoas;

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
  void InicializaEstagiarios();
  void InicializaDisciplinas();

  void Executar();

  void CalcIdadeProfs();
  void UnivOndeProfsTrabalham();
  void DepOndeProfsTrabalham();
  void ListeDiscDeptos();
  void ListeAlunosDisc();
  void ListeProventosPessoas();
  void ConhecProfs();
  //void ListeDepPorUniv();

  void CadDisciplina();
	void CadDepartamento();
	void CadUniversidade();
  void CadAluno();

	void GravarTudo();
	void GravarUniversidades();
	void GravarDepartamentos();
	void GravarDisciplinas();
	void GravarAlunos();
	void GravarProfessores();

	void RecuperarTudo();
	void RecuperarUniversidades();
	void RecuperarDepartamentos();
	void RecuperarDisciplinas();
	void RecuperarAlunos();
	void RecuperarProfessores();

	void MenuCad();
	void MenuExe();
  void MenuGravar();
  void MenuRecuperar();
  void Menu();
};