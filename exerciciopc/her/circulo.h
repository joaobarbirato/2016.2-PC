#ifndef CIRCULO_H
#define CIRCULO_H

#include "ponto.h"

class Circulo : public Ponto{
private:
	double raio;
public:
	Circulo(double=0,double=0,double=0);
	~Circulo();
	bool setRaio(double);
	double getRaio() const;
	double getArea() const;
	double getCircunferencia() const;
};

#endif