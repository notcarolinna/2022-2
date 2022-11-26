#pragma once

class VetorDinamico {
private:
	int* Dados; 
	int Qtd; 
	int Max; 

public:
	VetorDinamico(int max); 
	~VetorDinamico();

	void adiciona(int n);
	int qtdDados(); 
	int getDado(int i);
};
