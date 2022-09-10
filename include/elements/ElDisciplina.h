#pragma once

#include "../Disciplina.h"

class ElDisciplina {
private:
    Disciplina* pDisciplina;

public:
    ElDisciplina( );
    ~ElDisciplina( );

    ElDisciplina *pProx;
    ElDisciplina *pAnte;
    
    void setDisciplina(Disciplina* pdi);
    Disciplina* getDisciplina ( );

    char* getNome();
};