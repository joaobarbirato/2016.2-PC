#include <iostream>
#include "rei.h"

rei::rei(bool c, int posx, int posy): peca(c,posx,posy){};
rei::~rei(){};
bool rei::move(int posx, int posy){
	if( abs(posx - getx()) == 1 || abs(posy - gety()) == 1 || (abs(posx - getx()) == 1 && abs(posy - gety()) == 1) ){
		setx(posx);
		sety(posy);
	}
};