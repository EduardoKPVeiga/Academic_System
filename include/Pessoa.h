#pragma once
#include "Universidade.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;

class Pessoa {
protected:
  int diaP, mesP, anoP, idadeP, id;
  char nomeP[30];
  Universidade *pUnivFiliado;
  Departamento* pDptoFiliado;

public:
  Pessoa(int diaNa, int mesNa, int anoNa, char *nome = "");
  Pessoa();
  ~Pessoa();
  void Inicializa(int diaNa, int mesNa, int anoNa, char *nome = "");

/* ----- Idade ----- */
  void Calc_Idade(int diaAT, int mesAT, int anoAT);
  void Imprime_Idade();
  void Calc_Imprime_Idade(int diaAT, int mesAT, int anoAT);
  int informaIdade();

/* ----- Gets and Sets -----*/
  void setId(int i){id = i;}
  int getId(){return id;}
  void setNome(char* n){strcpy(nomeP, n);}
  char* getNome(){return nomeP;}

};
