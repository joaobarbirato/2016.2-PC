#ifndef FRACAO_H
#define FRACAO_H

#include <iostream>

using std::ostream;
using std::istream;

class Fracao{
private:
	int numerador;
	int denominador;
public:
	Fracao(int=0, int=1);
	void setNum(int);
	bool setDen(int);
	int getNum() const;
	int getDen() const;
	void imprime();

	bool operator>(const Fracao & f) const;

	Fracao operator*(const Fracao &) const;
	Fracao operator*(int);

	Fracao operator++(int);
	Fracao & operator++();

	friend ostream & operator<<(ostream &saida, const Fracao& x);
	friend istream & operator>>(istream &entrada, Fracao &x);
	friend Fracao operator*(int, const Fracao &);
};

#endif