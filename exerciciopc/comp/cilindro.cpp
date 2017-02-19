#include <iostream>
#include "cilindro.h"

// construtor
Cilindro::Cilindro(Circulo c, double va): altura(va), base(c) {
};
// destrutor
Cilindro::~Cilindro(){};

// Métodos set
bool Cilindro::setAltura(double va){
	if( va > 0 ){
		this->altura = va;
		return true;
	}
	return false;
};

// Métodos get
double Cilindro::getAltura() const{ return this->altura; };

double Cilindro::getVolume() const{
	return this->base.getArea()*(this->base.getRaio())/3;
};

Circulo Cilindro::getBase() const{
	return this->base;
};