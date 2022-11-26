#pragma once
#include <iostream>
#ifndef PESSOA_H

using namespace std;

class Pessoa
{
private:
	string Nome;
	int Idade;
	float Altura;
	char Genero;

public:
	Pessoa();
	Pessoa(string nome, int idade, float altura, char genero);
	~Pessoa();

	string getNome();
	int getIdade();
	float getAltura();
	char getGenero();

	void setNome(string nome);
	void setIdade(int idade);
	void setAltura(float altura);
	void setGenero(char genero);

	void ImprimeDados();

};

#endif
