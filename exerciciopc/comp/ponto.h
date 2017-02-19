#ifndef PONTO_H
#define PONTO_H

class Ponto{
private:
	double x;
	double y;
public:
	Ponto(double=0, double=0);
	~Ponto();
	void setx(double);
	void sety(double);
	double getx() const;
	double gety() const;
};

#endif