#include <iostream>
#include "circulo.h"

const double PI = 3.14;

// construtor
Circulo::Circulo(Ponto vcentro, double vr):raio(vr), centro(vcentro) {
};
// destrutor
Circulo::~Circulo(){};

// Métodos set
bool Circulo::setRaio(double vr){
	if( vr > 0 ){
		this->raio = vr;
		return true;
	}
	return false;
};

// Métodos get
double Circulo::getRaio() const{
	return this->raio;
};
double Circulo::getArea() const{
	return (this->raio)*(this->raio)*PI;
};
double Circulo::getCircunferencia() const{
	return 2*PI*(this->raio);
};
Ponto Circulo::getCentro() const{
	return this->centro;
};