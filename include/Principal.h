#pragma once
#include "Pessoa.h"
#include "Departamento.h"
#include "Professor.h"
#include <time.h>
#include <windows.h>

class Principal {
private:
  Pessoa Christiano, Diego;

  Professor Simao, Einstein, Newton;

  Universidade UTFPR, Princeton, Cambridge;

  Departamento ModaUTFPR, TecnologiaUTFPR, DAELN, FisicaPrinceton, MatematicaCambridge;

  int diaAtual;
  int mesAtual;
  int anoAtual;

public:
  Principal();
  ~Principal();
  void Executar();
};