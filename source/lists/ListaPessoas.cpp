#include "../include/lists/ListaPessoas.h"

ListaPessoas::ListaPessoas() {}

ListaPessoas::~ListaPessoas() {}

void ListaPessoas::incluaPessoa(Pessoa* pa) {
    LTPessoa.incluaInfo(pa);
}

void ListaPessoas::listePessoas() {
    Elemento<Pessoa>* pElAux = NULL;
	Pessoa* pPeAux = NULL;
	pElAux = LTPessoa.getpPrimeiro();

    while (pElAux != NULL)
    {
		pPeAux = pElAux->getInfo();
		cout << " Nome da pessoa:  " << pPeAux->getNome() << "." << endl;
		pElAux = pElAux->getProximo();
    }
}

void ListaPessoas::listaProventos() {

    Elemento<Pessoa>*	ponteiroElementoPessoa;
	Pessoa*				ponteiroPessoa;

	ponteiroElementoPessoa  = LTPessoa.getpPrimeiro();

	while ( ponteiroElementoPessoa != NULL )
	{
		ponteiroPessoa = ponteiroElementoPessoa->getInfo();

		ponteiroPessoa->informaProventos();

		ponteiroElementoPessoa = ponteiroElementoPessoa->getProximo();
	}
}