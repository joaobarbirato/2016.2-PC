#include <iostream>
#include "triangulo.h"
using std::cout;
using std::endl;

triangulo::triangulo(double va){
	if( va > 0 ){
		a = va;
	}
};
triangulo::~triangulo(){};

void triangulo::desenha() const {
	cout << "~insira aqui um triangulo~" << endl;
};