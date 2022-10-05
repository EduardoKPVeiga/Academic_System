#pragma once
#include <string.h>
#include <iostream>
#include "lists/ListaDepartamentos.h"

using std::cout;
using std::endl;

class Universidade {
private:
  int id;
  char nome[130];
  ListaDepartamentos ObjLDepartamentos;

  // int indice;
  // Departamento* pDptos[50];

public:
  Universidade(const char *n = "");
  ~Universidade();

  void setNome(const char *n);
  char *getNome();

  void setId(int i);
  int getId();

  void setDepartamento(Departamento* pdep);
  void listeDepartamentos();
  void listeDepartamentos2();

  // void imprimeDptos();
};