#pragma once
#include "Figura.h"
class Retangulo :
	public Figura
{
private:
	int lado, altura;
public:
	void setLado(int);
	void setAltura(int);
	int getLado() const;
	int getAltura() const;

	char desenhar() const;
	Retangulo(int, int, int, int);
	~Retangulo();
};

