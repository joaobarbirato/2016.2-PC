#include "Triangulo.h"

Triangulo::Triangulo(int _lado, int _x, int _y): Figura(_x, _y) {
	setLado(_lado);
};
Triangulo::~Triangulo(){};
void Triangulo::setLado(int _lado) {lado = _lado;};
int Triangulo::getLado() const {return lado;};

char Triangulo::desenhar() const {return 'T';}