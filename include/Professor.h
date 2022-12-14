#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Conhecimento.h"

class Professor : public Pessoa, public Conhecimento {
private:
    Universidade* pUnivFiliado;
    Departamento* pDptoFiliado;
    float salario;
    float bolsa_projeto;

public:
    Professor(int diaNa, int mesNa, int anoNa, const char* nome = "");
    Professor();
    ~Professor();

    void inicializa();

    void setUnivFiliado(Universidade* pu);
    void setDepartamento(Departamento* pdpto);

    void setSalario(float s);
    float getSalario();

    void setBolsaProjeto(float b);
    float getBolsaProjeto();

    void informaProventos();
    void informaAntiguidade();

    void OndeTrabalha();
    void QualDepartamentoTrabalha();
};