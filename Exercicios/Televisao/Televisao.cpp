#include <iostream>
#include "Televisao.h"
using namespace std;

Televisao::Televisao() {
	this->Volume = 5;
	this->Canal = 1;
}

Televisao::Televisao(int volume, int canal) {
	this->Volume = volume;
	this->Canal = canal;
}

Televisao::~Televisao() {}

int Televisao::getVolume() {
	return Volume;
}

void Televisao::setVolume(int volume) {
	this->Volume = volume;
}

int Televisao::getCanal() {
	return Canal;
}

void Televisao::setCanal(int canal) {
	this->Canal = canal;
}

void Televisao::Dados() {

	int op = 0;

	while (true) {
		cout << endl << endl << endl;
		cout << "=========== OPCOES CONTROLE ===========" << endl;
		cout << "1. Aumentar o volume" << endl;
		cout << "2. Diminuir o volume" << endl;
		cout << "3. Proximo canal" << endl;
		cout << "4. Canal anterior" << endl;
		cout << "5. Selecionar canal" << endl;
		cout << "6. Consultar volume e canal selecionado" << endl;
		cout << "Opcao escolhida: " << endl;
		cin >> op;

		switch (op) {
		case 1:
			if (getVolume() < 10) {
				setVolume(getVolume() + 1);
				cout << "O volume da TV foi aumentado em uma unidade." << endl;
			}
			break;
		case 2:
			if (getVolume() > 0) {
				setVolume(getVolume() - 1);
				cout << "O volume da TV foi reduzido em uma unidade." << endl;
			}
			break;
		case 3:
			if (getCanal() < 20) {
				setCanal(getCanal() + 1);
				cout << "O canal da TV foi aumentado em uma unidade." << endl;
			}
			break;
		case 4:
			if (getCanal() > 1) {
				setCanal(getCanal() - 1);
				cout << "O volume da TV foi reduzido em uma unidade." << endl;
			}
			break;
		case 5:
			cout << "Informe o canal desejado: " << endl;
			cin >> Canal;
			setCanal(Canal);
			cout << "O canal foi alterado para: " << getCanal() << endl;
			break;
		case 6:
			cout << "Volume atual: " << getVolume() << endl;
			cout << "Canal atual: " << getCanal() << endl;
			break;
		}
	}
}
