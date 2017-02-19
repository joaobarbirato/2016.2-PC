#include "Figura.h"

class Triangulo: public Figura{
private:
	int lado;
public:
	void setLado(int);
	int getLado() const;
	char desenhar() const;
	Triangulo(int, int, int);
	~Triangulo();
};