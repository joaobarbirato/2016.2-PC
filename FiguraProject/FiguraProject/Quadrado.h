#pragma once
#include "Figura.h"
class Quadrado :public Figura {
private:
	int lado;

public:
	void setLado(int);
	int getLado() const;

	char desenhar() const;
	Quadrado(int, int, int);
	~Quadrado();
};

