#pragma once
#ifndef PAIS_H
#include <iostream>
#include <string>
using namespace std;

class Pais {
private:
	string Nome;
	string Capital;
	float Area;
	int Pop; //população
	float Densidade;
	void calculaDensidade(); // D = POP / AREA

public:
	Pais();
	Pais(string nome, string capital, float area, int pop);
	~Pais();

	string getNome();
	string getCapital();
	float getArea();
	int getPop();
	float getDensidade();

	void setNome(string nome);
	void setCapital(string capital);
	void setArea(float area);
	void setPop(int pop);

	string toString();
};





#endif
