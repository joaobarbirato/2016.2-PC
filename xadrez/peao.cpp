#include <iostream>
#include "peao.h"

peao::peao(bool c, int posx, int posy): peca(c,posx,posy){};
peao::~peao(){};
bool peao::move(int posx, int posy){
	if( posx == getx() && posy - gety() == 1 )
		sety(posy);
};