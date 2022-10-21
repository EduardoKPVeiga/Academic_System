#pragma once

#include "Lista.h"
#include "../elements/Elemento.h"
#include "../Pessoa.h"

class ListaPessoas {
private:
    Lista<Pessoa> LTPessoa;

public:
    ListaPessoas();
    virtual ~ListaPessoas();
    void incluaPessoa(Pessoa* pa);
    void listePessoas();
    void listaProventos();
};