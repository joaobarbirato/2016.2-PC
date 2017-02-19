#include "Circulo.h"

Circulo::Circulo(int _raio, int _x, int _y) : Figura(_x, _y) {
	setRaio(_raio);
}
Circulo::~Circulo(){};
void Circulo::setRaio(int _raio){raio = _raio;};
int Circulo::getRaio() const{return raio;};

char Circulo::desenhar() const{return 'C';};