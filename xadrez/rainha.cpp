#include <iostream>
#include "rainha.h"

rainha::rainha(bool c, int posx, int posy): peca(c,posx,posy){};
rainha::~rainha(){};
bool rainha::move(int posx, int posy){
	if( posx - getx() ==0 || posy - gety() == 0 || () ){
		setx(posx);
		sety(posy);
	}
};