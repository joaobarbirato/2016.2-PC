#pragma once
#include "Figura.h"

class Circulo : public Figura {
private:
	int raio;

public:
	void setRaio(int);
	int getRaio() const;

	char desenhar() const;
	Circulo(int, int, int);
	~Circulo();
};

