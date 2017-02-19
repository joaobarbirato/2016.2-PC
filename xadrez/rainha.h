#ifndef RAINHA_H
#define RAINHA_H
#include "peca.h"

class rainha: public peca{
public:
	rainha(bool=false,int=0,int=0);
	~rainha();
	bool move(int, int);
};

#endif