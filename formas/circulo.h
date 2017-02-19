#ifndef CIRCULO_H
#define CIRCULO_H

#include "forma.h"

class circulo: public forma{
private:
	double raio;
public:
	circulo(double=0);
	~circulo();
	void desenha() const;
};

#endif