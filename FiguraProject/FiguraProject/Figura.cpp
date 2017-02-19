#include "Figura.h"

Figura::Figura(int _x, int _y) {
	setPosicao(_x, _y);
}

Figura::~Figura() {
}

void Figura::setPosicao(int _x, int _y) {
	x = _x;
	y = _y;
}

int Figura::getX() const
{
	return x;
}

int Figura::getY() const
{
	return y;
}
