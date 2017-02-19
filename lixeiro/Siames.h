#ifndef SIAMES_H
#define SIAMES_H

#include <iostream>
#include "Gato.h"
using namespace std;

class Siames: public Gato{
private:
	int classyness;
public:
	Siames(string="",int=0,int=0);
	~Siames();
	int getClassy() const;
	void emitirSom() const;
};

#endif