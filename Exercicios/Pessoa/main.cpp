#include <iostream>
#include <iomanip>
#include <string>
#include "Pessoa.h"
using namespace std;

// Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e altura.
// Crie os métodos públicos  necessários para sets e gets e também um método para imprimir os dados de uma pessoa.

int main()
{

	Pessoa p;

	string nome;
	int idade;
	float altura;
	char genero;

	cout << "Digite o nome: ";
	getline(cin, nome);
	cout << "Digite a idade: ";
	cin >> idade;
	cout << "Digite a altura: ";
	cin >> altura;
	cout << "Digite o genero: ";
	cin >> genero;

	p.setNome(nome);
	p.setIdade(idade);
	p.setAltura(altura);
	p.setGenero(genero);

	p.ImprimeDados();

}
