#include <iostream>
#include "ponto.h"

//construtor
Ponto::Ponto(double vx, double vy): x(vx), y(vy){};
//destrutor
Ponto::~Ponto(){};

// Métodos set
void Ponto::setx(double vx){
	this->x = vx;
};
void Ponto::sety(double vy){
	this->x = vy;
};

// Métodos get
double Ponto::getx() const{
	return this->x;
};

double Ponto::gety() const{
	return this->y;
};