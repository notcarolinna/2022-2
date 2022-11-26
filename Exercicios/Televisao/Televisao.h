#pragma once
#ifndef TELEVISAO.H

class Televisao {
private:
	int Volume;
	int Canal;

public:
	Televisao();
	Televisao(int volume, int canal);
	~Televisao();

	int getVolume();
	int getCanal();

	void setVolume(int volume);
	void setCanal(int canal);

	void Dados();
};

#endif
