#ifndef CACHORRO_H
#define CACHORRO_H

#include <iostream>
#include "Animal.h"
using namespace std;

class Cachorro: public Animal{
private:
	int nPulgas;
public:
	Cachorro(string="", int=0);
	~Cachorro();
	int getPulgas() const;
	void emitirSom() const;
	void abanarRabo() const;
};

#endif