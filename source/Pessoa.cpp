#include "../include/Pessoa.h"

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char *nome) {
  Inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa(int id) {
  Inicializa(0, 0, 0);
}

Pessoa::Pessoa() {
  Inicializa(0, 0, 0);
}

Pessoa::~Pessoa() {}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, const char *nome) {
  idadeP = 0;
  diaP = diaNa;
  mesP = mesNa;
  anoP = anoNa;
  strcpy(nomeP, nome);
}

void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT) {
  idadeP = anoAT - anoP;
  if (mesP < mesAT) {
    idadeP = idadeP - 1;
  }

  else {
    if (mesP == mesAT) {
      if (diaP < diaAT) {
        idadeP = idadeP - 1;
      }
    }
  }
}

void Pessoa::Imprime_Idade() {
  cout << "A idade da Pessoa " << nomeP << " seria " << idadeP << endl;
}

void Pessoa::Calc_Imprime_Idade(int diaAT, int mesAT, int anoAT) {
  Calc_Idade(diaAT, mesAT, anoAT);
  Imprime_Idade();
}

int Pessoa::informaIdade() {
  return idadeP;
}

void Pessoa::informaProventos() {
  cout << nomeP << " não possui proventos." << endl;
}