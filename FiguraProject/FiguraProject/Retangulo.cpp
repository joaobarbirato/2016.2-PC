#include "Retangulo.h"

Retangulo::Retangulo(int _lado, int _altura,  int _x, int _y) : Figura(_x, _y) {
	setAltura(_altura);
	setLado(_lado);
}
Retangulo::~Retangulo(){};
void Retangulo::setLado(int _lado) {lado = _lado;};
void Retangulo::setAltura(int _altura){altura = _altura;};
int Retangulo::getLado() const{return lado;};
int Retangulo::getAltura() const{return altura;};

char Retangulo::desenhar() const{return 'R';};