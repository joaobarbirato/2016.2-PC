#include <iostream>
#include "circulo.h"
using std::cout;
using std::endl;

circulo::circulo(double vl){
	if( vl > 0)
		raio = vl;
};
circulo::~circulo(){};

void circulo::desenha() const {
	cout << "~insira aqui um circulo~" << endl;
};