#include <iostream>
#include "cilindro.h"

// construtor
Cilindro::Cilindro(double vx, double vy, double vr, double va): altura(va) {
	setx(vx);
	sety(vy);
	setRaio(vr);
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
	return getArea()*(this->getRaio())/3;
}