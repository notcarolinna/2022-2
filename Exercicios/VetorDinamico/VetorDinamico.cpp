#include <iostream>
#include "VetorDinamico.h"

VetorDinamico::VetorDinamico(int max) {
	this->Max = max;
	Dados = new int[max];
	Qtd = 0;
}

VetorDinamico::~VetorDinamico() {
	delete Dados;
}

void VetorDinamico::adiciona(int n) {
	if (Qtd == Max) {
		int novoMax = Max * 1.5;
		int* dadosNovos = new int[novoMax];
		for (int i = 0; i < Qtd; i++) {
			dadosNovos[i] == Dados[i];
		}
		delete Dados;
		Dados = dadosNovos;
		Max = novoMax;
	}
	Dados[Qtd++] = n;
}

int VetorDinamico::qtdDados() {
	return Qtd;
}
int VetorDinamico::getDado(int i) {
	return Dados[i];
}
