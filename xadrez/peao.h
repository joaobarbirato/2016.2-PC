#ifndef PEAO_H
#define PEAO_H
#include "peca.h"

class peao: public peca{
public:
	peao(bool=false,int=0,int=0);
	~peao();
	bool move(int, int);
};

#endif