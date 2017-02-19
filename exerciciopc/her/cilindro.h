#ifndef CILINDRO_H
#define CILINDRO_H

#include "circulo.h"

class Cilindro : public Circulo{
private:
	double altura;
public:
	Cilindro(double=0, double=0, double=0, double=0);
	~Cilindro();
	bool setAltura(double);
	double getAltura() const;
	double getVolume() const;
};

#endif