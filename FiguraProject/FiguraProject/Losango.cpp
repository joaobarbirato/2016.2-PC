#include "Losango.h"

Losango::Losango(int _lado, int _x, int _y) : Figura(_x, _y) {
	setLado(_lado);
}
Losango::~Losango(){};
void Losango::setLado(int _lado) {lado = _lado;};
int Losango::getLado() const{return lado;};

char Losango::desenhar() const{return 'L';};