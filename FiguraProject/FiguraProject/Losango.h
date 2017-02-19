#pragma once
#include "Figura.h"
class Losango :
	public Figura
{
private:
	int lado;

public:
	void setLado(int);
	int getLado() const;

	char desenhar() const;
	Losango(int, int, int);
	~Losango();
};

