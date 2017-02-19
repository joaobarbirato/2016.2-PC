#include <iostream>
#include "complexo.h"

Complexo::Complexo(double vr, double vi): real(vr), imag(vi){};
Complexo::~Complexo(){};// destrutor

//get
double Complexo::getr(){ return real; };
double Complexo::geti(){ return imag; };

//set
void Complexo::setr(double real){ this->real = real; };
void Complexo::seti(double imag){ this->imag = imag; };

// sobrecarga soma
Complexo Complexo::operator+(Complexo x){
	return Complexo(real + x.getr(), img + x.geti());
};

// sobrecarga subtração
Complexo Complexo::operator-(Complexo x){
	return Complexo(real - x.getr(), img - x.geti());
};