#include "../include/Disciplina.h"
#include <stdio.h>
#include <string.h>

Disciplina::Disciplina(int na, const char* ac) {
    pDeptoAssociado = NULL;

    pAlunoPrim = NULL;    
    pAlunoAtual = NULL;

    pProx = NULL;
    pAnte = NULL;

    cont_alunos = 0;           
    numero_alunos = na;

    strcpy (area_conhecimento, ac);
}

Disciplina::~Disciplina() {
   ElAluno *paux1, *paux2;
   
   paux1 = pAlunoPrim;
   paux2 = paux1;

   while (paux1 != NULL) {
        paux2 = paux1->pProx;
        delete (paux1);
        paux1 = paux2;		 
   }   
	
   pDeptoAssociado = NULL;
   pAlunoPrim = NULL;  
   pAlunoAtual = NULL;
   pProx = NULL;  
   pAnte = NULL;
}

void Disciplina::setId(int n) {
    id = n;
}

int Disciplina::getId() {
    return id;
}

void Disciplina::setNome(const char* n) {
    strcpy ( nome, n );
}

char* Disciplina::getNome() {
    return nome;
}

void Disciplina::setDepartamento(Departamento* pdpto) {
    pDeptoAssociado = pdpto;

/*
    Cada vez que um Departamento é associado a umaDisciplina,
    esta Disciplina passa a fazer parte da lista de disciplina 
    do Departamento, por meio do comando abaixo.
*/
    pdpto->incluaDisciplina ( this );
}

Departamento* Disciplina::getDepartamento() {
    return pDeptoAssociado;
}

void Disciplina::setAluno ( Aluno* pa )
{
    // Aqui � criado um ponteiro para LAluno
    ElAluno* paux;
    // Aqui � criado um objeto LAluno, sendo seu endere�o armazenado em aux
    paux = new ElAluno ( );

    // Aqui recebe uma c�pia do objeto interm.
    paux->setAluno ( pa );

    paux->pProx = NULL;
    paux->pAnte = NULL;

  if ((cont_alunos < numero_alunos) && (pa != NULL)) {
    
      if ( pAlunoPrim == NULL ) {
         pAlunoPrim   = paux;
         pAlunoAtual  = paux;
      }
      else {
        pAlunoAtual->pProx = paux;
        paux->pAnte        = pAlunoAtual;
        pAlunoAtual        = paux;
      }
      cont_alunos++;

   }
   else {
        //printf ("Aluno n�o inclu�do. Turma j� lotada em %i alunos \n", numero_alunos );
        cout << "Aluno n�o inclu�do. Turma j� lotada em " << numero_alunos << " alunos." << endl;
   }

}

void Disciplina::listeAlunos()
{
    ElAluno* paux;
    paux = pAlunoPrim;

    while (paux != NULL) {
        //printf(" Aluno %s matriculado na Disciplina %s. \n", aux->getNome(), nome);
        cout << " Aluno " << paux->getNome() << " matriculado na Disciplina " << nome << "." << endl;
        paux = paux->pProx;
    }
}

void Disciplina::listeAlunos2()
{
    ElAluno* paux;
    paux = pAlunoAtual;

    while (paux != NULL) {
       //printf(" Aluno %s matriculado na Disciplina %s \n", aux->getNome(), nome);
	   cout << " Aluno " << paux->getNome() << " matriculado na Disciplina " << nome << "." << endl;
       paux = paux->pAnte;
    }

}