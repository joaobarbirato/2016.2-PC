#ifndef RETANGULO_H
#define RETANGULO_H

#include "forma.h"

class retangulo: public forma{
private:
	double lado;
public:
	retangulo(double=0);
	~retangulo();
	void desenha() const;
};

#endif