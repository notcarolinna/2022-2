#include <sstream>
#include "Pais.h"

Pais::Pais() {
	float Area = 0.0;
	int Pop = 0;
	float Densidade = 0.0;
}

Pais::Pais(string nome, string capital, float area, int pop) {
	this->Nome = nome;
	this->Capital = capital;
	this->Area = area;
	this->Pop = pop;
	calculaDensidade();
}

Pais::~Pais() {}

void Pais::calculaDensidade() {
	Densidade = Pop / Area;
}



string Pais::getNome() {
	return Nome;
}
string Pais::getCapital() {
	return Capital;
}
float Pais::getArea() {
	return Area;
}
int Pais::getPop() {
	return Pop;
}
float Pais::getDensidade() {
	return Densidade;
}



void Pais::setNome(string nome) {
	this->Nome = nome;
}

void Pais::setCapital(string capital) {
	this->Capital = capital;
}

void Pais::setArea(float area) {
	this->Area = area;
	calculaDensidade();
}

void Pais::setPop(int pop) {
	this->Pop = pop;
	calculaDensidade();
}

string Pais::toString() {
	stringstream ss;
	ss << Nome;
	ss << " - capital = " << Capital;
	ss << " - area = " << Area;
	ss << " - populacao = " << Pop;
	ss << " - densidade = " << Densidade;
	return ss.str();
}
