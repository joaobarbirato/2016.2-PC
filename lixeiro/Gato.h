#ifndef GATO_H
#define GATO_H

#include <iostream>
#include "Animal.h"
using namespace std;

class Gato: public Animal{
private:
	int bolaPelos;
public:
	Gato(string="",int=0);
	~Gato();
	int getBP() const;
	void emitirSom() const;
	void cairDePe() const;
};

#endif