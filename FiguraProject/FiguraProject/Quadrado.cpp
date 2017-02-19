#include "Quadrado.h"

Quadrado::Quadrado(int _lado, int _x, int _y) : Figura(_x, _y) {
	setLado(_lado);
}
Quadrado::~Quadrado(){}
void Quadrado::setLado(int _lado){lado = _lado;};
int Quadrado::getLado() const{return lado;};

char Quadrado::desenhar() const{return 'Q';};
