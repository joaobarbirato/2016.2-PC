#ifndef CILINDRO_H
#define CILINDRO_H

#include "circulo.h"

class Cilindro{
private:
	double altura;
	const Circulo base;
public:
	Cilindro(Circulo, double=0);
	~Cilindro();
	bool setAltura(double);
	Circulo getBase() const;
	double getAltura() const;
	double getVolume() const;
};

#endif