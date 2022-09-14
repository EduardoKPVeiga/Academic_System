#pragma once
#include <string.h>
#include <iostream>
#include "lists/ListaDepartamentos.h"

using std::cout;
using std::endl;

class Universidade {
private:
  char nome[130];
  ListaDepartamentos ObjLDepartamentos;

  // int indice;
  // Departamento* pDptos[50];

public:
  Universidade(const char *n = "");
  ~Universidade();

  void setNome(const char *n);
  char *getNome();

  void setDepartamento(Departamento* pdep, int ctd);
  void listeDepartamentos();
  void listeDepartamentos2();

  // void imprimeDptos();
};