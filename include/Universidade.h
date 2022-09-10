#pragma once
#include <string.h>
#include <iostream>
#include "Departamento.h"

using std::cout;
using std::endl;

class Universidade {
private:
  char nome[130];
  int indice;
  Departamento* pDptos[50];

public:
  Universidade(const char *n = "");
  ~Universidade();

  void setNome(const char *n);
  char *getNome();

  void setDepartamento(Departamento* pdep, int ctd);
  void imprimeDptos();
};