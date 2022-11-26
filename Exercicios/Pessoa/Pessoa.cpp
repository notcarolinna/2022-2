#include <iostream>
#include "Pessoa.h"
using namespace std;

Pessoa::Pessoa() {

}

Pessoa::Pessoa(string nome, int idade, float altura, char genero) {
	this->Nome = nome;
	this->Idade = idade;
	this->Altura = altura;
	this->Genero = genero;
}

Pessoa::~Pessoa() {

}

string Pessoa::getNome() {
	return Nome;
}

void Pessoa::setNome(string nome) {
	this->Nome = nome;
}

int Pessoa::getIdade() {
	return Idade;
}

void Pessoa::setIdade(int idade) {
	this->Idade = idade;
}

float Pessoa::getAltura() {
	return Altura;
}

void Pessoa::setAltura(float altura) {
	this->Altura = altura;
}

char Pessoa::getGenero() {
	return Genero;
}

void Pessoa::setGenero(char genero) {
	this->Genero;
}

void Pessoa::ImprimeDados() {

	cout << "Nome: " << Nome << endl;
	cout << "Idade: " << Idade << endl;
	cout << "Altura: " << Altura << endl;
	cout << "Genero: " << Genero << endl;

}
