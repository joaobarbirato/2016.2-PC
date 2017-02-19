#include <iostream>
#include "peca.h"

peca::peca(bool c, int posx, int posy): cor(c){
	setx(posx);
	sety(posy);
};
peca::~peca(){};
bool peca::getCor() const {return cor;};
int peca::getx() const {return x;};
int peca::gety() const {return y;};
bool peca::setx(int a){
	if(a < 8 && a >= 0){
		x = a;
		return true;
	}
	return false;
};
bool peca::sety(int a){
	if(a < 8 && a >= 0){
		y = a;
		return true;
	}
	return false;
};
/*
bool peca::move(int posx, int posy){
	cout << "dude, how??" << endl;
};
*/