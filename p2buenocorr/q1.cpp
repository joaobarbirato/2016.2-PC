#include <iostream>
#include "q1.h"

double Complexo::getr() const{ return real; };
double Complexo::geti() const{ return imag; };
void Complexo::setr(double x){ real = x; };
void Complexo::seti(double x){ imag = x; };

Complexo Complexo::operator+(const int & x){
	return Complexo(real + x, imag);
};

Complexo & Complexo::operator++(){
	real++;
	return *this;
};

Complexo Complexo::operator++(int fantasma){
	Complexo saida(*this);
	this->setr(saida.getr() + 1);
	return saida;
};

bool Complexo::operator==(const Complexo & z){
	if(real == z.getr() && imag == z.geti())
		return true;
	return false;
};

bool Complexo::operator!=(const Complexo & z){
	if(real != z.getr() && imag != z.geti())
		return true;
	return false;
};