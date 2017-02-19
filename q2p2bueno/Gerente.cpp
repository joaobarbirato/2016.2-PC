#include <iostream>
#include "Gerente.h"

int Gerente::getSup() const{ return supervisao; };
bool Gerente::setSup(int x){
	if(x >= 0){
		supervisao = x;
		return true;
	}
	return false;
};

double Gerente::remuneracao() const{
	return (supervisao*0.001*getSFM() + getSFM());
};