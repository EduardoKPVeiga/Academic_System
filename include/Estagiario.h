#pragma once

#include "Aluno.h"

class Estagiario : public Aluno {
private:

protected:
  float BolsaEstudo;

public:
  Estagiario (int diaNa, int mesNa, int anoNa, const char* nome = "");
  Estagiario();
  ~Estagiario();

  void inicializa();

  void setBolsaEstudo(float b);
  float getBolsaEstudo();

  void informaProventos();
};