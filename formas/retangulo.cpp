#include <iostream>
#include "retangulo.h"
using std::cout;
using std::endl;

retangulo::retangulo(double vl){
	if( vl > 0)
		lado = vl;
};
retangulo::~retangulo(){};

void retangulo::desenha() const {
	cout << "~insira aqui um retangulo~" << endl;
};