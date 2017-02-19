#ifndef CIRCULO_H
#define CIRCULO_H

#include "ponto.h"

class Circulo{
private:
	double raio;
	const Ponto centro;
public:
	Circulo(Ponto,double=0);
	~Circulo();
	bool setRaio(double);
	Ponto getCentro() const;
	double getRaio() const;
	double getArea() const;
	double getCircunferencia() const;
};

#endif