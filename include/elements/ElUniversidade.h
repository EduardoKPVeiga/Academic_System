#pragma once

#include "../Universidade.h"

class ElUniversidade
{
 private:
    Universidade* pUniversidade;

 public:
    ElUniversidade( );
    ~ElUniversidade( );
    ElUniversidade *pProx;
    ElUniversidade *pAnte;
    void setUniversidade(Universidade* pu);
    Universidade* getUniversidade ( );
    char* getNome();

};