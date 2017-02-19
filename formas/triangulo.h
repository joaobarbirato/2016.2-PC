#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "forma.h"

class triangulo: public forma{
private:
	double a;
public:
	triangulo(double=0);
	~triangulo();
	void desenha() const;
};

#endif