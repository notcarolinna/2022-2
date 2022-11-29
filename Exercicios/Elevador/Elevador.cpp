#include "Elevador.h"
#include <iostream>

Elevador::Elevador() {
	AndarAtual = 0;
	TotalAndares = 0;
	Capacidade = 0;
	PessoasPresentes = 0;
}

int Elevador::inicializa(int capacidade, int total) {
	this->Capacidade = capacidade;
	this->TotalAndares = total;
}

void Elevador::entra() {
	if (PessoasPresentes < Capacidade) {
		PessoasPresentes++;
	}
	else {
		std::cout << "O elevador está lotado, espere um pouco!" << std::endl;
	}
}

void Elevador::sai() {
	if (PessoasPresentes != 0) {
		PessoasPresentes--;
	}
}

void Elevador::sobe() {
	if (AndarAtual < TotalAndares) {
		AndarAtual++;
	}
}

void Elevador::desce() {
	if (AndarAtual > 0) {
		AndarAtual--;
	}
}

int Elevador::getAndarAtual() {
	return AndarAtual;
}

int Elevador::getTotalAndares() {
	return TotalAndares;
}

int Elevador::getCapacidade() {
	return Capacidade;
}

int Elevador::getPessoasPresentes() {
	return PessoasPresentes;
}
